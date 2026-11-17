/* @k10d wait_for_flag_with_timeout_1046ffca @ 0x1046ffca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Initializes a state object, triggers a sequence of operations, and polls a status byte
 *   until it becomes non-zero.
 * summary:
 *   The function clears a status byte at offset 0x13 of the object passed in param_1. It
 *   calls several initialization or trigger functions (forward_event_to_subobject,
 *   configure_timer_object, sr_dma_command, set_param_via_object) with specific parameters.
 *   It then enters a loop, calling check_kernel_call_success_10459fea(100) (likely a delay
 *   or sleep) and re-checking the status byte until it is non-zero. Finally, it calls
 *   set_param_via_object with 0 and resets the status byte and another field via
 *   forward_event_to_subobject.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_with_timeout_1046ffca(int param_1)

{
  char cVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStack_14 [8];
  
  puVar2 = auStack_14;
  *(uint8_t *)(param_1 + 0x13) = 0;
  forward_event_to_subobject(param_1,1);
  configure_timer_object(param_1,1);
  *(uint16_t *)(puVar2 + 2) = 3;
  *(uint16_t *)(puVar2 + 6) = 0xff;
  sr_dma_command(param_1,3,1,0x105a9660/*ROM*/,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6));
  set_param_via_object(param_1,1);
  cVar1 = *(char *)(param_1 + 0x13);
  while (cVar1 == '\0') {
    check_kernel_call_success_10459fea();
    cVar1 = *(char *)(param_1 + 0x13);
  }
  set_param_via_object(param_1,0);
  *(uint8_t *)(param_1 + 0x13) = 0;
  forward_event_to_subobject(param_1,0);
  return;
}
