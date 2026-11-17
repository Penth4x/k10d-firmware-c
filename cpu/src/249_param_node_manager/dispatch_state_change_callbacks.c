/* @k10d dispatch_state_change_callbacks @ 0x104def14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual methods on an object based on bitmask flags stored in a state
 *   structure.
 * summary:
 *   The function checks three different bitmask flags (at offsets 0x54, 0x4c, and 0x64)
 *   within the structure pointed to by param_1 against the mask param_2. If a flag is set,
 *   it retrieves a virtual object pointer from offset 0x78 and calls specific virtual slots
 *   (2, 1, 3, and 4) with adjusted 'this' pointers. For the flag at 0x64, it also
 *   synchronizes a value from offset 0x88 to 0x8c before invoking the callbacks. If the
 *   flag at 0x68 is set, it clears the return value at 0x94.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_state_change_callbacks(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x68) & param_2) == 0) {
    if ((*(uint *)(param_1 + 0x54) & param_2) != 0) {
      iVar1 = **(int **)(param_1 + 0x78);
      (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 0x20));
    }
    if ((*(uint *)(param_1 + 0x4c) & param_2) != 0) {
      iVar1 = **(int **)(param_1 + 0x78);
      (**(code **)(iVar1 + 0xc))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 8));
    }
    if (((*(uint *)(param_1 + 100) & param_2) != 0) &&
       (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88))) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x88);
      iVar1 = **(int **)(param_1 + 0x78);
      (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 0x10));
      iVar1 = **(int **)(param_1 + 0x78);
      (**(code **)(iVar1 + 0x1c))
                ((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 0x18),
                 *(uint32_t *)(param_1 + 0x8c));
      iVar1 = **(int **)(param_1 + 0x78);
      (**(code **)(iVar1 + 0xc))((int)*(int **)(param_1 + 0x78) + (int)*(short *)(iVar1 + 8));
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x94) = 0;
  }
  return *(uint8_t *)(param_1 + 0x94);
}
