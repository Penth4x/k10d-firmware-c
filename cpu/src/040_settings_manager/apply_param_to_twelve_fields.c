/* @k10d apply_param_to_twelve_fields @ 0x10398d40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper 12 times, passing param_1 and each of 12 consecutive 4-byte fields from
 *   param_1+0x9c through param_1+0xc8 with constants 0x13 and 5.
 * summary:
 *   The function reads twelve 32-bit values from offsets 0x9c to 0xc8 of the object pointed
 *   to by param_1 and forwards each to build_and_send_buffered_message along with the fixed
 *   arguments 0x13 and 5. It performs no other operations and returns void. The role of
 *   build_and_send_buffered_message is unknown, so the specific subsystem effect cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_param_to_twelve_fields(int param_1)

{
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0x9c),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xa0),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xa4),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xa8),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xac),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xb0),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xb4),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xb8),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xbc),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xc0),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 0xc4),0x13,5);
  build_and_send_buffered_message(param_1,*(uint32_t *)(param_1 + 200),0x13,5);
  return;
}
