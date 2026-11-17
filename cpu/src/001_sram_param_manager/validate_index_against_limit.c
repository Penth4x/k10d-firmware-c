/* @k10d validate_index_against_limit @ 0x100f0c66
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks if param_1 is below a global limit and param_2 is a valid non-zero index within
 *   that limit.
 * summary:
 *   The function compares param_1 against the global variable _DAT_800480bc. If param_1 is
 *   less than the limit, param_2 is non-zero and less than or equal to the limit, and
 *   param_3 is non-zero, it returns 0. Otherwise, it stores param_1 into the memory
 *   location pointed to by param_4 and returns 0xffffffff. The role of the global limit and
 *   the specific parameters is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t validate_index_against_limit(uint param_1,uint param_2,int param_3,uint *param_4)

{
  uint32_t uVar1;
  
  if ((((param_1 < _DAT_800480bc/*SDRAM*/) && (param_2 != 0)) && (param_2 <= _DAT_800480bc/*SDRAM*/)) &&
     (param_3 != 0)) {
    uVar1 = 0;
  }
  else {
    *param_4 = param_1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
