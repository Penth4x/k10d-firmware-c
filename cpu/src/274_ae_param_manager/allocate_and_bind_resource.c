/* @k10d allocate_and_bind_resource @ 0x1051ac98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a resource via call_virtual_method_if_flag_set, stores the handle in param_2,
 *   and binds it to param_1 if successful.
 * summary:
 *   Calls get_or_init_singleton_object_10517512 to get a parameter, then calls
 *   call_virtual_method_if_flag_set with offsets from param_1. If the result is non-zero,
 *   it writes the handle to param_2+8, updates a pointer at param_1+0x40, and calls
 *   traverse_tree_with_virtual_handlers. If that also succeeds, it calls
 *   dispatch_virtual_event_handler. Returns the result of
 *   traverse_tree_with_virtual_handlers or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_bind_resource(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_or_init_singleton_object_10517512();
  iVar2 = call_virtual_method_if_flag_set((char *)(param_1 + 0x3c),(int *)(param_1 + 0x14),(uint32_t)(uVar1));
  iVar3 = 0;
  if (iVar2 != 0) {
    *(int *)(param_2 + 8) = iVar2;
    **(uint32_t **)(param_1 + 0x40) = *(uint32_t *)(param_1 + 4);
    iVar3 = traverse_tree_with_virtual_handlers(*(uint32_t *)(param_1 + 0x40),iVar2,0,0);
    if (iVar3 != 0) {
      dispatch_virtual_event_handler(param_1,param_2,iVar2);
    }
  }
  return iVar3;
}
