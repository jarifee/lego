#pragma once

#include <map>
#include <string>
#include <cstdint>

#include "common/utils.h"

namespace lego {

namespace common {

enum CountryCode {
    AQ = 0, BI = 1, CF = 2, TD = 3, CG = 4, RW = 5, ZR = 6, BZ = 7, CR = 8, SV = 9,
    GT = 10, HN = 11, MX = 12, NI = 13, PA = 14, KZ = 15, KG = 16, TJ = 17, TM = 18,
    UZ = 19, AT = 20, CZ = 21, HU = 22, LI = 23, SK = 24, CH = 25, CN = 26, JP = 27,
    KP = 28, KR = 29, TW = 30, HK = 31, MO = 32, DJ = 33, ER = 34, ET = 35, KE = 36,
    SO = 37, TZ = 38, UG = 39, BY = 40, EE = 41, LV = 42, LT = 43, MD = 44, PL = 45,
    UA = 46, KM = 47, MG = 48, MU = 49, YT = 50, RE = 51, SC = 52, CA = 53, GL = 54,
    PM = 55, US = 56, UM = 57, DZ = 58, EG = 59, LY = 60, MA = 61, SD = 62, TN = 63,
    EH = 64, MN = 65, RU = 66, DK = 67, FO = 68, FI = 69, IS = 70, NO = 71, SJ = 72,
    SE = 73, AS = 74, AU = 75, CK = 76, FJ = 77, PF = 78, GU = 79, KI = 80, MH = 81,
    FM = 82, NR = 83, NC = 84, NZ = 85, NU = 86, NF = 87, MP = 88, PW = 89, PG = 90,
    PN = 91, SB = 92, TK = 93, TO = 94, TV = 95, VU = 96, WF = 97, WS = 98, AR = 99,
    BO = 100, BR = 101, CL = 102, CO = 103, EC = 104, FK = 105, GF = 106, GY = 107,
    PY = 108, PE = 109, SR = 110, UY = 111, VE = 112, AF = 113, BD = 114, BT = 115,
    IN = 116, MV = 117, NP = 118, PK = 119, LK = 120, IO = 121, BV = 122, SH = 123,
    GS = 124, BN = 125, KH = 126, CX = 127, CC = 128, ID = 129, LA = 130, MY = 131,
    MM = 132, PH = 133, SG = 134, TH = 135, VN = 136, TP = 137, AL = 138, BA = 139,
    BG = 140, HR = 141, GR = 142, MK = 143, RO = 144, SI = 145, YU = 146, AM = 147,
    AZ = 148, BH = 149, CY = 150, GE = 151, IR = 152, IQ = 153, IL = 154, JO = 155,
    KW = 156, LB = 157, OM = 158, QA = 159, SA = 160, SY = 161, TR = 162, AE = 163,
    YE = 164, AD = 165, GI = 166, PT = 167, ES = 168, AO = 169, BW = 170, LS = 171,
    MW = 172, MZ = 173, NA = 174, ZA = 175, SZ = 176, ZM = 177, ZW = 178, VA = 179,
    IT = 180, MT = 181, SM = 182, TF = 183, HM = 184, AI = 185, AG = 186, AW = 187,
    BS = 188, BB = 189, BM = 190, VG = 191, KY = 192, CU = 193, DM = 194, DO = 195,
    GD = 196, GP = 197, HT = 198, JM = 199, MQ = 200, MS = 201, AN = 202, PR = 203,
    KN = 204, LC = 205, VC = 206, TT = 207, TC = 208, VI = 209, BJ = 210, BF = 211,
    CM = 212, CV = 213, CI = 214, GQ = 215, GA = 216, GM = 217, GH = 218, GN = 219,
    GW = 220, LR = 221, ML = 222, MR = 223, NE = 224, NG = 225, ST = 226, SN = 227,
    SL = 228, TG = 229, BE = 230, FR = 231, DE = 232, IE = 233, LU = 234, MC = 235,
    NL = 236, GB = 237, UK = 238, FX = 239
};

static std::map<std::string, uint8_t> global_country_map = {
    { "AQ", AQ }, { "BI", BI }, { "CF", CF }, { "TD", TD }, { "CG", CG }, { "RW", RW },
    { "ZR", ZR }, { "BZ", BZ }, { "CR", CR }, { "SV", SV }, { "GT", GT }, { "HN", HN },
    { "MX", MX }, { "NI", NI }, { "PA", PA }, { "KZ", KZ }, { "KG", KG }, { "TJ", TJ },
    { "TM", TM }, { "UZ", UZ }, { "AT", AT }, { "CZ", CZ }, { "HU", HU }, { "LI", LI },
    { "SK", SK }, { "CH", CH }, { "CN", CN }, { "JP", JP }, { "KP", KP }, { "KR", KR },
    { "TW", TW }, { "HK", HK }, { "MO", MO }, { "DJ", DJ }, { "ER", ER }, { "ET", ET },
    { "KE", KE }, { "SO", SO }, { "TZ", TZ }, { "UG", UG }, { "BY", BY }, { "EE", EE },
    { "LV", LV }, { "LT", LT }, { "MD", MD }, { "PL", PL }, { "UA", UA }, { "KM", KM },
    { "MG", MG }, { "MU", MU }, { "YT", YT }, { "RE", RE }, { "SC", SC }, { "CA", CA },
    { "GL", GL }, { "PM", PM }, { "US", US }, { "UM", UM }, { "DZ", DZ }, { "EG", EG },
    { "LY", LY }, { "MA", MA }, { "SD", SD }, { "TN", TN }, { "EH", EH }, { "MN", MN },
    { "RU", RU }, { "DK", DK }, { "FO", FO }, { "FI", FI }, { "IS", IS }, { "NO", NO },
    { "SJ", SJ }, { "SE", SE }, { "AS", AS }, { "AU", AU }, { "CK", CK }, { "FJ", FJ },
    { "PF", PF }, { "GU", GU }, { "KI", KI }, { "MH", MH }, { "FM", FM }, { "NR", NR },
    { "NC", NC }, { "NZ", NZ }, { "NU", NU }, { "NF", NF }, { "MP", MP }, { "PW", PW },
    { "PG", PG }, { "PN", PN }, { "SB", SB }, { "TK", TK }, { "TO", TO }, { "TV", TV },
    { "VU", VU }, { "WF", WF }, { "WS", WS }, { "AR", AR }, { "BO", BO }, { "BR", BR },
    { "CL", CL }, { "CO", CO }, { "EC", EC }, { "FK", FK }, { "GF", GF }, { "GY", GY },
    { "PY", PY }, { "PE", PE }, { "SR", SR }, { "UY", UY }, { "VE", VE }, { "AF", AF },
    { "BD", BD }, { "BT", BT }, { "IN", IN }, { "MV", MV }, { "NP", NP }, { "PK", PK },
    { "LK", LK }, { "IO", IO }, { "BV", BV }, { "SH", SH }, { "GS", GS }, { "BN", BN },
    { "KH", KH }, { "CX", CX }, { "CC", CC }, { "ID", ID }, { "LA", LA }, { "MY", MY },
    { "MM", MM }, { "PH", PH }, { "SG", SG }, { "TH", TH }, { "VN", VN }, { "TP", TP },
    { "AL", AL }, { "BA", BA }, { "BG", BG }, { "HR", HR }, { "GR", GR }, { "MK", MK },
    { "RO", RO }, { "SI", SI }, { "YU", YU }, { "AM", AM }, { "AZ", AZ }, { "BH", BH },
    { "CY", CY }, { "GE", GE }, { "IR", IR }, { "IQ", IQ }, { "IL", IL }, { "JO", JO },
    { "KW", KW }, { "LB", LB }, { "OM", OM }, { "QA", QA }, { "SA", SA }, { "SY", SY },
    { "TR", TR }, { "AE", AE }, { "YE", YE }, { "AD", AD }, { "GI", GI }, { "PT", PT },
    { "ES", ES }, { "AO", AO }, { "BW", BW }, { "LS", LS }, { "MW", MW }, { "MZ", MZ },
    { "NA", NA }, { "ZA", ZA }, { "SZ", SZ }, { "ZM", ZM }, { "ZW", ZW }, { "VA", VA },
    { "IT", IT }, { "MT", MT }, { "SM", SM }, { "TF", TF }, { "HM", HM }, { "AI", AI },
    { "AG", AG }, { "AW", AW }, { "BS", BS }, { "BB", BB }, { "BM", BM }, { "VG", VG },
    { "KY", KY }, { "CU", CU }, { "DM", DM }, { "DO", DO }, { "GD", GD }, { "GP", GP },
    { "HT", HT }, { "JM", JM }, { "MQ", MQ }, { "MS", MS }, { "AN", AN }, { "PR", PR },
    { "KN", KN }, { "LC", LC }, { "VC", VC }, { "TT", TT }, { "TC", TC }, { "VI", VI },
    { "BJ", BJ }, { "BF", BF }, { "CM", CM }, { "CV", CV }, { "CI", CI }, { "GQ", GQ },
    { "GA", GA }, { "GM", GM }, { "GH", GH }, { "GN", GN }, { "GW", GW }, { "LR", LR },
    { "ML", ML }, { "MR", MR }, { "NE", NE }, { "NG", NG }, { "ST", ST }, { "SN", SN },
    { "SL", SL }, { "TG", TG }, { "BE", BE }, { "FR", FR }, { "DE", DE }, { "IE", IE },
    { "LU", LU }, { "MC", MC }, { "NL", NL }, { "GB", GB }, { "UK", UK }, { "FX", FX },
};

}  // namespace common

}  // namespace lego
