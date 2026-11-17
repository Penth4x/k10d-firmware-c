/* @k10d dispatch_object_event_and_notify @ 0x10494486
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Checks a global flag, invokes a virtual method on an object, and notifies a list of
 *   registered listeners.
 * summary:
 *   The function first calls read_byte_at_offset_8 to check a condition. If true, it
 *   performs a virtual call (slot 10) on the object pointed to by param_1+0xc. Based on the
 *   result, it may call another virtual method (slot 9) and then a third virtual method
 *   (slot 14) with an argument of 0 or 1. Finally, it iterates through a list of pointers
 *   (from param_1+0x18 to param_1+0x1c) and calls a virtual method (slot 10) on each object
 *   in the list. It clears a byte at param_1+9 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_event_and_notify(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = read_byte_at_offset_8(__frv_reg_unset(4));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))
                      (*(short *)(*(int *)(param_1 + 0xc) + 0x68) + param_1);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0xc) + 0xe4))
                (*(short *)(*(int *)(param_1 + 0xc) + 0xe0) + param_1,1);
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x7c))
                        (*(short *)(*(int *)(param_1 + 0xc) + 0x78) + param_1);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0xc) + 0xe4))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xe0) + param_1,0);
      }
      else {
        (**(code **)(*(int *)(param_1 + 0xc) + 0xe4))
                  (*(short *)(*(int *)(param_1 + 0xc) + 0xe0) + param_1,1);
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar1 = *(int *)(*piVar2 + 0xc);
      (**(code **)(iVar1 + 0x54))(*piVar2 + (int)*(short *)(iVar1 + 0x50));
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x1c));
  }
  *(uint8_t *)(param_1 + 9) = 0;
  return;
}
