/* @k10d dispatch_buffer_update_event @ 0x10531750
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates a buffer descriptor and invokes a virtual method to process the change.
 * summary:
 *   The function modifies fields in a structure pointed to by param_1, specifically at
 *   offsets 0xc, 0x1c, and 0x18. It conditionally calls a helper at 0x104ad2d4 with
 *   parameters derived from the structure. Finally, it performs a virtual function call via
 *   a vtable pointer stored at param_1 + 4, using slot 0x34 (slot 6) to pass param_2 and
 *   the updated pointer from param_1 + 0x18.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_buffer_update_event(cls_1061e14c *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    param_1->field_0xc = 0;
    param_1->field_0x1c = 0;
    clear_two_fields_and_reset((uint32_t *)(param_1->field_0x18),(int)(0));
  }
  else {
    uVar1 = param_1->field_0xc;
    if (uVar1 == 0) {
      if ((uint)param_1->field_0x8 < (uint)(*(int *)(param_3 + 4) - *(int *)(param_3 + 0xc))) {
        param_1->field_0x1c = param_3;
        (*(code *)0x104ad2d4/*ROM*/)(param_1->field_0x18,param_1->field_0x10,param_1->field_0x8,0);
        param_3 = param_1->field_0x18;
      }
    }
    else {
      uVar2 = param_1->field_0x14;
      if (uVar1 <= (uint)param_1->field_0x14) {
        uVar2 = uVar1;
      }
      param_1->field_0x1c = param_3;
      (*(code *)0x104ad2d4/*ROM*/)(param_1->field_0x18,param_1->field_0x10,uVar2,0);
      param_3 = param_1->field_0x18;
    }
  }
  iVar3 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar3))[6].fn)(param_1->field_0x4 + (int)((vtbl_entry*)(iVar3))[6].adj,param_2,param_3);
  return;
}
