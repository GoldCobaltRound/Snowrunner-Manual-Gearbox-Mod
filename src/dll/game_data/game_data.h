#pragma once

#include "Windows.h"

#include <cstdint>
#include <memory>

#include <fmt/core.h>
#include <libloaderapi.h>
#include <minwindef.h>

#include "game_data/data_types.h"
#include "utils/hooks.h"
#include "utils/memory.h"

namespace GameRelatedData {
inline const float PowerCoefLowGear = .45f;
inline const float PowerCoefLowPlusGear = 1.f;
inline const float PowerCoefLowMinusGear = .2f;

SMGM_DECLARE_PTR(0x29AB158, combine_TRUCK_CONTROL *, TruckControlPtr);
} // namespace GameRelatedData

// SMGM_GAME_FUNCTION(0xD5D0B0, void, SwitchAWD, Vehicle *, bool);
SMGM_GAME_FUNCTION(0xD511C0, bool, ShiftGear, Vehicle *, std::int32_t);
SMGM_GAME_FUNCTION(0xD50F20, std::int32_t, GetMaxGear, const Vehicle *);
SMGM_GAME_FUNCTION(0xD50F70, void, ShiftToAutoGear, Vehicle *);
SMGM_GAME_FUNCTION(0xD50360, void, SetPowerCoef, Vehicle *, float);
SMGM_GAME_FUNCTION(0xAC9830, void, SetCurrentVehicle, combine_TRUCK_CONTROL *,
                   Vehicle *);