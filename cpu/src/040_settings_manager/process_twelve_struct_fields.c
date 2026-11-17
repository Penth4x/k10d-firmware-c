/* @k10d process_twelve_struct_fields @ 0x1039b850
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on twelve consecutive 4-byte fields of a struct, passing fixed arguments
 *   0x14 and 5.
 * summary:
 *   The function takes a pointer (param_1) and iterates over twelve 4-byte values located
 *   at offsets 0x68 through 0x94. For each value, it calls build_and_send_buffered_message
 *   with the struct pointer, the field value, and the constants 0x14 and 5. The specific
 *   role of build_and_send_buffered_message is unknown, so the operation is described
 *   mechanically as processing these twelve fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_twelve_struct_fields(int param_1)

{
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x68),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x6c),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x70),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x74),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x78),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x7c),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x80),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x84),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x88),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x8c),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x90),0x14,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x94),0x14,5);
  return;
}
