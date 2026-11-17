/* @k10d validate_and_dispatch_aligned_request @ 0x104b09b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a 4-byte-aligned index is within bounds and dispatches to a handler or
 *   fallback.
 * summary:
 *   The function validates that param_3 is less than the length stored at param_1+1 and is
 *   a multiple of 4. If valid, it calls a function pointer at 0x104acb86 with the offset
 *   and param_2 if param_4 is 0, otherwise it calls write_little_endian_bytes. It returns 1
 *   on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_dispatch_aligned_request(int *param_1,uint32_t param_2,uint param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_3 < *(byte *)(param_1 + 1)) && ((param_3 & 3) == 0)) {
    if (param_4 == 0) {
      (*(code *)0x104acb86/*ROM*/)(*param_1 + param_3,param_2,4);
      uVar1 = 1;
    }
    else {
      write_little_endian_bytes(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
      uVar1 = 1;
    }
  }
  return uVar1;
}
