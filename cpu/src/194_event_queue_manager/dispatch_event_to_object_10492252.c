/* @k10d dispatch_event_to_object_10492252 @ 0x10492252
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Sends param_2 to two virtual methods on objects referenced by param_1.
 * summary:
 *   The function reads two pointers from param_1 (at offsets 0x10 and 0xc). It performs a
 *   virtual call on the first object (slot 15) if the pointer is non-null, and a virtual
 *   call on the second object (slot 4) unconditionally. It returns 1. The specific objects
 *   and the meaning of param_2 are not identifiable from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_object_10492252(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x9c))
              (*(short *)(*(int *)(iVar1 + 0xc) + 0x98) + iVar1,param_2);
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
  (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x20),param_2);
  return 1;
}
