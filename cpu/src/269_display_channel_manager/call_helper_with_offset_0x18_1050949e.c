/* @k10d call_helper_with_offset_0x18_1050949e @ 0x1050949e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from param_1+0x18 and passes it with 0 and param_2 to
 *   set_object_flag_bits_0x110.
 * summary:
 *   The function dereferences the field at offset 0x18 of the object pointed to by param_1
 *   and forwards it, along with the constant 0 and param_2, to the callee
 *   set_object_flag_bits_0x110. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x18_1050949e(int param_1,uint32_t param_2)

{
  set_object_flag_bits_0x110(*(uint32_t *)(param_1 + 0x18),0,param_2);
  return;
}
