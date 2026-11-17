/* @k10d check_and_clear_two_flags @ 0x104defcc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Queries two virtual objects for a status bit and clears a local flag if either returns
 *   1.
 * summary:
 *   The function retrieves pointers from offsets 0x78 and 0x74 of the input object. It
 *   performs virtual calls (slot 2 and slot 5 respectively) to check a status. If either
 *   call returns 1, it invokes poll_event_queue_for_mask with a 1000ms timeout and a
 *   parameter from offset 0x60 or 0x50. Finally, it clears the byte at offset 0x94 of the
 *   input object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_clear_two_flags(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x78);
  iVar1 = (**(code **)(iVar1 + 0x14))
                    ((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 0x10));
  if (iVar1 == 1) {
    poll_event_queue_for_mask(param_1,*(uint32_t *)(param_1 + 0x60),1000);
  }
  iVar1 = **(int **)(param_1 + 0x74);
  iVar1 = (**(code **)(iVar1 + 0x44))
                    ((int)*(int **)(param_1 + 0x74) + (int)*(short *)(iVar1 + 0x40));
  if (iVar1 == 1) {
    poll_event_queue_for_mask(param_1,*(uint32_t *)(param_1 + 0x50),1000);
  }
  *(uint8_t *)(param_1 + 0x94) = 0;
  return;
}
