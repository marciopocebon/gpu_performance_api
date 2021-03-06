//==============================================================================
// Copyright (c) 2010-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL counter definitions for GFX9
//==============================================================================

#include "gpa_counter.h"
#include "gpa_hw_counter_gfx9.h"
#include "gpa_hw_exposed_counters_gfx9.h"
#include "gpa_hw_counter_gl_gfx9.h"

// This file is autogenerated by the ConvertHWEnums project

namespace countergfx9
{
    GPA_HardwareCounterDesc* gl_counter_group_array_gfx9[] = {
        cb0_counters_gfx9,
        cb1_counters_gfx9,
        cb2_counters_gfx9,
        cb3_counters_gfx9,
        cpf_counters_gfx9,
        db0_counters_gfx9,
        db1_counters_gfx9,
        db2_counters_gfx9,
        db3_counters_gfx9,
        grbm_counters_gfx9,
        grbmse0_counters_gfx9,
        pa_su0_counters_gfx9,
        pa_sc0_counters_gfx9,
        spi0_counters_gfx9,
        sq0_counters_gfx9,
        sq_es0_counters_gfx9,
        sq_gs0_counters_gfx9,
        sq_vs0_counters_gfx9,
        sq_ps0_counters_gfx9,
        sq_ls0_counters_gfx9,
        sq_hs0_counters_gfx9,
        sq_cs0_counters_gfx9,
        sx0_counters_gfx9,
        ta0_counters_gfx9,
        ta1_counters_gfx9,
        ta2_counters_gfx9,
        ta3_counters_gfx9,
        ta4_counters_gfx9,
        ta5_counters_gfx9,
        ta6_counters_gfx9,
        ta7_counters_gfx9,
        ta8_counters_gfx9,
        ta9_counters_gfx9,
        ta10_counters_gfx9,
        ta11_counters_gfx9,
        ta12_counters_gfx9,
        ta13_counters_gfx9,
        ta14_counters_gfx9,
        ta15_counters_gfx9,
        tca0_counters_gfx9,
        tca1_counters_gfx9,
        tcc0_counters_gfx9,
        tcc1_counters_gfx9,
        tcc2_counters_gfx9,
        tcc3_counters_gfx9,
        tcc4_counters_gfx9,
        tcc5_counters_gfx9,
        tcc6_counters_gfx9,
        tcc7_counters_gfx9,
        tcc8_counters_gfx9,
        tcc9_counters_gfx9,
        tcc10_counters_gfx9,
        tcc11_counters_gfx9,
        tcc12_counters_gfx9,
        tcc13_counters_gfx9,
        tcc14_counters_gfx9,
        tcc15_counters_gfx9,
        td0_counters_gfx9,
        td1_counters_gfx9,
        td2_counters_gfx9,
        td3_counters_gfx9,
        td4_counters_gfx9,
        td5_counters_gfx9,
        td6_counters_gfx9,
        td7_counters_gfx9,
        td8_counters_gfx9,
        td9_counters_gfx9,
        td10_counters_gfx9,
        td11_counters_gfx9,
        td12_counters_gfx9,
        td13_counters_gfx9,
        td14_counters_gfx9,
        td15_counters_gfx9,
        tcp0_counters_gfx9,
        tcp1_counters_gfx9,
        tcp2_counters_gfx9,
        tcp3_counters_gfx9,
        tcp4_counters_gfx9,
        tcp5_counters_gfx9,
        tcp6_counters_gfx9,
        tcp7_counters_gfx9,
        tcp8_counters_gfx9,
        tcp9_counters_gfx9,
        tcp10_counters_gfx9,
        tcp11_counters_gfx9,
        tcp12_counters_gfx9,
        tcp13_counters_gfx9,
        tcp14_counters_gfx9,
        tcp15_counters_gfx9,
        gds_counters_gfx9,
        vgt0_counters_gfx9,
        ia0_counters_gfx9,
        wd_counters_gfx9,
        cpg_counters_gfx9,
        cpc_counters_gfx9,
        gpin_counters_gfx9,
        gputime_counters_gfx9,
    };

