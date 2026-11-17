/* @k10d dispatch_mode_change_event_1049aab6 @ 0x1049aab6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode object, selects a flag based on its type, and dispatches a virtual event
 *   to a handler.
 * summary:
 *   The function writes param_2 to offset 0x54 of the object. It reads a type field from
 *   param_2 (offset 4) and sets a local flag (0x41000-0x41002) while calling one of three
 *   helper functions (dispatch_virtual_method_on_list_node, invoke_virtual_slot_6_1049abb8,
 *   invoke_virtual_slot_six_1049ac18). It then retrieves a handler object from param_2+8
 *   and invokes virtual slot 2 with the flag and a pointer to offset 0x40. Finally, it
 *   calls free_object_if_flag_set_1052107a with argument 3 and clears the object field at
 *   0x54.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event_1049aab6(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  
  *(int *)(param_1 + 0x54) = param_2;
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = 0x41000;
    dispatch_virtual_method_on_list_node(param_1);
  }
  else if (iVar1 == 1) {
    uVar3 = 0x41001;
    invoke_virtual_slot_6_1049abb8(param_1);
  }
  else if (iVar1 == 2) {
    uVar3 = 0x41002;
    invoke_virtual_slot_six_1049ac18(param_1);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x54) + 8);
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),uVar3,param_1 + 0x40);
  free_object_if_flag_set_1052107a(*(void **)(param_1 + 0x54),3);
  *(uint32_t *)(param_1 + 0x54) = 0;
  return;
}
