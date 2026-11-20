/* @k10d copy_entry_from_indexed_table @ 0x000cf78e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a 6-byte record from a source table at param_1 to a destination table at a
 *   computed index if a bit is set.
 * summary:
 *   The function validates that param_1 is between 10 and 15 and that DAT_0003cf0d is
 *   greater than 0x10. It calculates a destination index based on param_1 and checks if a
 *   specific bit in _DAT_0003cfa4 is set and present in _DAT_0003cf00. If the condition is
 *   met, it copies two 16-bit values and two 8-bit values from the source table (base
 *   0x3cf30/0x3cf6c/0x3cf21/0x3f238) to the destination table (base
 *   0x3cf30/0x3cf6c/0x3cf21/0x3f249). If the bit is not set but DAT_0003cf0d matches the
 *   destination index, it clears the bit in _DAT_0003cfa0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int copy_entry_from_indexed_table(int param_1)

{
  uint16_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((('\x10' < (char)DAT_0003cf0d) && (9 < param_1)) && (param_1 < 0x10)) {
    iVar4 = param_1 * 2;
    uVar1 = *(uint16_t *)(iVar4 + 0x3cf6c);
    uVar2 = (&DAT_0003cf10)[param_1];
    uVar3 = *(uint8_t *)(param_1 + 0x3f238);
    uVar7 = 0xc000 >> (param_1 - 10U & 0x1e);
    uVar6 = _DAT_0003cfa4 & uVar7;
    uVar5 = (param_1 - 10U & 0xfe) >> 1;
    param_1 = uVar5 + 0x11;
    if ((_DAT_0003cf00 & uVar6) == uVar6) {
      *(uint16_t *)(param_1 * 2 + 0x3cf30) = *(uint16_t *)(iVar4 + 0x3cf30);
      *(uint16_t *)(param_1 * 2 + 0x3cf6c) = uVar1;
      *(uint8_t *)(uVar5 + 0x3cf21) = uVar2;
      *(uint8_t *)(uVar5 + 0x3f249) = uVar3;
    }
    else if ((uint)DAT_0003cf0d == param_1) {
      _DAT_0003cfa0 = _DAT_0003cfa0 & _DAT_0003cf00 & (uVar7 ^ 0xffffffff);
    }
  }
  return param_1;
}
