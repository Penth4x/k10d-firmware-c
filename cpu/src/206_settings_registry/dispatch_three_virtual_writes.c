/* @k10d dispatch_three_virtual_writes @ 0x104a8cf2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 3 and 4 on param_2 with offset arguments, then branches on a
 *   helper result.
 * summary:
 *   The function makes three virtual calls on the object in param_2: two via slot 3 (vtable
 *   offset 0x1c) and one via slot 4 (vtable offset 0x24), passing param_1 and param_3 with
 *   increasing offsets (0, 2, 4). It then calls check_product_exceeds_threshold on param_1;
 *   if true, it makes a fourth virtual call via slot 4 with offset 8, calls
 *   compute_weighted_value and allocate_and_init_buffer_104a906e, and reads two ints from
 *   param_1+8 and param_1+0xc. If false, it uses param_3+8 and param_1+8 directly. Finally
 *   it calls dispatch_virtual_by_type with param_1, param_2, and the two computed values,
 *   returning its result. The callees are unnamed, so the specific subsystem role is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_virtual_writes(int param_1,int *param_2,int param_3)

{
  bool bVar3;
  int iVar1;
  uint32_t uVar2;
  int iVar4;
  
  (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,param_1,1,param_3);
  (**(code **)(*param_2 + 0x1c))
            ((int)*(short *)(*param_2 + 0x18) + (int)param_2,param_1 + 2,1,param_3 + 2);
  (**(code **)(*param_2 + 0x24))
            ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 4,1,param_3 + 4);
  bVar3 = check_product_exceeds_threshold((void *)param_1);
  if (bVar3) {
    (**(code **)(*param_2 + 0x24))
              ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 8,1,param_3 + 8);
    iVar1 = compute_weighted_value(param_1);
    allocate_and_init_buffer_104a906e((void *)param_1,(void *)iVar1);
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = param_3 + 8;
    iVar4 = param_1 + 8;
  }
  uVar2 = dispatch_virtual_by_type(param_1,param_2,iVar1,iVar4);
  return uVar2;
}
