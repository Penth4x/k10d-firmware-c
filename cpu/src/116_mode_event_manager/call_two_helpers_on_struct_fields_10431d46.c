/* @k10d call_two_helpers_on_struct_fields_10431d46 @ 0x10431d46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using values stored at offsets 0x38 and 0x30 of the input
 *   structure.
 * summary:
 *   The function reads a pointer or value from param_1 + 0x38 and passes it to
 *   read_field_at_offset_0x6c. It then reads a value from param_1 + 0x30 and passes it
 *   along with param_2 and the constant 1 to send_message_with_optional_payload. It returns
 *   1 unconditionally. The specific roles of the callees and the structure fields are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_on_struct_fields_10431d46(int param_1,void *param_2)

{
  read_field_at_offset_0x6c(*(uint32_t *)(param_1 + 0x38));
  send_message_with_optional_payload(*(uint32_t *)(param_1 + 0x30),param_2,1);
  return 1;
}
