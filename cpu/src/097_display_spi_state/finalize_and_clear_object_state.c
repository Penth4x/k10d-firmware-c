/* @k10d finalize_and_clear_object_state @ 0x10416da0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Performs final cleanup on an object, computes derived values from sub-objects, and
 *   nulls the primary pointer.
 * summary:
 *   The function accesses a sub-object at offset 0x8c of the input parameter. It calls a
 *   virtual method on a nested object, checks a counter condition to potentially call two
 *   cleanup helpers, and then calculates two 32-bit values by inverting and incrementing
 *   16-bit fields from another sub-object. It stores these results and calls two more
 *   virtual methods on a different sub-object at offset 0x4c. Finally, it calls a helper on
 *   the object at offset 0x50 and sets the pointer at offset 0x8c to zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void finalize_and_clear_object_state(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 0x8d4);
  (**(code **)(iVar4 + 0x94))(*(int *)(param_1 + 0x8c) + (int)*(short *)(iVar4 + 0x90));
  if (*(ushort *)(*(int *)(param_1 + 0x8c) + 0x690) + 1 ==
      (uint)*(ushort *)(*(int *)(param_1 + 0x8c) + 0x692)) {
    init_event_queue_and_send_msg(param_1);
    check_mode_transition_preconditions(param_1,0);
  }
  iVar4 = *(int *)(param_1 + 0x8c);
  uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x82c) + 0x5c);
  uVar2 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x82c) + 0x5e);
  *(uint *)(iVar4 + 0x658) =
       CONCAT22((*(ushort *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x82c) + 0x58) ^ 0xffff) + 1,
                (*(ushort *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x82c) + 0x5a) ^ 0xffff) + 1);
  *(uint *)(iVar4 + 0x65c) = CONCAT22((uVar1 ^ 0xffff) + 1,(uVar2 ^ 0xffff) + 1);
  iVar5 = **(int **)(param_1 + 0x4c);
  (**(code **)(iVar5 + 0x74))
            ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar5 + 0x70),iVar4 + 0x660,
             iVar4 + 0x664);
  iVar5 = **(int **)(param_1 + 0x4c);
  uVar3 = (**(code **)(iVar5 + 0x6c))
                    ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar5 + 0x68));
  *(uint32_t *)(iVar4 + 0x674) = uVar3;
  call_two_helpers_on_object_10514cfa(*(int *)(param_1 + 0x50));
  *(uint32_t *)(param_1 + 0x8c) = 0;
  return;
}
