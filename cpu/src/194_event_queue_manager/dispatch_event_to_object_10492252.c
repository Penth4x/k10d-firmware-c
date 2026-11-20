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

uint32_t dispatch_event_to_object_10492252(cls_105b4254 *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = param_1->field_0x10;
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[19].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[19].adj + iVar1,param_2);
  }
  iVar1 = *(int *)(param_1->field_0xc + 8);
  (((vtbl_entry*)(iVar1))[4].fn)(param_1->field_0xc + (int)((vtbl_entry*)(iVar1))[4].adj,param_2);
  return 1;
}
