/* @k10d invoke_virtual_slot_5_and_2 @ 0x1052cb2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets struct fields and dispatches to virtual slots 5 and 2 of two objects.
 * summary:
 *   Writes 1 to param_1[5] and a stack value to param_1[1]. Calls a non-virtual function at
 *   0x104ad2d4 with parameters from the struct. Then performs a virtual call to slot 5
 *   (offset 0x34) on the object pointed to by param_1[1], passing 1 and param_1[4]. If the
 *   result is 2, it performs a virtual call to slot 2 (offset 0x24) on the object at
 *   param_1[0], passing 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_2(int *param_1)

{
  int iVar1;
  int in_stack_00000000;
  
  param_1[5] = 1;
  param_1[1] = in_stack_00000000;
  (*(code *)0x104ad2d4/*ROM*/)(param_1[4],param_1[3],6,0);
  iVar1 = *(int *)param_1[1];
  iVar1 = (**(code **)(iVar1 + 0x34))(param_1[1] + (int)*(short *)(iVar1 + 0x30),1,param_1[4]);
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x24))((int)*(short *)(*param_1 + 0x20) + (int)param_1,2);
  }
  return;
}
