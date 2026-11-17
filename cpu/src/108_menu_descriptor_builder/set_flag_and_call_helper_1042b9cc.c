/* @k10d set_flag_and_call_helper_1042b9cc @ 0x1042b9cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Sets a byte at offset 4 of a struct to 0, calls a helper, then sets the same byte to 1.
 * summary:
 *   The function writes 0 to the byte at param_1+4, invokes dispatch_virtual_by_byte_match,
 *   and then writes 1 to the same location. This pattern suggests a temporary state change
 *   or a guarded operation where the flag is cleared before the helper call and restored
 *   afterward. The specific role of the flag and the helper is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_1042b9cc(int param_1)

{
  *(uint8_t *)(param_1 + 4) = 0;
  dispatch_virtual_by_byte_match((int *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6));
  *(uint8_t *)(param_1 + 4) = 1;
  return;
}
