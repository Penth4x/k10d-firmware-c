/* @k10d allocate_and_link_object @ 0x104992ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Allocates a resource via call_virtual_method_if_flag_set, links it into the object at
 *   param_1, and initializes it via traverse_tree_with_virtual_handlers.
 * summary:
 *   Calls get_or_create_singleton_object_10516ff2 to get a parameter, then calls
 *   call_virtual_method_if_flag_set with offsets from param_1. If successful, stores the
 *   result in param_2+8, updates a pointer at param_1+0x14, and calls
 *   traverse_tree_with_virtual_handlers. Finally calls dispatch_two_virtual_calls_10499358
 *   if the initialization succeeds. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_link_object(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_or_create_singleton_object_10516ff2();
  iVar2 = call_virtual_method_if_flag_set((void *)(param_1 + 0x4c),(void *)(param_1 + 0x24),uVar1);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(int *)(param_2 + 8) = iVar2;
    **(uint32_t **)(param_1 + 0x14) = *(uint32_t *)(param_1 + 4);
    iVar3 = traverse_tree_with_virtual_handlers(*(uint32_t *)(param_1 + 0x14),iVar2,0,0);
    if (iVar3 != 0) {
      dispatch_two_virtual_calls_10499358(param_1,param_2,iVar2);
    }
  }
  return iVar3;
}
