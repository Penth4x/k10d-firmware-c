/* @k10d dispatch_event_via_vtable_104e08ce @ 0x104e08ce
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and branches based on the return code to handle
 *   success or failure.
 * summary:
 *   The function retrieves a virtual table pointer from an object structure at param_1 +
 *   0x1c and calls a method (slot 2) with arguments from param_1. If the method returns 1,
 *   it performs a secondary virtual call on an object at param_1 + 0x20. If the initial
 *   method returns a non-1 value and param_1 + 0x20 is non-null, it calls a different
 *   virtual method (slot 3) on an object at param_1 + 0x24. In the failure path, it calls
 *   build_and_send_packet with the value at param_1 + 0x18. The specific camera subsystem
 *   is not identifiable from the generic C++ object manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_via_vtable_104e08ce(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
  iVar1 = (((vtbl_entry*)(iVar1))[2].fn)
                    (*(int *)(param_1 + 0x1c) + (int)((vtbl_entry*)(iVar1))[2].adj,
                     *(uint32_t *)(param_1 + 0x18),*(uint32_t *)(param_1 + 0x20));
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      iVar1 = (((vtbl_entry*)(*(int *)(iVar1 + 0x40)))[2].fn)
                        (((vtbl_entry*)(*(int *)(iVar1 + 0x40)))[2].adj + iVar1);
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 5) {
        return 2;
      }
    }
  }
  else if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = **(int **)(param_1 + 0x24);
    (((vtbl_entry*)(iVar1))[4].fn)((int)*(int **)(param_1 + 0x24) + (int)((vtbl_entry*)(iVar1))[4].adj);
    return 2;
  }
  build_and_send_packet((void*)(*(uint32_t *)(param_1 + 0x18)));
  return 3;
}
