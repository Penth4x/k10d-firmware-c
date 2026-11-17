/* @k10d dispatch_virtual_slot5_with_branch @ 0x10517028
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 5 of the object and branches to one of two helper functions based
 *   on the return value.
 * summary:
 *   The function performs a virtual call to slot 5 (offset 0x2c) of the object passed in
 *   param_1. It stores param_5 in a local stack variable. If the virtual call returns 0, it
 *   calls construct_object_with_vtable; otherwise, it calls construct_cls_105b6d0c. Both
 *   callees are identified as constructor/destructor bodies for related classes, suggesting
 *   this function manages object lifecycle or state transitions based on the virtual
 *   method's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot5_with_branch(int *param_1,uint32_t param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_18 [4];
  
  puVar2 = (uint32_t *)auStack_18;
  iVar1 = (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  if (iVar1 == 0) {
    *puVar2 = param_5;
    construct_object_with_vtable((uint16_t *)0x0,(short)param_2,(short)param_3,param_4,*puVar2);
  }
  else {
    *puVar2 = param_5;
    construct_cls_105b6d0c(0,param_2,param_3,param_4,*puVar2);
  }
  return;
}
