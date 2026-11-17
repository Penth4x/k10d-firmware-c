/* @k10d dispatch_virtual_slot_three_10517564 @ 0x10517564
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 5 and 6 of the object and branches to one of three helper
 *   constructors based on their return values.
 * summary:
 *   The function performs two virtual calls on param_1: slot 5 (offset 0x2c) and, if that
 *   returns 0, slot 6 (offset 0x34). Depending on the results, it calls one of three
 *   functions (construct_object_with_vtable, construct_cls_105fa778_object, or
 *   construct_cls_105b6d0c) with param_2 through param_5. The callees are identified as
 *   constructor/destructor bodies for different classes, suggesting this function
 *   initializes or finalizes an object based on state checks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_three_10517564(int *param_1,uint32_t param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_1c [4];
  
  puVar2 = (uint32_t *)auStack_1c;
  iVar1 = (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1,param_2);
    if (iVar1 == 0) {
      *puVar2 = param_5;
      construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar2);
    }
    else {
      *puVar2 = param_5;
      construct_cls_105fa778_object(0,param_2,param_3,param_4);
    }
  }
  else {
    *puVar2 = param_5;
    construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar2);
  }
  return;
}
