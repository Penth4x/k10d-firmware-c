/* @k10d dispatch_virtual_slot_three_10533aa2 @ 0x10533aa2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 5 and 6 of the object, then branches to one of three helper
 *   functions based on their return values.
 * summary:
 *   This function is virtual slot 3 of class cls_1061e3d0. It first calls virtual slot 5
 *   (offset 0x2c) on the object. If that returns 0, it calls virtual slot 6 (offset 0x34)
 *   with param_2. Depending on the results of these calls and check_event_id_allowed, it
 *   dispatches to one of three other functions (construct_object_with_vtable,
 *   construct_cls_105fa778_object, or construct_cls_105b6d0c), passing param_2 through
 *   param_5. The return value is the result of the final helper call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_virtual_slot_three_10533aa2(cls_1061e3d0 *param_1,int param_2,uint32_t param_3,int param_4,
                 uint32_t param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_20 [4];
  
  puVar4 = (uint32_t *)auStack_20;
  uVar3 = 0;
  iVar1 = (((vtbl_entry*)(param_1->field_0x0))[5].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[5].adj);
  if (iVar1 == 0) {
    iVar1 = (((vtbl_entry*)(param_1->field_0x0))[6].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj,param_2
                      );
    if (iVar1 == 0) {
      iVar1 = check_event_id_allowed(param_1,param_2);
      if (iVar1 != 0) {
        *puVar4 = param_5;
        uVar2 = construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar4);
        uVar3 = (uint)uVar2;
      }
    }
    else {
      *puVar4 = param_5;
      uVar3 = construct_cls_105fa778_object(0,param_2,param_3,param_4);
    }
  }
  else {
    *puVar4 = param_5;
    uVar3 = construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar4);
  }
  return uVar3;
}
