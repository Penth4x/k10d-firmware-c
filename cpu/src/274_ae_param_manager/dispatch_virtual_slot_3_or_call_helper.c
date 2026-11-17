/* @k10d dispatch_virtual_slot_3_or_call_helper @ 0x105175e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of an object if param_2 is below 0xc000, otherwise calls
 *   dispatch_event_to_object_10517672.
 * summary:
 *   The function branches on param_2. If param_2 < 0xc000, it dereferences the pointer at
 *   param_1+4 to get an object, then invokes virtual slot 3 (offset 0x24) on that object
 *   with a this-adjustment. If param_2 >= 0xc000, it calls
 *   dispatch_event_to_object_10517672. This is virtual method slot 4 of class cls_105d6524.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_3_or_call_helper(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0xc000) {
    iVar1 = **(int **)(param_1 + 4);
    (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x20));
  }
  else {
    dispatch_event_to_object_10517672(__frv_reg_unset(4), __frv_reg_unset(5));
  }
  return;
}
