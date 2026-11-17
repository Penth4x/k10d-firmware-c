/* @k10d call_helper_if_flag_set_1043ee30 @ 0x1043ee30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls set_bit_in_pointer_target if the integer at offset 0x10 of the object is non-
 *   zero.
 * summary:
 *   Checks the 4-byte field at param_1 + 0x10. If it is non-zero, invokes the single callee
 *   set_bit_in_pointer_target with no arguments. No other side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_1043ee30(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    set_bit_in_pointer_target(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  return;
}
