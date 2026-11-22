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

void attach_object_and_invoke_slot(cls_105b47b4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)find_matching_list_entry((int)(param_1));  /* B-3: stock passes incoming r4 (mov r4,r8 in delay slot) */
  param_1->field_0x60 = (uintptr_t)(piVar1);
  iVar2 = *(int *)(*piVar1 + 0xc);
  (((vtbl_entry*)(iVar2))[7].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[7].adj);
  activate_object_list_items((cls_105b4ad4 *)param_1);
  return;
}
