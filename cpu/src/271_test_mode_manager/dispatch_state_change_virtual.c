/* @k10d dispatch_state_change_virtual @ 0x1050e986
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual handlers for state transitions and updates the state field.
 * summary:
 *   Checks if the current state (offset 0x34) matches two specific target states (0x44 and
 *   0x40). If a match is found, it calls a virtual function via a vtable pointer at offset
 *   0x8d4, passing the adjusted object pointer and param_2. Finally, it sets the state
 *   field at offset 0x34 to param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_change_virtual(int param_1,uint32_t param_2)

{
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x44)) {
    (**(code **)(*(int *)(param_1 + 0x8d4) + 0x34))
              (*(short *)(*(int *)(param_1 + 0x8d4) + 0x30) + param_1,param_2);
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x40)) {
    (**(code **)(*(int *)(param_1 + 0x8d4) + 0x2c))
              (*(short *)(*(int *)(param_1 + 0x8d4) + 0x28) + param_1,param_2);
  }
  *(uint32_t *)(param_1 + 0x34) = param_2;
  return;
}
