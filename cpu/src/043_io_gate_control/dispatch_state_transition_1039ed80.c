/* @k10d dispatch_state_transition_1039ed80 @ 0x1039ed80
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Evaluates state conditions and dispatches a virtual call to update the object's current
 *   state pointer.
 * summary:
 *   The function checks multiple boolean conditions against fields in param_1 to determine
 *   if a state change is required. If conditions are met, it calls
 *   update_mode_transition_flags and then invokes a virtual method (slot 12) on the new
 *   state object pointed to by param_2. It also manages a pointer at offset 0x38,
 *   potentially releasing the previous state via a virtual call (slot 16) before assigning
 *   the new one.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_1039ed80(int param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (((((param_2 == *(int **)(param_1 + 0x60)) && (*(char *)(param_1 + 0x35) != '\0')) &&
       (iVar3 = *(int *)(param_1 + 200), iVar3 != 0)) &&
      (*(int **)(param_1 + 0x38) != *(int **)(param_1 + 0x8c))) &&
     ((*(char *)(param_1 + 0xd6) == '\0' || (iVar3 != 3)))) {
    *(int *)(param_1 + 0x48) = iVar3;
    param_2 = *(int **)(param_1 + 0x8c);
  }
  if (((param_2 == *(int **)(param_1 + 0x68)) && (iVar3 = check_mode_field_valid(param_1), iVar3 != 0)) &&
     (*(int *)(param_1 + 200) != 1)) {
    param_2 = *(int **)(param_1 + 0x8c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 200);
  }
  if ((param_2 == *(int **)(param_1 + 0x84)) && (iVar3 = check_mode_field_valid(param_1), iVar3 != 0)) {
    param_2 = *(int **)(param_1 + 0x8c);
    *(uint32_t *)(param_1 + 0x48) = *(uint32_t *)(param_1 + 200);
  }
  if (((param_2 == *(int **)(param_1 + 0x80)) && (iVar3 = check_mode_field_valid(param_1), iVar3 != 0)) &&
     (*(int *)(param_1 + 200) != 1)) {
    param_2 = *(int **)(param_1 + 0x8c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 200);
  }
  piVar4 = *(int **)(param_1 + 0x38);
  piVar2 = *(int **)(param_1 + 0x60);
  if (((piVar4 == piVar2) && (param_2 == *(int **)(param_1 + 0x68))) &&
     ((*(char *)(param_1 + 0xc0) != '\0' || (*(char *)(param_1 + 0xc1) != '\0')))) {
    param_2 = piVar2;
  }
  if (((piVar4 != param_2) || (piVar4 != piVar2)) &&
     ((*(char *)(param_1 + 0x35) == '\x01' || ((param_2 == piVar2 || (param_2 == (int *)0x0)))))) {
    update_mode_transition_flags(param_1,param_2);
    if (*(int *)(param_1 + 0x38) != 0) {
      check_kernel_object_id_valid((int *)(param_1 + 0x20));
      piVar2 = *(int **)(param_1 + 0x38);
      *(uint32_t *)(param_1 + 0x38) = 0;
      iVar3 = *piVar2;
      (((vtbl_entry*)(iVar3))[16].fn)((int)piVar2 + (int)((vtbl_entry*)(iVar3))[16].adj);
    }
    if (param_2 != (int *)0x0) {
      iVar3 = *param_2;
      sVar1 = *(short *)(iVar3 + 0x60);
      uVar5 = get_mode_flag_and_notify(param_1,param_2);
      (((vtbl_entry*)(iVar3))[12].fn)((int)sVar1 + (int)param_2,uVar5);
      *(int **)(param_1 + 0x38) = param_2;
      if (param_2 != *(int **)(param_1 + 0x60)) {
        check_heap_alloc_success((int *)(param_1 + 0x20),param_2[0xd]);
      }
    }
  }
  return;
}
