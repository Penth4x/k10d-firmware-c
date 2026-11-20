/* @k10d initialize_object_subcomponents_104a3522 @ 0x104a3522
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates two sub-objects, stores them in the parent structure, and attempts to link
 *   them via virtual calls.
 * summary:
 *   The function creates instances of cls_105b5d3c and cls_105b5c34, storing their pointers
 *   at offsets 0x10 and 0x28 of the input object. It then invokes virtual method slot 2 on
 *   both sub-objects, passing a stack-allocated structure containing a pointer and the
 *   value 0x30000 to the first, and 0 to the second. If both virtual calls succeed (return
 *   non-zero), it links the second object into the first at offset 0x20 and returns 1,
 *   otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_subcomponents_104a3522(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = (uint32_t)(cls_105b5d3c_new((cls_105b5d3c *)0x0));
  iVar2 = cls_105b5c34_new((cls_105b5c34 *)0x0);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x28) = iVar2;
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
