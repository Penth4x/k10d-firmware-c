/* @k10d initialize_subobject_with_params_1049b06c @ 0x1049b06c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates two new objects, links them into the parent structure, and copies four
 *   parameters.
 * summary:
 *   Creates an instance of cls_105b5694 and cls_105b5668. Stores the second object at
 *   offset 0x18 of the parent and the first at offset 0xc. Copies four 32-bit values from
 *   offsets 0x20-0x2c of the parent into the first new object at offsets 0x44-0x50.
 *   Finally, invokes virtual slot 2 of the object at offset 0x10 of the first new object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subobject_with_params_1049b06c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (uintptr_t)(cls_105b5694_new((cls_105b5694 *)0x0));
  iVar2 = cls_105b5668_new((cls_105b5668 *)0x0);
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(iVar1 + 0x40) = iVar2;
  *(uint32_t *)(iVar1 + 0x44) = *(uint32_t *)(param_1 + 0x20);
  *(uint32_t *)(iVar1 + 0x48) = *(uint32_t *)(param_1 + 0x24);
  *(uint32_t *)(iVar1 + 0x4c) = *(uint32_t *)(param_1 + 0x28);
  *(uint32_t *)(iVar1 + 0x50) = *(uint32_t *)(param_1 + 0x2c);
  (((vtbl_entry*)(*(int *)(iVar1 + 0x10)))[2].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0x10)))[2].adj + iVar1,0);
  *(int *)(param_1 + 0xc) = iVar1;
  return;
}
