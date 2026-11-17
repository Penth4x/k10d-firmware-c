/* @k10d dispatch_three_virtual_calls_104a8d94 @ 0x104a8d94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes three virtual methods on an object in sequence, passing offset pointers, and
 *   conditionally calls a helper.
 * summary:
 *   The function performs a virtual call to slot 3 (offset 0x1c) of the object in param_2
 *   with arguments param_1, 1, and param_3. If successful, it repeats the call with
 *   arguments offset by 2. It then calls virtual slot 5 (offset 0x24) with arguments offset
 *   by 4. Based on the result and the value at param_1+0xc, it either calls
 *   dispatch_virtual_method_by_type with specific offsets or performs another virtual call
 *   to slot 5 before calling dispatch_virtual_method_by_type. The return value is 0 on
 *   failure or the result of dispatch_virtual_method_by_type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_virtual_calls_104a8d94(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x1c))
                    ((int)*(short *)(*param_2 + 0x18) + (int)param_2,param_1,1,param_3);
  uVar2 = 0;
  if (((iVar1 != 0) &&
      (iVar1 = (**(code **)(*param_2 + 0x1c))
                         ((int)*(short *)(*param_2 + 0x18) + (int)param_2,param_1 + 2,1,param_3 + 2)
      , uVar2 = 0, iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_2 + 0x24))
                        ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 4,1,param_3 + 4),
     uVar2 = 0, iVar1 != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = dispatch_virtual_method_by_type(param_1,param_2,param_3 + 8,param_1 + 8);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x24))
                        ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 8,1,param_3 + 8);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = dispatch_virtual_method_by_type(param_1,param_2,*(uint32_t *)(param_1 + 8),
                             *(uint32_t *)(param_1 + 0xc));
      }
    }
  }
  return uVar2;
}
