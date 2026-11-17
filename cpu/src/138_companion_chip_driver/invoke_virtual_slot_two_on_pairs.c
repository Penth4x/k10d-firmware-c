/* @k10d invoke_virtual_slot_two_on_pairs @ 0x10461ce4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Iterates over up to 9 pairs of object pointers and calls virtual slot 2 on each if
 *   virtual slot 1 returns non-zero.
 * summary:
 *   The function loops through an array of object pointers located at offset 0x54 in the
 *   first parameter. For each pair of pointers, it performs a virtual call to slot 1
 *   (offset 0x14) to check a condition. If the condition is met, it performs a virtual call
 *   to slot 2 (offset 0x1c) passing a value from a global array and the third parameter.
 *   The loop runs up to 9 times based on the second parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_pairs(int param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  
  if (param_2 < 9) {
    iStack_10 = 1;
    iVar3 = param_2 << 4;
    do {
      iVar4 = param_1 + 0x54;
      piVar1 = *(int **)(iVar4 + iVar3);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
         iVar2 != 0)) {
        iVar2 = **(int **)(iVar4 + iVar3);
        (**(code **)(iVar2 + 0x1c))
                  ((int)*(int **)(iVar4 + iVar3) + (int)*(short *)(iVar2 + 0x18),
                   *(uint32_t *)(param_2 * 4 + 0x105a720c/*ROM*/),param_3);
      }
      piVar1 = *(int **)(iVar4 + iVar3 + 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
         iVar2 != 0)) {
        piVar1 = *(int **)(iVar4 + iVar3 + 4);
        iVar4 = *piVar1;
        (**(code **)(iVar4 + 0x1c))
                  ((int)piVar1 + (int)*(short *)(iVar4 + 0x18),
                   *(uint32_t *)(param_2 * 4 + 0x105a720c/*ROM*/),param_3);
      }
      iStack_10 = iStack_10 + -1;
      iVar3 = iVar3 + 8;
    } while (-1 < iStack_10);
  }
  return;
}
