/* @k10d update_object_status_bytes @ 0x1039e3d8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 042_debug_menu_state (unit names are model-proposed)
 * purpose:
 *   Copies two values from a source object via virtual calls and updates status bytes in a
 *   target object based on helper results.
 * summary:
 *   The function calls virtual slot 2 of param_2 with arguments 0 and 1, storing the
 *   results at param_1+0x30 and param_1+0xc1. It calls
 *   query_object_property_via_temp_104f2482 and query_object_property_via_temp_104f2570
 *   with param_1[0x2f] to update bytes at 0xc2 and 0x31. It checks conditions involving
 *   param_1[0xe] and virtual slot 5 calls to param_2 (arguments 0x11-0x14) to potentially
 *   invoke virtual slot 9 of param_1 with argument 0x1120075. Finally, it calls virtual
 *   slot 10 of the object at param_1[0xe] if param_1[0xd] is non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039e52c) overlaps instruction at (ram,0x1039e52a)
    */

uint32_t update_object_status_bytes(cls_10564150 *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  uint8_t uVar6;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  
  uVar6 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0);
  param_1->field_0xc0 = uVar6;
  uVar6 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,1);
  param_1->field_0xc1 = uVar6;
  param_1->field_0xc3 = param_1->field_0xc2;
  uVar6 = query_object_property_via_temp_104f2482(param_1->field_0xbc);
  param_1->field_0xc2 = uVar6;
  if ((param_1->field_0x38 == param_1->field_0x74) &&
     (((iVar3 = (((vtbl_entry*)(*param_2))[5].fn)((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x13)
       , iVar3 != 0 ||
       (iVar3 = (**(code **)(*param_2 + 0x2c))((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x14)
       , iVar3 != 0)) ||
      (iVar3 = (**(code **)(*param_2 + 0x2c))((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x12),
      iVar3 != 0)))) {
    (**(code **)(param_1->field_0x0 + 0x4c))
              ((int)&param_1->field_0x0 + (int)*(short *)(param_1->field_0x0 + 0x48),0x1120075,0);
  }
  if ((param_1->field_0x38 == param_1->field_0x90) &&
     (((iVar3 = (((vtbl_entry*)(*param_2))[5].fn)((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x13)
       , iVar3 != 0 ||
       (iVar3 = (**(code **)(*param_2 + 0x2c))((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x14)
       , iVar3 != 0)) ||
      ((iVar3 = (**(code **)(*param_2 + 0x2c))((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x12)
       , iVar3 != 0 ||
       (iVar3 = (**(code **)(*param_2 + 0x2c))((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0x11)
       , iVar3 != 0)))))) {
    (**(code **)(param_1->field_0x0 + 0x4c))
              ((int)&param_1->field_0x0 + (int)*(short *)(param_1->field_0x0 + 0x48),0x1120075,0);
  }
  bVar1 = param_1->field_0xc4;
  uVar4 = query_object_property_via_temp_104f2570(param_1->field_0xbc);
  if ((bVar1 != uVar4) || (param_1->field_0xda != '\0')) {
    uVar6 = query_object_property_via_temp_104f2570(param_1->field_0xbc);
    param_1->field_0xc4 = uVar6;
    if (param_1->field_0x38 == param_1->field_0x84) {
      toggle_virtual_state_flag_103ac016((uint32_t)param_1, (uint32_t)param_2);
      param_1->field_0xda = 0;
    }
    else {
      param_1->field_0xda = 1;
    }
  }
  uVar5 = 0;
  if ((param_1->field_0x34 != '\0') && (piVar2 = (int *)param_1->field_0x38, piVar2 != (int *)0x0))
  {
    uVar5 = (((vtbl_entry*)(*piVar2))[10].fn)((int)((vtbl_entry*)(*piVar2))[10].adj + (int)piVar2,param_2);
  }
  return uVar5;
}
