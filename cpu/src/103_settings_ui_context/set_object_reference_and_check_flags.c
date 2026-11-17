/* @k10d set_object_reference_and_check_flags @ 0x1042715e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Stores or clears an object pointer at offset 0x3c and returns a boolean based on
 *   virtual method calls.
 * summary:
 *   The function manages a pointer stored at offset 0x3c of the object in param_1. If
 *   param_2 is NULL, it clears the pointer and calls virtual slots 6 and 4 on the
 *   previously stored object to compute a return value. If param_2 is non-NULL, it stores
 *   param_2 at offset 0x3c and calls virtual slots 4 and 5 on param_2 to compute the return
 *   value. The return value is derived from the bitwise AND of the results of these virtual
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_object_reference_and_check_flags(uint param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  
  if (param_2 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x3c);
    *(uint32_t *)(param_1 + 0x3c) = 0;
    uVar1 = (**(code **)(*piVar3 + 0x34))((int)*(short *)(*piVar3 + 0x30) + (int)piVar3);
    bVar2 = (**(code **)(*piVar3 + 0x24))((int)*(short *)(*piVar3 + 0x20) + (int)piVar3,0);
    bVar4 = true;
    if ((bVar2 & (uVar1 & 1) != 0) == 0) {
      bVar4 = false;
    }
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x24))
                      ((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 0x34);
    bVar2 = (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2);
    bVar4 = (bVar2 & (uVar1 & 1) != 0) != 0;
    *(int **)(param_1 + 0x3c) = param_2;
  }
  return bVar4;
}
