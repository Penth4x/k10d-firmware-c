/* @k10d compute_16_byte_deltas @ 0x000d9420
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Iterates over 16 entries, computes a signed difference between two scaled values, and
 *   stores a result byte per entry.
 * summary:
 *   The function loops 16 times (iVar6 < 0x10). For each iteration, it reads a byte from
 *   one of two arrays (selected by param_1 == 2), calls clamp_value_to_range_000d9ac0 with
 *   constants 0x10 and 0xd0, and FUN_000c28e2 to get a value. It compares this against a
 *   similar value derived from a third array (offset 0x3c550). If the second value is
 *   smaller, it either increments a counter (if a global difference is small and the delta
 *   is < 2) or calls compute_bit_index_and_offset to compute a scaled difference. The
 *   result byte is stored in an output array (offset 0x3c6c0 or 0x3c6d0). The function
 *   returns the count of entries where the condition failed or the small-delta case
 *   occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_16_byte_deltas(short param_1)

{
  uint8_t uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = 0;
  sVar2 = _DAT_0003c562 - (ushort)DAT_0003c568;
  iVar6 = 0;
  do {
    if (param_1 == 2) {
      uVar1 = *(uint8_t *)(iVar6 + 0x3c6b0);
    }
    else {
      uVar1 = *(uint8_t *)(iVar6 + 0x3c6a0);
    }
    uVar3 = clamp_value_to_range_000d9ac0(uVar1,0x10,0xd0);
    uVar7 = (uVar3 & 0xffff) - 0x10 & 0xffff;
    uVar3 = FUN_000c28e2(uVar7);
    uVar4 = clamp_value_to_range_000d9ac0(*(uint8_t *)(iVar6 + 0x3c550),0x10,0xd0);
    uVar9 = (uVar4 & 0xffff) - 0x10 & 0xffff;
    uVar4 = FUN_000c28e2(uVar9);
    if (uVar4 < uVar3) {
      if ((sVar2 < 0x68) && (uVar7 - uVar9 < 2)) {
        cVar5 = -1;
        iVar8 = (int)(short)((short)iVar8 + 1);
      }
      else {
        cVar5 = compute_bit_index_and_offset((uVar3 - uVar4) * 8);
        cVar5 = cVar5 + '\x10';
      }
    }
    else {
      cVar5 = -1;
      iVar8 = (int)(short)((short)iVar8 + 1);
    }
    if (param_1 == 2) {
      *(char *)(iVar6 + 0x3c6d0) = cVar5;
    }
    else {
      *(char *)(iVar6 + 0x3c6c0) = cVar5;
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x10);
  return iVar8;
}
