/* @k10d initialize_object_and_invoke_callback @ 0x1049358e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure at param_1 and invokes a virtual method on a linked
 *   object if present.
 * summary:
 *   Calls three unknown initialization functions (iterate_and_dispatch_object_list,
 *   activate_object_list_items, find_matching_list_entry). Stores the result of
 *   find_matching_list_entry at offset 0x60 of the object. If the stored pointer is non-
 *   null and its first field is non-zero, it performs a virtual call on the object pointed
 *   to by the first field's offset 0xc. The specific camera subsystem is not identifiable
 *   from the provided pseudocode or unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_and_invoke_callback(cls_105b44b4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iterate_and_dispatch_object_list(param_1);
  activate_object_list_items((cls_105b4ad4 *)param_1);
  piVar2 = (int *)find_matching_list_entry((int)(param_1));
  param_1->field_0x60 = (uintptr_t)(piVar2);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0)) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[7].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[7].adj + iVar1);
  }
  return;
}
