/* @k10d update_dual_object_state_flags @ 0x104ded8e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Updates state flags in a struct and invokes virtual methods on two embedded objects
 *   based on those flags.
 * summary:
 *   The function modifies fields at offsets 0x8c and 0x94 of the object passed in param_1.
 *   It compares the value at offset 8 against two global constants to determine the initial
 *   state. It then performs virtual calls on objects located at offsets 0x78 and 0x74,
 *   passing the computed state flags as arguments. If the virtual calls return non-zero, it
 *   calls poll_event_queue_for_mask with specific offsets from the object. Finally, it
 *   synchronizes the flag at 0x8c with the value at 0x88 and makes another virtual call on
 *   the object at 0x74.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_dual_object_state_flags(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x8c) = 1;
  if (*(int *)(param_1 + 8) == _DAT_105bb618/*ROM*/) {
    *(uint32_t *)(param_1 + 0x8c) = 2;
  }
  uVar1 = 1;
  if (*(int *)(param_1 + 8) != _DAT_105bb614/*ROM*/) {
    uVar1 = 2;
  }
  iVar2 = **(int **)(param_1 + 0x78);
  iVar2 = (((vtbl_entry*)(iVar2))[3].fn)
                    ((int)*(int **)(param_1 + 0x78) + (int)((vtbl_entry*)(iVar2))[3].adj,
                     *(uint32_t *)(param_1 + 0x8c));
  if (iVar2 != 0) {
    poll_event_queue_for_mask(param_1,*(uint32_t *)(param_1 + 100),0);
  }
  iVar2 = **(int **)(param_1 + 0x74);
  iVar2 = (((vtbl_entry*)(iVar2))[9].fn)
                    ((int)*(int **)(param_1 + 0x74) + (int)((vtbl_entry*)(iVar2))[9].adj,
                     *(uint32_t *)(param_1 + 0x88),uVar1);
  if (iVar2 != 0) {
    poll_event_queue_for_mask(param_1,*(uint32_t *)(param_1 + 0x58),0);
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x88);
  }
  iVar2 = **(int **)(param_1 + 0x74);
  (((vtbl_entry*)(iVar2))[7].fn)((int)*(int **)(param_1 + 0x74) + (int)((vtbl_entry*)(iVar2))[7].adj,uVar1);
  *(uint8_t *)(param_1 + 0x94) = 1;
  return;
}