    GPA_HardwareCounterDesc* gl_exposed_counters_group_array_gfx9[] = {
        cb0_exposed_counters_gfx9,
        cb1_exposed_counters_gfx9,
        cb2_exposed_counters_gfx9,
        cb3_exposed_counters_gfx9,
        cpf_exposed_counters_gfx9,
        db0_exposed_counters_gfx9,
        db1_exposed_counters_gfx9,
        db2_exposed_counters_gfx9,
        db3_exposed_counters_gfx9,
        grbm_exposed_counters_gfx9,
        pa_su0_exposed_counters_gfx9,
        pa_sc0_exposed_counters_gfx9,
        spi0_exposed_counters_gfx9,
        sq0_exposed_counters_gfx9,
        sq_es0_exposed_counters_gfx9,
        sq_gs0_exposed_counters_gfx9,
        sq_vs0_exposed_counters_gfx9,
        sq_ps0_exposed_counters_gfx9,
        sq_ls0_exposed_counters_gfx9,
        sq_hs0_exposed_counters_gfx9,
        sq_cs0_exposed_counters_gfx9,
        sx0_exposed_counters_gfx9,
        ta0_exposed_counters_gfx9,
        ta1_exposed_counters_gfx9,
        ta2_exposed_counters_gfx9,
        ta3_exposed_counters_gfx9,
        ta4_exposed_counters_gfx9,
        ta5_exposed_counters_gfx9,
        ta6_exposed_counters_gfx9,
        ta7_exposed_counters_gfx9,
        ta8_exposed_counters_gfx9,
        ta9_exposed_counters_gfx9,
        ta10_exposed_counters_gfx9,
        ta11_exposed_counters_gfx9,
        ta12_exposed_counters_gfx9,
        ta13_exposed_counters_gfx9,
        ta14_exposed_counters_gfx9,
        ta15_exposed_counters_gfx9,
        tcc0_exposed_counters_gfx9,
        tcc1_exposed_counters_gfx9,
        tcc2_exposed_counters_gfx9,
        tcc3_exposed_counters_gfx9,
        tcc4_exposed_counters_gfx9,
        tcc5_exposed_counters_gfx9,
        tcc6_exposed_counters_gfx9,
        tcc7_exposed_counters_gfx9,
        tcc8_exposed_counters_gfx9,
        tcc9_exposed_counters_gfx9,
        tcc10_exposed_counters_gfx9,
        tcc11_exposed_counters_gfx9,
        tcc12_exposed_counters_gfx9,
        tcc13_exposed_counters_gfx9,
        tcc14_exposed_counters_gfx9,
        tcc15_exposed_counters_gfx9,
        tcp0_exposed_counters_gfx9,
        tcp1_exposed_counters_gfx9,
        tcp2_exposed_counters_gfx9,
        tcp3_exposed_counters_gfx9,
        tcp4_exposed_counters_gfx9,
        tcp5_exposed_counters_gfx9,
        tcp6_exposed_counters_gfx9,
        tcp7_exposed_counters_gfx9,
        tcp8_exposed_counters_gfx9,
        tcp9_exposed_counters_gfx9,
        tcp10_exposed_counters_gfx9,
        tcp11_exposed_counters_gfx9,
        tcp12_exposed_counters_gfx9,
        tcp13_exposed_counters_gfx9,
        tcp14_exposed_counters_gfx9,
        tcp15_exposed_counters_gfx9,
        vgt0_exposed_counters_gfx9,
        gputime_exposed_counters_gfx9,
    };

