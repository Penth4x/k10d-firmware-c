/* @k10d initialize_object_subsystem_104a33da @ 0x104a33da
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates and links three C++ objects into a parent structure, returning success if
 *   initialization succeeds.
 * summary:
 *   The function calls three `new` constructors (cls_105b5bd0, cls_105b5b6c, cls_105b609c)
 *   to create objects. It performs virtual calls on the first two objects, likely for
 *   initialization or configuration, passing parameters from `param_1`. On success, it
 *   stores the pointers to these objects in `param_1` at offsets 0x8, 0x1c, and 0x30, and
 *   returns 1. If initialization fails, it returns 0 but still stores the pointers. The
 *   specific subsystem is not identifiable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_subsystem_104a33da(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = (int)cls_105b5bd0_new(0);
  iVar2 = (int)cls_105b5b6c_new((uint32_t *)0x0);
  uVar3 = (uint32_t)cls_105b609c_new(0);
  uStack_10 = *(uint32_t *)(param_1 + 0x38);
  uVar5 = 0;
  uStack_c = 0x30000;
  iVar4 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                    (*(short *)(*(int *)(iVar1 + 0x1c) + 0x10) + iVar1,&uStack_10);
  if (iVar4 != 0) {
    *(uint32_t *)(iVar2 + 0x140) = uVar3;
    iVar4 = (**(code **)(*(int *)(iVar2 + 8) + 0x14))
                      (*(short *)(*(int *)(iVar2 + 8) + 0x10) + iVar2,0);
    if (iVar4 != 0) {
      *(int *)(iVar1 + 0x20) = iVar2;
      uVar5 = 1;
      *(uint32_t *)(iVar1 + 0x24) = *(uint32_t *)(param_1 + 0x24);
    }
  }
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0x1c) = iVar2;
  *(uint32_t *)(param_1 + 0x30) = uVar3;
  return uVar5;
}
