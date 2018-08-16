/* This file is part of the dynarmic project.
 * Copyright (c) 2018 MerryMage
 * This software may be used and distributed according to the terms of the GNU
 * General Public License version 2 or any later version.
 */

#include "common/fp/info.h"

using namespace Dynarmic::FP;

static_assert(FPValue<u32, false, 0, 1>() == 0x3f800000);
static_assert(FPValue<u32, false, -1, 3>() == 0x3fc00000);
static_assert(FPValue<u32, false, 0, 12739812>() == 0x4b4264e4);
static_assert(FPValue<u32, false, -8, 100>() == 0x3ec80000);
static_assert(FPValue<u32, true, 0, 1>() == 0xbf800000);