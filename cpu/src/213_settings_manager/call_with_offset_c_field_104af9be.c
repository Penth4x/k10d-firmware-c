/* @k10d call_with_offset_c_field_104af9be @ 0x104af9be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at offset 0xc of the object in param_1 and passes it to
 *   send_lens_fw_update_packet.
 * summary:
 *   A one-line wrapper that dereferences param_1 + 0xc and forwards that value as the sole
 *   argument to send_lens_fw_update_packet. No other side effects or state changes are
 *   visible in this function. The role of send_lens_fw_update_packet is unknown, so the
 *   camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_with_offset_c_field_104af9be(int param_1)

{
  send_lens_fw_update_packet(*(uint32_t *)(param_1 + 0xc));
  return;
}
