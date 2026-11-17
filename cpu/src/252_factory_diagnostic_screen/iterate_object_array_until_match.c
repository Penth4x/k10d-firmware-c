/* @k10d iterate_object_array_until_match @ 0x104e4bca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e4c24) overlaps instruction at (ram,0x104e4c22)
    */

int iterate_object_array_until_match(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_10;
  
  iStack_10 = 0;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = 0;
    do {
      if ((((*(int *)(*(int *)(param_1 + 0x40) + iVar2) != 0) &&
           (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) &&
          (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + iVar2), iVar5 = *(int *)(iVar1 + 0x18),
          iStack_10 = (**(code **)(iVar5 + 0x1c))(iVar1 + *(short *)(iVar5 + 0x18)), iStack_10 != 0)
          ) && (iVar4 = iVar4 + 1, iVar4 == param_2)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(param_1 + 0x20) = iVar3;
  return iStack_10;
}
