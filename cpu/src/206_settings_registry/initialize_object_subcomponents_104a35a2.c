/* @k10d initialize_object_subcomponents_104a35a2 @ 0x104a35a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates two sub-objects, stores them in the parent, and links them via virtual calls.
 * summary:
 *   Creates instances of cls_105d6574 and cls_105d65d0, storing their pointers at offsets
 *   0x14 and 0x2c of the input object. It then invokes virtual method slot 2 on the first
 *   sub-object's internal pointer (offset 0x1c) and slot 2 on the second sub-object's
 *   internal pointer (offset 8). If both calls succeed, it links the second sub-object into
 *   the first at offset 0x20 and returns 1, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d65d0": ignoring overlapping field "field_0x1e4" */

uint32_t initialize_object_subcomponents_104a35a2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = (uint32_t)(cls_105d6574_new((cls_105d6574 *)0x0));
  iVar2 = cls_105d65d0_new((cls_105d65d0 *)0x0);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar2;
  uStack_10 = *(uint32_t *)(param_1 + 0x38);
  uVar4 = 0;
  uStack_c = 0x30000;
  iVar3 = (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].fn)
                    (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[2].adj + iVar1,&uStack_10);
  if ((iVar3 != 0) &&
     (iVar3 = (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].fn)
                        (((vtbl_entry*)(*(int *)(iVar2 + 8)))[2].adj + iVar2,0), iVar3 != 0)) {
    *(int *)(iVar1 + 0x20) = iVar2;
    uVar4 = 1;
  }
  return uVar4;
}
