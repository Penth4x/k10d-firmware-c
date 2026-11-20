/* @k10d dispatch_virtual_call_and_store_result @ 0x104a5b7a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, conditionally calls helpers, and stores the
 *   result via another function.
 * summary:
 *   The function performs a virtual call on the object at param_1+0x10 (slot 2). If the
 *   return value is not 3, it calls query_object_slot_three_104a6a48, performs another
 *   virtual call on the object at param_1+0x14 (slot 2) with argument 0x17, and passes the
 *   results to lookup_exposure_compensation_table. Finally, it calls write_to_dynamic_array
 *   with param_2, 0, and the computed result. The specific camera subsystem is not
 *   identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_and_store_result(int param_1,int param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = **(int **)(param_1 + 0x10);
  iVar4 = (((vtbl_entry*)(iVar4))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar4))[2].adj,0);
  if (iVar4 != 3) {
    uVar3 = *(uint32_t *)(param_1 + 0x50);
    uVar2 = query_object_slot_three_104a6a48(param_1);
    iVar4 = **(int **)(param_1 + 0x14);
    uVar1 = (((vtbl_entry*)(iVar4))[2].fn)
                      ((int)*(int **)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar4))[2].adj,0x17);
    uVar2 = lookup_exposure_compensation_table(uVar3,uVar2,uVar1);
  }
  write_to_dynamic_array(param_2,0,uVar2);
  return;
}
