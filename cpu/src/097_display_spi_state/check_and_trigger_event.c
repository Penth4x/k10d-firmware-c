/* @k10d check_and_trigger_event @ 0x10418342
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks two status functions and a state field, then calls two handlers if conditions
 *   are met.
 * summary:
 *   The function reads a pointer from offset 0x5c of the input object and passes it to
 *   test_bit_in_object_field and check_status_bit1. If both return 0 and the integer at
 *   offset 0x1518 is either 0 or 1, it calls set_mode_state_flag with arguments (param_1,
 *   1, 0) and dispatch_mode_event_request with a pointer to offset 0x60 and the constant
 *   0x130004. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_trigger_event(int param_1)

{
  int iVar1;
  
  iVar1 = test_bit_in_object_field(*(uint32_t *)(param_1 + 0x5c));
  if (((iVar1 == 0) && (iVar1 = check_status_bit1(*(uint32_t *)(param_1 + 0x5c)), iVar1 == 0)) &&
     ((*(int *)(param_1 + 0x1518) == 0 || (*(int *)(param_1 + 0x1518) == 1)))) {
    set_mode_state_flag(param_1,1,0);
    dispatch_mode_event_request((void *)(param_1 + 0x60),0x130004);
  }
  return;
}
