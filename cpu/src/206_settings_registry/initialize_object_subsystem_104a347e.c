/* @k10d initialize_object_subsystem_104a347e @ 0x104a347e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates and links three new objects into a parent structure, returning success if
 *   initialization completes.
 * summary:
 *   The function calls three `cls_*_new` constructors to create objects. It performs
 *   virtual calls on the first two objects, likely for initialization or configuration,
 *   passing parameters from `param_1` and stack variables. On success, it stores the
 *   pointers to these new objects in specific offsets of `param_1` (0xc, 0x20, 0x34) and
 *   returns 1; otherwise, it returns 0. The specific subsystem is not identifiable from the
 *   provided pseudocode and lack of named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_subsystem_104a347e(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = (uint32_t)(cls_105b5bd0_new((cls_105b5bd0 *)0x0));
  iVar2 = cls_105b5b0c_new((cls_105b5b0c *)0x0);
  uVar3 = (uint32_t)(cls_105b5f18_new((cls_105b5f18 *)0x0));
  uStack_10 = *(uint32_t *)(param_1 + 0x38);
  uVar5 = 0;
  uStack_c = 0x30000;
  iVar4 = (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].adj + iVar1,&uStack_10);
  if (iVar4 != 0) {
    *(uint32_t *)(iVar2 + 0x140) = uVar3;
    iVar4 = (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)
                      (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2,0);
    if (iVar4 != 0) {
      *(int *)(iVar1 + 0x20) = iVar2;
      uVar5 = 1;
      *(uint32_t *)(iVar1 + 0x24) = *(uint32_t *)(param_1 + 0x24);
    }
  }
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 0x20) = iVar2;
  *(uint32_t *)(param_1 + 0x34) = uVar3;
  return uVar5;
}
