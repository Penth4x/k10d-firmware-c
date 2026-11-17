/* @k10d send_message_with_optional_payload @ 0x10434f3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 123_menu_state_init (unit names are model-proposed)
 * purpose:
 *   Initializes a message object and conditionally attaches a payload before returning
 *   success.
 * summary:
 *   Calls store_value_to_pointer_1043554a to initialize param_2 with a type or size of 2.
 *   If param_3 is non-zero, it calls select_pointer_by_index to process param_1 and
 *   param_3, then passes the result to write_field_at_offset_four_1043554e along with
 *   param_2. Always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_message_with_optional_payload(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  store_value_to_pointer_1043554a(param_2,2);
  if (param_3 != 0) {
    uVar1 = select_pointer_by_index(param_1,param_3);
    write_field_at_offset_four_1043554e((int)param_2,uVar1);
  }
  return 1;
}
