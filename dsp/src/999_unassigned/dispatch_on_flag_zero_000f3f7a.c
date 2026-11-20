/* @k10d dispatch_on_flag_zero_000f3f7a @ 0x000f3f7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls one of two helper functions based on whether a global flag is zero.
 * summary:
 *   Checks the global DAT_0003c3ac. If it is zero, calls add_signed_offset_by_mode with
 *   param_1 and 0; otherwise calls add_byte_offset_by_mode with param_1 and 0. The callees
 *   are unnamed, so the specific behavior is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_flag_zero_000f3f7a(uint32_t param_1)

{
  uint32_t uVar1;
  
  if (DAT_0003c3ac == '\0') {
    uVar1 = add_signed_offset_by_mode(param_1,0);
  }
  else {
    uVar1 = add_byte_offset_by_mode(param_1,0);
  }
  return uVar1;
}
