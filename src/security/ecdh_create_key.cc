#include "security/ecdh_create_key.h"

#include <openssl/ec.h>
#include <openssl/ecdh.h>
#include <openssl/evp.h>

#include "security/schnorr.h"

namespace lego {

namespace security {

EcdhCreateKey* EcdhCreateKey::Instance() {
    static EcdhCreateKey ins;
    return &ins;
}

int EcdhCreateKey::Init() {
    const Curve& curve = Schnorr::Instance()->curve();
    ec_key_ = EC_KEY_new();
    if (ec_key_ == NULL) {
        CRYPTO_ERROR("create ec ec_key_ failed!");
        return kSecurityError;
    }

    if (EC_KEY_set_group(ec_key_, curve.group_.get()) != 1) {
        CRYPTO_ERROR("ec_key_ set group failed!");
        return kSecurityError;
    }

    auto prikey = Schnorr::Instance()->prikey()->bignum().get();
    if (EC_KEY_set_private_key(ec_key_, prikey) != 1) {
        CRYPTO_ERROR("ec_key_ set private ec_key_ failed!");
        return kSecurityError;
    }

    auto pubkey = Schnorr::Instance()->pubkey()->ec_point().get();
    if (EC_KEY_set_public_key(ec_key_, pubkey) != 1) {
        CRYPTO_ERROR("ec_key_ set public ec_key_ failed!");
        return kSecurityError;
    }
    field_size_ = EC_GROUP_get_degree(EC_KEY_get0_group(ec_key_));
    return kSecuritySuccess;
}

int EcdhCreateKey::CreateKey(const PublicKey& peer_pubkey, std::string& sec_key) {
    auto secret_len = (field_size_ + 7) / 8;
    std::cout << field_size_ << ":" << secret_len << std::endl;
    sec_key.resize(secret_len, 0);
    secret_len = ECDH_compute_key(
            ((void*)&(sec_key[0])),
            secret_len, peer_pubkey.ec_point().get(),
            ec_key_,
            NULL);
    if (secret_len <= 0) {
        CRYPTO_ERROR("ECDH_compute_key failed!");
        return kSecurityError;
    }
    return kSecuritySuccess;
}

EcdhCreateKey::EcdhCreateKey() {}

EcdhCreateKey::~EcdhCreateKey() {
    if (ec_key_ != nullptr) {
        EC_KEY_free(ec_key_);
    }
}


}  // namespace security

}  // namespace lego
