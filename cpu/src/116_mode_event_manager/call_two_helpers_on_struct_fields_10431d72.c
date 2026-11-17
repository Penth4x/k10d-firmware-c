/* @k10d call_two_helpers_on_struct_fields_10431d72 @ 0x10431d72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using values stored at offsets 0x38 and 0x30 of the first
 *   argument.
 * summary:
 *   Reads a pointer from param_1+0x38 and passes it to read_field_at_offset_0x6c. Then
 *   reads a pointer from param_1+0x30 and passes it along with param_2 and the constant 1
 *   to write_param_to_buffer. Returns 1 unconditionally. The roles of the callees and the
 *   struct fields are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_on_struct_fields_10431d72(int param_1,void *param_2)

{
  read_field_at_offset_0x6c(*(uint32_t *)(param_1 + 0x38));
  write_param_to_buffer(*(uint32_t *)(param_1 + 0x30),param_2,1);
  return 1;
}
