/* @k10d init_card_service_params @ 0x1046da02
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Initializes a card service operation by setting up parameters and calling setup
 *   routines.
 * summary:
 *   The function takes a parameter (likely a context or handle) and calls two setup
 *   functions (forward_event_to_subobject, initialize_adjustment_state) with the parameter
 *   and value 1. It then sets up a local structure on the stack with specific values (3 and
 *   0xff) and passes it to sr_dma_command along with a data pointer. Finally, it calls
 *   check_kernel_call_success_10459fea with a timeout or delay value of 1000. The caller is
 *   a card-based service operation dispatcher, suggesting this function prepares the state
 *   for a card operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_card_service_params(int param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t auStack_10 [8];
  
  puVar1 = auStack_10;
  forward_event_to_subobject(param_1,1);
  initialize_adjustment_state(param_1,1);
  *(uint16_t *)(puVar1 + 2) = 3;
  *(uint16_t *)(puVar1 + 6) = 0xff;
  sr_dma_command(param_1,3,1,&DAT_105a90e0/*ROM*/,*(uint16_t *)(puVar1 + 2),*(uint16_t *)(puVar1 + 6));
  check_kernel_call_success_10459fea(0x3e8);
  return;
}
