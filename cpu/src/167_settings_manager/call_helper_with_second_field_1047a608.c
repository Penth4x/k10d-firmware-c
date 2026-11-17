/* @k10d call_helper_with_second_field_1047a608 @ 0x1047a608
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 4 of the object pointed to by param_1 to
 *   dispatch_on_short_flag and returns its result.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the word at offset +4, and
 *   forwards it as the sole argument to dispatch_on_short_flag. The return value of the
 *   callee is returned directly to the caller. No other side effects or globals are
 *   touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_second_field_1047a608(int param_1)

{
  uint32_t uVar1;
  short *r5_in;
  
  uVar1 = dispatch_on_short_flag(*(uint32_t *)(param_1 + 4),r5_in);
  return uVar1;
}
