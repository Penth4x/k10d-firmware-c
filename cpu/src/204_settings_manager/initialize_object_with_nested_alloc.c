/* @k10d initialize_object_with_nested_alloc @ 0x1049b0d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates two new objects, links them into the target structure, and copies four
 *   fields.
 * summary:
 *   The function calls cls_105d6684_new and cls_105d66dc_new to create two objects. It
 *   stores the second object at offset 0x1c of param_1 and the first at offset 0x10. It
 *   copies four 32-bit values from offsets 0x20-0x2c of param_1 into the first new object
 *   at offsets 0x44-0x50. Finally, it invokes a virtual method (slot 2) on the first new
 *   object with an argument of 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_nested_alloc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = cls_105d6684_new(0);
  iVar2 = cls_105d66dc_new((uint32_t *)0x0);
  *(int *)(param_1 + 0x1c) = iVar2;
  *(int *)(iVar1 + 0x40) = iVar2;
  *(uint32_t *)(iVar1 + 0x44) = *(uint32_t *)(param_1 + 0x20);
  *(uint32_t *)(iVar1 + 0x48) = *(uint32_t *)(param_1 + 0x24);
  *(uint32_t *)(iVar1 + 0x4c) = *(uint32_t *)(param_1 + 0x28);
  *(uint32_t *)(iVar1 + 0x50) = *(uint32_t *)(param_1 + 0x2c);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x14))(*(short *)(*(int *)(iVar1 + 0x10) + 0x10) + iVar1,0);
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}
