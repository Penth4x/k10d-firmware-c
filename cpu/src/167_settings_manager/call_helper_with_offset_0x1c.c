/* @k10d call_helper_with_offset_0x1c @ 0x1047801c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at offset 0x1c of the object pointed to by param_1 and passes it
 *   to check_value_in_range_100_999, returning the result.
 * summary:
 *   This is a one-line wrapper that extracts a field from a struct (offset 0x1c) and
 *   forwards it to an unknown callee. The role of the field and the callee is not
 *   determinable from the provided information, so no camera-specific naming is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_0x1c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_value_in_range_100_999(*(uint32_t *)(param_1 + 0x1c));
  return uVar1;
}
