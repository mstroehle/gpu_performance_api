//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL internal counter definitions for GFX7
//==============================================================================

#include "GPAInternalCountersGfx7.h"
#include "InternalCountersGLGfx7.h"

// This file is autogenerated by the ConvertHWEnums project

GPA_HardwareCounterDesc* GLCounterGroupArrayGfx7[] =
{
    CB0countersGfx7,
    CB1countersGfx7,
    CB2countersGfx7,
    CB3countersGfx7,
    CPFcountersGfx7,
    DB0countersGfx7,
    DB1countersGfx7,
    DB2countersGfx7,
    DB3countersGfx7,
    GRBMcountersGfx7,
    GRBMSE0countersGfx7,
    PA_SU0countersGfx7,
    PA_SC0countersGfx7,
    SPI0countersGfx7,
    SQ0countersGfx7,
    SQ_ES0countersGfx7,
    SQ_GS0countersGfx7,
    SQ_VS0countersGfx7,
    SQ_PS0countersGfx7,
    SQ_LS0countersGfx7,
    SQ_HS0countersGfx7,
    SQ_CS0countersGfx7,
    SX0countersGfx7,
    TA0countersGfx7,
    TA1countersGfx7,
    TA2countersGfx7,
    TA3countersGfx7,
    TA4countersGfx7,
    TA5countersGfx7,
    TA6countersGfx7,
    TA7countersGfx7,
    TA8countersGfx7,
    TA9countersGfx7,
    TA10countersGfx7,
    TCA0countersGfx7,
    TCA1countersGfx7,
    TCC0countersGfx7,
    TCC1countersGfx7,
    TCC2countersGfx7,
    TCC3countersGfx7,
    TCC4countersGfx7,
    TCC5countersGfx7,
    TCC6countersGfx7,
    TCC7countersGfx7,
    TCC8countersGfx7,
    TCC9countersGfx7,
    TCC10countersGfx7,
    TCC11countersGfx7,
    TCC12countersGfx7,
    TCC13countersGfx7,
    TCC14countersGfx7,
    TCC15countersGfx7,
    TD0countersGfx7,
    TD1countersGfx7,
    TD2countersGfx7,
    TD3countersGfx7,
    TD4countersGfx7,
    TD5countersGfx7,
    TD6countersGfx7,
    TD7countersGfx7,
    TD8countersGfx7,
    TD9countersGfx7,
    TD10countersGfx7,
    TCP0countersGfx7,
    TCP1countersGfx7,
    TCP2countersGfx7,
    TCP3countersGfx7,
    TCP4countersGfx7,
    TCP5countersGfx7,
    TCP6countersGfx7,
    TCP7countersGfx7,
    TCP8countersGfx7,
    TCP9countersGfx7,
    TCP10countersGfx7,
    GDScountersGfx7,
    VGT0countersGfx7,
    IA0countersGfx7,
    MC0countersGfx7,
    SRBMcountersGfx7,
    WDcountersGfx7,
    CPGcountersGfx7,
    CPCcountersGfx7,
    GPINcountersGfx7,
    GPUTimecountersGfx7,
};

