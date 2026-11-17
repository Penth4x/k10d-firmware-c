/* @k10d call_helper_if_offset_0x14_set @ 0x1043ee72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls set_bit_in_pointer_target only when the integer at param_1+0x14 is non-zero.
 * summary:
 *   Reads the 32-bit value at offset 0x14 of the object pointed to by param_1. If that
 *   value is non-zero, it invokes the single callee set_bit_in_pointer_target with no
 *   arguments. No other side effects or globals are touched. The caller is
 *   release_subobject_triplets.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_offset_0x14_set(int param_1, uint32_t param_x1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    set_bit_in_pointer_target(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  return;
}