    GPA_CounterGroupDesc hw_gl_groups_gfx9[] = {
        {0, "CB0", 0, 444, 4, 4},
        {1, "CB1", 1, 444, 4, 4},
        {2, "CB2", 2, 444, 4, 4},
        {3, "CB3", 3, 444, 4, 4},
        {4, "CPF", 0, 32, 2, 4},
        {5, "DB0", 0, 328, 4, 6},
        {6, "DB1", 1, 328, 4, 6},
        {7, "DB2", 2, 328, 4, 6},
        {8, "DB3", 3, 328, 4, 6},
        {9, "GRBM", 0, 38, 2, 0},
        {10, "GRBMSE", 0, 16, 4, 0},
        {11, "PA_SU", 0, 351, 4, 6},
        {12, "PA_SC", 0, 492, 8, 4},
        {13, "SPI", 0, 196, 6, 16},
        {14, "SQ", 0, 374, 16, 16},
        {15, "SQ_ES", 0, 374, 16, 16},
        {16, "SQ_GS", 0, 374, 16, 16},
        {17, "SQ_VS", 0, 374, 16, 16},
        {18, "SQ_PS", 0, 374, 16, 16},
        {19, "SQ_LS", 0, 374, 16, 16},
        {20, "SQ_HS", 0, 374, 16, 16},
        {21, "SQ_CS", 0, 374, 16, 16},
        {22, "SX", 0, 208, 4, 8},
        {23, "TA0", 0, 119, 2, 4},
        {24, "TA1", 1, 119, 2, 4},
        {25, "TA2", 2, 119, 2, 4},
        {26, "TA3", 3, 119, 2, 4},
        {27, "TA4", 4, 119, 2, 4},
        {28, "TA5", 5, 119, 2, 4},
        {29, "TA6", 6, 119, 2, 4},
        {30, "TA7", 7, 119, 2, 4},
        {31, "TA8", 8, 119, 2, 4},
        {32, "TA9", 9, 119, 2, 4},
        {33, "TA10", 10, 119, 2, 4},
        {34, "TA11", 11, 119, 2, 4},
        {35, "TA12", 12, 119, 2, 4},
        {36, "TA13", 13, 119, 2, 4},
        {37, "TA14", 14, 119, 2, 4},
        {38, "TA15", 15, 119, 2, 4},
        {39, "TCA0", 0, 35, 4, 8},
        {40, "TCA1", 1, 35, 4, 8},
        {41, "TCC0", 0, 282, 4, 8},
        {42, "TCC1", 1, 282, 4, 8},
        {43, "TCC2", 2, 282, 4, 8},
        {44, "TCC3", 3, 282, 4, 8},
        {45, "TCC4", 4, 282, 4, 8},
        {46, "TCC5", 5, 282, 4, 8},
        {47, "TCC6", 6, 282, 4, 8},
        {48, "TCC7", 7, 282, 4, 8},
        {49, "TCC8", 8, 282, 4, 8},
        {50, "TCC9", 9, 282, 4, 8},
        {51, "TCC10", 10, 282, 4, 8},
        {52, "TCC11", 11, 282, 4, 8},
        {53, "TCC12", 12, 282, 4, 8},
        {54, "TCC13", 13, 282, 4, 8},
        {55, "TCC14", 14, 282, 4, 8},
        {56, "TCC15", 15, 282, 4, 8},
        {57, "TD0", 0, 57, 2, 4},
        {58, "TD1", 1, 57, 2, 4},
        {59, "TD2", 2, 57, 2, 4},
        {60, "TD3", 3, 57, 2, 4},
        {61, "TD4", 4, 57, 2, 4},
        {62, "TD5", 5, 57, 2, 4},
        {63, "TD6", 6, 57, 2, 4},
        {64, "TD7", 7, 57, 2, 4},
        {65, "TD8", 8, 57, 2, 4},
        {66, "TD9", 9, 57, 2, 4},
        {67, "TD10", 10, 57, 2, 4},
        {68, "TD11", 11, 57, 2, 4},
        {69, "TD12", 12, 57, 2, 4},
        {70, "TD13", 13, 57, 2, 4},
        {71, "TD14", 14, 57, 2, 4},
        {72, "TD15", 15, 57, 2, 4},
        {73, "TCP0", 0, 85, 4, 6},
        {74, "TCP1", 1, 85, 4, 6},
        {75, "TCP2", 2, 85, 4, 6},
        {76, "TCP3", 3, 85, 4, 6},
        {77, "TCP4", 4, 85, 4, 6},
        {78, "TCP5", 5, 85, 4, 6},
        {79, "TCP6", 6, 85, 4, 6},
        {80, "TCP7", 7, 85, 4, 6},
        {81, "TCP8", 8, 85, 4, 6},
        {82, "TCP9", 9, 85, 4, 6},
        {83, "TCP10", 10, 85, 4, 6},
        {84, "TCP11", 11, 85, 4, 6},
        {85, "TCP12", 12, 85, 4, 6},
        {86, "TCP13", 13, 85, 4, 6},
        {87, "TCP14", 14, 85, 4, 6},
        {88, "TCP15", 15, 85, 4, 6},
        {89, "GDS", 0, 121, 4, 4},
        {90, "VGT", 0, 148, 4, 5},
        {91, "IA", 0, 32, 4, 4},
        {92, "WD", 0, 58, 4, 0},
        {93, "CPG", 0, 60, 2, 4},
        {94, "CPC", 0, 35, 2, 4},
        {95, "GPIN", 0, 5, 5, 0},
        {96, "GPUTime", 0, 6, 2, 0},
    };

