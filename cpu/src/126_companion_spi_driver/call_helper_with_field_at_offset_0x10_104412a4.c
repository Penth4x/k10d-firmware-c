/* @k10d call_helper_with_field_at_offset_0x10_104412a4 @ 0x104412a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts the 32-bit value at offset 0x10 of the object pointed to by param_1 and passes
 *   it to set_bit_in_pointer_target.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the word at offset 0x10,
 *   and forwards it as the sole argument to set_bit_in_pointer_target. No other side
 *   effects, loops, or state changes are visible. The role of set_bit_in_pointer_target is
 *   unknown, so the camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_field_at_offset_0x10_104412a4(int param_1, uint32_t param_2)
{
  set_bit_in_pointer_target(*(uint32_t *)(param_1 + 0x10), (uint32_t)param_2);
  return;
}
