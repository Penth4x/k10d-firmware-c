/* @k10d check_param2_or_offset_limit @ 0x104686f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 147_sram_integrity_check (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_2 is 1, or if param_2 is 0 and a value at param_1+600 is <= a global
 *   limit.
 * summary:
 *   The function takes two integer parameters. If param_2 is 1, it immediately returns 1.
 *   If param_2 is 0, it compares the unsigned integer at offset 600 of the object pointed
 *   to by param_1 against the unsigned integer at global address 0x800042dc (DAT_800042c0 +
 *   0x1c). If the object's value is less than or equal to the global value, it returns 1;
 *   otherwise 0. If param_2 is any other value, it returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_param2_or_offset_limit(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 600) <= *(uint *)(_DAT_800042c0/*SDRAM*/ + 0x1c)) {
      uVar1 = 1;
    }
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  return uVar1;
}
