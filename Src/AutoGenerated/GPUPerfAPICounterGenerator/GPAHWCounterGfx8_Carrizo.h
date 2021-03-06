//==============================================================================
// Copyright (c) 2010-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Hardware counter info for GFX8_CARRIZO
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_HW_COUNTER_GFX8_CARRIZO_H_
#define _GPA_HW_COUNTER_GFX8_CARRIZO_H_

#include <set>

struct GPA_HardwareCounterDesc;
#include "GPAHWCounterGfx8.h"

namespace CounterGfx8_Carrizo
{
/// Uses the input ASIC type to determine if this data provides an ASIC specific version.
/// \param asicType The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asicType)
{
    static std::set<GDT_HW_ASIC_TYPE> asicsSupported = { GDT_CARRIZO, GDT_CARRIZO_EMB };

    if (asicsSupported.find(asicType) == asicsSupported.end())
    {
        return false;
    }

    return true;
}

    extern GPA_HardwareCounterDesc VGT0countersGfx8_Carrizo[]; ///< Array of internal counters for VGT0 block for Gfx8_Carrizo family
    extern GPA_HardwareCounterDesc VGT1countersGfx8_Carrizo[]; ///< Array of internal counters for VGT1 block for Gfx8_Carrizo family
    extern GPA_HardwareCounterDesc VGT2countersGfx8_Carrizo[]; ///< Array of internal counters for VGT2 block for Gfx8_Carrizo family
    extern GPA_HardwareCounterDesc VGT3countersGfx8_Carrizo[]; ///< Array of internal counters for VGT3 block for Gfx8_Carrizo family

/// Replaces count number of block instance counters at the destination with the overriding source counters.
/// \param pDestCounter Destination to update.
/// \param pSrcCounter Source to update from.
/// \param count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GPA_HardwareCounterDesc* pDestCounter, GPA_HardwareCounterDesc* pSrcCounter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        pDestCounter[i] = pSrcCounter[i];
    }
}

/// If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
/// \param asicType The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asicType)
{
    if (!MatchAsic(asicType))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(CounterGfx8::VGT0countersGfx8, VGT0countersGfx8_Carrizo, 146);
    ReplaceBlockInstanceCounters(CounterGfx8::VGT1countersGfx8, VGT1countersGfx8_Carrizo, 146);
    ReplaceBlockInstanceCounters(CounterGfx8::VGT2countersGfx8, VGT2countersGfx8_Carrizo, 146);
    ReplaceBlockInstanceCounters(CounterGfx8::VGT3countersGfx8, VGT3countersGfx8_Carrizo, 146);

    return true;
}
} // CounterGfx8_Carrizo

#endif  // _GPA_HW_COUNTER_GFX8_CARRIZO_H_
