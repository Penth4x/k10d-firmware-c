/* @k10d call_with_field_at_offset_0x18 @ 0x104e07f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x18 of the object pointed to by param_1 to a single
 *   callee.
 * summary:
 *   The function dereferences param_1, reads the word at offset 0x18, and forwards it as
 *   the sole argument to build_and_send_packet. No other operations, side effects, or state
 *   changes are visible in the pseudocode. The role of the callee and the meaning of the
 *   0x18 field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_with_field_at_offset_0x18(int param_1)

{
  build_and_send_packet((void *)(*(uint32_t *)(param_1 + 0x18)));
  return;
}
