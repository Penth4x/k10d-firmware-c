/* @k10d toggle_object_state_and_call_handler @ 0x1046fdba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sets a state byte, calls a state setter, invokes a handler with a fixed pointer, and
 *   resets the state.
 * summary:
 *   The function writes 0 to offset 0x11 of the object in param_1. It calls
 *   forward_event_to_subobject with 1, then calls sr_dma_command with arguments including a
 *   fixed address 0x105a95fc and values 7 and 0xff. It calls
 *   check_kernel_call_success_10459fea(200) and reset_subobject_at_offset_0x2c_104706a0,
 *   then calls call_helper_with_offset_and_zero_1046307c with the value at offset 0x2c.
 *   Finally, it resets offset 0x11 to 0 and calls forward_event_to_subobject with 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_and_call_handler(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_14 [8];
  
  puVar1 = auStack_14;
  *(uint8_t *)(param_1 + 0x11) = 0;
  forward_event_to_subobject(param_1,1);
  *(uint16_t *)(puVar1 + 2) = 7;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  sr_dma_command((int)(param_1),(uint32_t)(4),(uint32_t)(3),(byte *)(0x105a95fc/*ROM*/),(uint16_t)(*(uint16_t *)(puVar1 + 2)),(uint16_t)(*(uint16_t *)(puVar1 + 6)));
  check_kernel_call_success_10459fea(0xc8);
  reset_subobject_at_offset_0x2c_104706a0(param_1);
  call_helper_with_offset_and_zero_1046307c((int *)(*(uint32_t *)(param_1 + 0x2c)));
  *(uint8_t *)(param_1 + 0x11) = 0;
  forward_event_to_subobject(param_1,0);
  return;
}
