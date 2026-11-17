/* @k10d send_message_with_payload @ 0x10434fa2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Sends a message of type 3 to a destination, optionally including a computed payload.
 * summary:
 *   Calls store_value_to_pointer_1043554a with the destination (param_2) and a constant
 *   type 3. If param_3 is non-zero, it calls clamp_index_to_range_10434fca with param_1 and
 *   param_3 to generate a value, then passes that value to
 *   write_field_at_offset_four_1043554e along with the destination. Returns 1
 *   unconditionally. The callees are not named, so the specific subsystem (e.g., lens comm,
 *   AE, etc.) cannot be determined from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_message_with_payload(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a(param_2,3);
  if (param_3 != 0) {
    uVar1 = clamp_index_to_range_10434fca(param_1,param_3);
    write_field_at_offset_four_1043554e((int)param_2,uVar1);
  }
  return 1;
}
