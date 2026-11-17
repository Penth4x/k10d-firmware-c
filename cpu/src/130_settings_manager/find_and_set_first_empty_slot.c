/* @k10d find_and_set_first_empty_slot @ 0x1045cfb2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Scans a 4-entry array at offset 0x5c of param_1 for the first zero and writes param_2
 *   there.
 * summary:
 *   Iterates over 4 consecutive 32-bit words starting at param_1 + 0x5c. If a word is zero,
 *   it stores param_2 into that word and returns 1. If all four words are non-zero, it
 *   returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_and_set_first_empty_slot(void *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)param_1 + iVar1 + 0x5c) == 0) {
      *(uint32_t *)((int)param_1 + iVar2 * 4 + 0x5c) = param_2;
      return 1;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x10);
  return 0;
}
