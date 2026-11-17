/* @k10d dispatch_event_to_subscribers @ 0x104a8850
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates a list of subscriber objects and invokes their virtual handlers with a
 *   computed event payload.
 * summary:
 *   The function calculates a size or offset from fields in param_1 and invokes a virtual
 *   method on param_2 (slot at offset 0x1c) to initialize or notify. It then loops through
 *   an array of pointers (from param_1+4 to param_1+8), calling virtual methods on each
 *   element (and optionally on param_3) with an incrementing offset. Finally, it calls
 *   another virtual method on param_2 (slot at 0x24) with a value derived from param_1+0x2c
 *   and checks the result of a virtual call on param_2 (slot at 0x4c) to return a boolean
 *   status. The structure strongly resembles a C++ event dispatch or observer pattern
 *   implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_event_to_subscribers(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t uStack_10;
  uint16_t uStack_a;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  uStack_a = (uint16_t)((int)(((uint)(iVar1 >> 1) >> 0x1e) + iVar1) >> 2);
  (**(code **)(*param_2 + 0x1c))
            ((int)*(short *)(*param_2 + 0x18) + (int)param_2,&uStack_a,1,
             *(uint32_t *)(param_1 + 0x28));
  iVar4 = *(int *)(param_1 + 0x28) + 2;
  iVar1 = compute_scaled_interval(param_1);
  iVar1 = iVar1 + iVar4;
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      iVar2 = *piVar3;
      if (param_3 != 0) {
        (**(code **)(*(int *)(param_3 + 4) + 0x2c))
                  (*(short *)(*(int *)(param_3 + 4) + 0x28) + param_3,iVar2,
                   *(uint32_t *)(param_1 + 0x20),*(uint32_t *)(param_1 + 0x24));
      }
      (**(code **)(*(int *)(iVar2 + 0x10) + 0x1c))
                (*(short *)(*(int *)(iVar2 + 0x10) + 0x18) + iVar2,param_2,iVar4);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (piVar3 != *(int **)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    uStack_10 = 0;
  }
  else {
    uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x2c) + 0x28);
  }
  (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,&uStack_10,1,iVar1)
  ;
  iVar1 = (**(code **)(*param_2 + 0x4c))((int)*(short *)(*param_2 + 0x48) + (int)param_2);
  return iVar1 == 0;
}
