/* @k10d invoke_callback_at_offset_0x18 @ 0x104e0be8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls the function pointer stored at offset 0x18 of the given structure and returns 3.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as an argument to
 *   build_and_send_packet. It then returns the constant 3. The callee build_and_send_packet
 *   is not named, so the specific behavior of the invoked routine is unknown. The return
 *   value 3 may indicate a status code or a fixed response value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_callback_at_offset_0x18(void *param_1)

{
  build_and_send_packet((void *)(*(uint32_t *)((int)param_1 + 0x18)));
  return 3;
}
