/* @k10d dispatch_virtual_slot5_or_init @ 0x10533e62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 5 of param_1; if result is zero, initializes cls_105b6a30, else
 *   initializes cls_105b6d0c.
 * summary:
 *   Invokes virtual method slot 5 (offset 0x2c) on the object in param_1. If the return
 *   value is 0, it calls check_event_code_validity and, if that succeeds, constructs a
 *   cls_105b6a30 object via construct_object_with_vtable. Otherwise, it directly constructs
 *   a cls_105b6d0c object via construct_cls_105b6d0c. Returns the result of the constructor
 *   call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_virtual_slot5_or_init(int *param_1,int param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_20 [4];
  
  puVar4 = (uint32_t *)auStack_20;
  uVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  if (iVar1 == 0) {
    iVar1 = check_event_code_validity(param_1,param_2);
    if (iVar1 != 0) {
      *puVar4 = param_5;
      uVar2 = construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar4);
      uVar3 = (uint)uVar2;
    }
  }
  else {
    *puVar4 = param_5;
    uVar3 = construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar4);
  }
  return uVar3;
}
