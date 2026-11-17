/* @k10d clear_flag_and_call_two_helpers_1052226c @ 0x1052226c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally clears a byte at offset 0x20 and calls a helper on the pointer at offset
 *   0x10, then unconditionally calls a second helper on the object.
 * summary:
 *   Checks if the int at offset 0x14 is 1 and the pointer at offset 0x10 is non-null. If
 *   so, it writes 0 to the byte at offset 0x20 and calls
 *   init_33_byte_buffer_with_descending_values with the pointer from offset 0x10. It then
 *   always calls zero_array_from_struct with the object pointer. The callees are not named,
 *   so the specific subsystem role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_two_helpers_1052226c(void *param_1)

{
  if ((*(int *)((int)param_1 + 0x14) == 1) && (*(int *)((int)param_1 + 0x10) != 0)) {
    *(uint8_t *)((int)param_1 + 0x20) = 0;
    init_33_byte_buffer_with_descending_values(*(uint32_t *)((int)param_1 + 0x10));
  }
  zero_array_from_struct((int)param_1);
  return;
}
