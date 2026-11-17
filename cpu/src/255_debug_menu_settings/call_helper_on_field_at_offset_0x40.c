/* @k10d call_helper_on_field_at_offset_0x40 @ 0x104eac08
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at param_1+0x40 to build_three_buffer_struct.
 * summary:
 *   Reads a 4-byte field at offset 0x40 of the object pointed to by param_1 and forwards it
 *   as the sole argument to build_three_buffer_struct. No other side effects are visible in
 *   this function. The role of the field and the callee is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_at_offset_0x40(void *param_1)

{
  build_three_buffer_struct(*(uint32_t *)((int)param_1 + 0x40), __frv_reg_unset(5));
  return;
}