GPA_CounterGroupDesc HWGLGroupsGfx7[] =
{
    {0, "CB0", 0, 226, 4},
    {1, "CB1", 1, 226, 4},
    {2, "CB2", 2, 226, 4},
    {3, "CB3", 3, 226, 4},
    {4, "CPF", 0, 17, 2},
    {5, "DB0", 0, 257, 4},
    {6, "DB1", 1, 257, 4},
    {7, "DB2", 2, 257, 4},
    {8, "DB3", 3, 257, 4},
    {9, "GRBM", 0, 34, 2},
    {10, "GRBMSE", 0, 15, 4},
    {11, "PA_SU", 0, 153, 4},
    {12, "PA_SC", 0, 395, 8},
    {13, "SPI", 0, 186, 6},
    {14, "SQ", 0, 252, 16},
    {15, "SQ_ES", 0, 252, 16},
    {16, "SQ_GS", 0, 252, 16},
    {17, "SQ_VS", 0, 252, 16},
    {18, "SQ_PS", 0, 252, 16},
    {19, "SQ_LS", 0, 252, 16},
    {20, "SQ_HS", 0, 252, 16},
    {21, "SQ_CS", 0, 252, 16},
    {22, "SX", 0, 32, 4},
    {23, "TA0", 0, 111, 2},
    {24, "TA1", 1, 111, 2},
    {25, "TA2", 2, 111, 2},
    {26, "TA3", 3, 111, 2},
    {27, "TA4", 4, 111, 2},
    {28, "TA5", 5, 111, 2},
    {29, "TA6", 6, 111, 2},
    {30, "TA7", 7, 111, 2},
    {31, "TA8", 8, 111, 2},
    {32, "TA9", 9, 111, 2},
    {33, "TA10", 10, 111, 2},
    {34, "TCA0", 0, 39, 4},
    {35, "TCA1", 1, 39, 4},
    {36, "TCC0", 0, 160, 4},
    {37, "TCC1", 1, 160, 4},
    {38, "TCC2", 2, 160, 4},
    {39, "TCC3", 3, 160, 4},
    {40, "TCC4", 4, 160, 4},
    {41, "TCC5", 5, 160, 4},
    {42, "TCC6", 6, 160, 4},
    {43, "TCC7", 7, 160, 4},
    {44, "TCC8", 8, 160, 4},
    {45, "TCC9", 9, 160, 4},
    {46, "TCC10", 10, 160, 4},
    {47, "TCC11", 11, 160, 4},
    {48, "TCC12", 12, 160, 4},
    {49, "TCC13", 13, 160, 4},
    {50, "TCC14", 14, 160, 4},
    {51, "TCC15", 15, 160, 4},
    {52, "TD0", 0, 49, 2},
    {53, "TD1", 1, 49, 2},
    {54, "TD2", 2, 49, 2},
    {55, "TD3", 3, 49, 2},
    {56, "TD4", 4, 49, 2},
    {57, "TD5", 5, 49, 2},
    {58, "TD6", 6, 49, 2},
    {59, "TD7", 7, 49, 2},
    {60, "TD8", 8, 49, 2},
    {61, "TD9", 9, 49, 2},
    {62, "TD10", 10, 49, 2},
    {63, "TCP0", 0, 154, 4},
    {64, "TCP1", 1, 154, 4},
    {65, "TCP2", 2, 154, 4},
    {66, "TCP3", 3, 154, 4},
    {67, "TCP4", 4, 154, 4},
    {68, "TCP5", 5, 154, 4},
    {69, "TCP6", 6, 154, 4},
    {70, "TCP7", 7, 154, 4},
    {71, "TCP8", 8, 154, 4},
    {72, "TCP9", 9, 154, 4},
    {73, "TCP10", 10, 154, 4},
    {74, "GDS", 0, 121, 4},
    {75, "VGT", 0, 140, 4},
    {76, "IA", 0, 22, 4},
    {77, "MC", 0, 22, 4},
    {78, "SRBM", 0, 19, 2},
    {79, "WD", 0, 10, 4},
    {80, "CPG", 0, 46, 2},
    {81, "CPC", 0, 22, 2},
    {82, "GPIN", 0, 5, 5},
    {83, "GPUTime", 0, 2, 2},
};

GPA_SQCounterGroupDesc HWGLSQGroupsGfx7[] =
{
    {14, 0, SQ_ALL},
    {15, 0, SQ_ES},
    {16, 0, SQ_GS},
    {17, 0, SQ_VS},
    {18, 0, SQ_PS},
    {19, 0, SQ_LS},
    {20, 0, SQ_HS},
    {21, 0, SQ_CS},
};

const unsigned int HWGLGPUTimeIndexGfx7 = 83;
const unsigned int HWGLGroupCountGfx7 = sizeof(HWGLGroupsGfx7) / sizeof(GPA_CounterGroupDesc);
const unsigned int HWGLSQGroupCountGfx7 = sizeof(HWGLSQGroupsGfx7) / sizeof(GPA_SQCounterGroupDesc);
