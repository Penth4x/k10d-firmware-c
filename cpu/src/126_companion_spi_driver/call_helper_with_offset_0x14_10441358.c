/* @k10d call_helper_with_offset_0x14_10441358 @ 0x10441358
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at param_1+0x14 and passes it as the sole argument to
 *   set_bit_in_pointer_target.
 * summary:
 *   A one-line wrapper that dereferences the field at offset 0x14 of the object pointed to
 *   by param_1 and forwards it to the callee set_bit_in_pointer_target. No other side
 *   effects, flags, or globals are touched. The role of the callee and the field is
 *   unknown, so no camera-subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x14_10441358(int param_1, uint32_t param_2)
{
  set_bit_in_pointer_target(*(uint32_t *)(param_1 + 0x14), (uint32_t)param_2);
  return;
}
