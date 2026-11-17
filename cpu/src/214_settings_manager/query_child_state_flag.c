/* @k10d query_child_state_flag @ 0x104b2b4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a field and queries a child object's virtual method to return a boolean status.
 * summary:
 *   The function first calls an external routine at 0x104ad2d4 with the value at offset 0xc
 *   of the object. It then clears the field at offset 0x18. It retrieves a pointer from
 *   offset 8; if null, it returns 1. Otherwise, it invokes virtual slot 3 (offset 0x1c) on
 *   the child object with an argument of 0 and returns 1 if the result's least significant
 *   bit is clear, or 0 if set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_child_state_flag(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint32_t uVar3;
  
  (*(code *)0x104ad2d4/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0,0,0);
  *(uint32_t *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
    uVar3 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
