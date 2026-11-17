/* @k10d call_two_helpers_on_field_c @ 0x10477f94
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using the 4-byte value at offset 0xc of the passed
 *   structure.
 * summary:
 *   Reads the pointer/value stored at param_1 + 0xc and passes it as the sole argument to
 *   call_helper_with_offset8_value_104763ac, then to
 *   call_subroutine_with_offset_c_104763be. No other state is modified and no return value
 *   is produced. The role of the two callees is unknown, so the subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_field_c(int param_1)

{
  call_helper_with_offset8_value_104763ac(*(uint32_t *)(param_1 + 0xc));
  call_subroutine_with_offset_c_104763be(*(uint32_t *)(param_1 + 0xc));
  return;
}
