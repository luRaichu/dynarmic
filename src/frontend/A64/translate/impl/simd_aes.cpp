/* This file is part of the dynarmic project.
 * Copyright (c) 2018 MerryMage
 * This software may be used and distributed according to the terms of the GNU
 * General Public License version 2 or any later version.
 */

#include "frontend/A64/translate/impl/impl.h"

namespace Dynarmic::A64 {

bool TranslatorVisitor::AESIMC(Vec Vn, Vec Vd) {
    const IR::U128 operand = ir.GetQ(Vn);
    const IR::U128 result = ir.AESInverseMixColumns(operand);

    ir.SetQ(Vd, result);
    return true;
}

bool TranslatorVisitor::AESMC(Vec Vn, Vec Vd) {
    const IR::U128 operand = ir.GetQ(Vn);
    const IR::U128 result = ir.AESMixColumns(operand);

    ir.SetQ(Vd, result);
    return true;
}

} // namespace Dynarmic::A64