/* @k10d call_helper_with_field_at_offset_8_104767e6 @ 0x104767e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 8 of the object pointed to by param_1 and passes it to
 *   add_offset_to_struct_field, returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 8 and forwards that value as the
 *   sole argument to add_offset_to_struct_field. The return value of
 *   add_offset_to_struct_field is returned directly to the caller. No other side effects or
 *   globals are touched. The role of add_offset_to_struct_field is unknown, so the camera
 *   subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_field_at_offset_8_104767e6(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = add_offset_to_struct_field(*(uint32_t *)(param_1 + 8));
  return uVar1;
}