    GPA_CounterGroupExposedCounterDesc hw_gl_exposed_counters_by_group_gfx9[] = {
        {0, 0, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {1, 444, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {2, 888, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1332, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {4, 1776, {0, 23}},
        {5, 1808, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 2136, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2464, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2792, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 3120, {0, 2}},
        {11, 3174, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3525, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {13, 4017, {1, 10, 20, 23, 32, 38, 42, 43, 46, 48, 49, 52, 54, 59}},
        {14, 4213, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {15, 4587, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {16, 4961, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {17, 5335, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {18, 5709, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {19, 6083, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {20, 6457, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {21, 6831, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {22, 7205, {12, 14, 17, 19, 22, 24, 27, 29}},
        {23, 7413, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {24, 7532, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 7651, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {26, 7770, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {27, 7889, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 8008, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {29, 8127, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {30, 8246, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {31, 8365, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {32, 8484, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {33, 8603, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {34, 8722, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {35, 8841, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {36, 8960, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {37, 9079, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {38, 9198, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {41, 9387, {20, 22, 29, 30, 33, 41, 42}},
        {42, 9669, {20, 22, 29, 30, 33, 41, 42}},
        {43, 9951, {20, 22, 29, 30, 33, 41, 42}},
        {44, 10233, {20, 22, 29, 30, 33, 41, 42}},
        {45, 10515, {20, 22, 29, 30, 33, 41, 42}},
        {46, 10797, {20, 22, 29, 30, 33, 41, 42}},
        {47, 11079, {20, 22, 29, 30, 33, 41, 42}},
        {48, 11361, {20, 22, 29, 30, 33, 41, 42}},
        {49, 11643, {20, 22, 29, 30, 33, 41, 42}},
        {50, 11925, {20, 22, 29, 30, 33, 41, 42}},
        {51, 12207, {20, 22, 29, 30, 33, 41, 42}},
        {52, 12489, {20, 22, 29, 30, 33, 41, 42}},
        {53, 12771, {20, 22, 29, 30, 33, 41, 42}},
        {54, 13053, {20, 22, 29, 30, 33, 41, 42}},
        {55, 13335, {20, 22, 29, 30, 33, 41, 42}},
        {56, 13617, {20, 22, 29, 30, 33, 41, 42}},
        {73, 14811, {6, 60, 69, 70, 71, 72}},
        {74, 14896, {6, 60, 69, 70, 71, 72}},
        {75, 14981, {6, 60, 69, 70, 71, 72}},
        {76, 15066, {6, 60, 69, 70, 71, 72}},
        {77, 15151, {6, 60, 69, 70, 71, 72}},
        {78, 15236, {6, 60, 69, 70, 71, 72}},
        {79, 15321, {6, 60, 69, 70, 71, 72}},
        {80, 15406, {6, 60, 69, 70, 71, 72}},
        {81, 15491, {6, 60, 69, 70, 71, 72}},
        {82, 15576, {6, 60, 69, 70, 71, 72}},
        {83, 15661, {6, 60, 69, 70, 71, 72}},
        {84, 15746, {6, 60, 69, 70, 71, 72}},
        {85, 15831, {6, 60, 69, 70, 71, 72}},
        {86, 15916, {6, 60, 69, 70, 71, 72}},
        {87, 16001, {6, 60, 69, 70, 71, 72}},
        {88, 16086, {6, 60, 69, 70, 71, 72}},
        {90, 16292, {1, 9, 20, 96, 105, 125}},
        {96, 16630, {0, 1, 2, 3, 4, 5}},
    };

    GPA_PaddedCounterDesc gl_padded_counter_by_group_gfx9[] = {
        {0, 0, {438, 439, 440, 441, 442, 443}},
        {1, 444, {438, 439, 440, 441, 442, 443}},
        {2, 888, {438, 439, 440, 441, 442, 443}},
        {3, 1332, {438, 439, 440, 441, 442, 443}},
        {11, 3174, {292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350}},
        {12, 3525, {491}},
        {41, 9387, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {42, 9669, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {43, 9951, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {44, 10233, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {45, 10515, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {46, 10797, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {47, 11079, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {48, 11361, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {49, 11643, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {50, 11925, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {51, 12207, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {52, 12489, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {53, 12771, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {54, 13053, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {55, 13335, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {56, 13617, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
    };

    GPA_SQCounterGroupDesc hw_gl_sq_groups_gfx9[] = {
        {14, 0, SQ_ALL},
        {15, 0, SQ_ES},
        {16, 0, SQ_GS},
        {17, 0, SQ_VS},
        {18, 0, SQ_PS},
        {19, 0, SQ_LS},
        {20, 0, SQ_HS},
        {21, 0, SQ_CS},
    };


    unsigned int hw_gl_sq_isolated_groups_gfx9[] = {
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Tca
        40, // Tca
        41, // Tcc
        42, // Tcc
        43, // Tcc
        44, // Tcc
        45, // Tcc
        46, // Tcc
        47, // Tcc
        48, // Tcc
        49, // Tcc
        50, // Tcc
        51, // Tcc
        52, // Tcc
        53, // Tcc
        54, // Tcc
        55, // Tcc
        56, // Tcc
        57, // Td
        58, // Td
        59, // Td
        60, // Td
        61, // Td
        62, // Td
        63, // Td
        64, // Td
        65, // Td
        66, // Td
        67, // Td
        68, // Td
        69, // Td
        70, // Td
        71, // Td
        72, // Td
        73, // Tcp
        74, // Tcp
        75, // Tcp
        76, // Tcp
        77, // Tcp
        78, // Tcp
        79, // Tcp
        80, // Tcp
        81, // Tcp
        82, // Tcp
        83, // Tcp
        84, // Tcp
        85, // Tcp
        86, // Tcp
        87, // Tcp
        88, // Tcp
    };

    const unsigned int hw_gl_gputimebottomtobottomduration_index_gfx9 = 16630; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for gl for gfx9 family
    const unsigned int hw_gl_gputimebottomtobottomstart_index_gfx9 = static_cast<unsigned int>(-1); ///< Index of time of the previous command reaching bottom of pipe for gl for gfx9 family
    const unsigned int hw_gl_gputimebottomtobottomend_index_gfx9 = static_cast<unsigned int>(-1); ///< Index of time of the current command reaching bottom of pipe for gl for gfx9 family
    const unsigned int hw_gl_gputimetoptobottomduration_index_gfx9 = 16633; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for gl for gfx9 family
    const unsigned int hw_gl_gputimetoptobottomstart_index_gfx9 = static_cast<unsigned int>(-1); ///< Index of time that the current command reaches the top of pipe for gl for gfx9 family
    const unsigned int hw_gl_gputimetoptobottomend_index_gfx9 = static_cast<unsigned int>(-1); ///< Index of time that the current command reaches the bottom of pipe for gl for gfx9 family
    const std::set<unsigned int> hw_gl_timestamp_block_ids_gfx9 =       {96}; ///< Timestamp block id's for GL for gfx9 family
    const std::set<unsigned int> hw_gl_time_counter_indices_gfx9 =      {16630, 16631, 16632, 16633, 16634, 16635}; ///< Timestamp counter indices for GL for gfx9 family
    const unsigned int           hw_gl_group_count_gfx9                = sizeof(hw_gl_groups_gfx9) / sizeof(GPA_CounterGroupDesc);
    const unsigned int           hw_gl_exposed_counters_group_count_gfx9 = 72;
    const unsigned int           gl_padded_counter_group_count_gfx9 = 22;
    const unsigned int           hw_gl_sq_group_count_gfx9              = sizeof(hw_gl_sq_groups_gfx9) / sizeof(GPA_SQCounterGroupDesc);
    const unsigned int           hw_gl_sq_isolated_group_count_gfx9      = sizeof(hw_gl_sq_isolated_groups_gfx9) / sizeof(unsigned int);
}; // namespace
