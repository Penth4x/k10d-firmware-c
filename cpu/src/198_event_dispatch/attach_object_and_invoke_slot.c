/* @k10d attach_object_and_invoke_slot @ 0x10493fe0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Stores a pointer from a helper into param_1+0x60 and invokes a virtual method on that
 *   object.
 * summary:
 *   Calls find_matching_list_entry to obtain an object pointer and stores it at offset 0x60
 *   of param_1. It then performs a virtual call through the object's vtable (slot derived
 *   from offset 0x3c) with a this-adjustment, and finally calls activate_object_list_items
 *   with param_1. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void attach_object_and_invoke_slot(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)find_matching_list_entry(__frv_reg_unset(4));
  *(int **)(param_1 + 0x60) = piVar1;
  iVar2 = *(int *)(*piVar1 + 0xc);
  (**(code **)(iVar2 + 0x3c))(*piVar1 + (int)*(short *)(iVar2 + 0x38));
  activate_object_list_items(param_1);
  return;
}
