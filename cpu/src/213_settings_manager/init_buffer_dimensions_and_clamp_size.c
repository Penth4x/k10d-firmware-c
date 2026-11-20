/* @k10d init_buffer_dimensions_and_clamp_size @ 0x104aed54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores parameters into a struct, queries two dimension values, computes a clamped size,
 *   and calls an initialization helper.
 * summary:
 *   The function writes param_4 and param_2 into offsets 0x28 and 0x20 of the object. It
 *   reads a value from the pointer at offset 0x28+8 into offset 0x34. It calls
 *   dispatch_virtual_slot_two_104af096 twice with arguments (2,4) and (7,2) to retrieve
 *   values stored at offsets 0x2c and 0x30. It multiplies these two values to compute a
 *   maximum size, clamps param_3 to this maximum if it is smaller, and stores the result at
 *   offset 0x24. Finally, it calls invoke_virtual_slot_1 with the object, the value at
 *   offset 0x20, and the clamped size at offset 0x24.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_buffer_dimensions_and_clamp_size(cls_105b77e8 *param_1,int param_2,uint param_3,int param_4)

{
  uint32_t *puVar1;
  int iVar2;
  
  param_1->field_0x28 = param_4;
  *(int *)&param_1->field_0x20 = param_2;
  param_1->field_0x34 = *(uint32_t *)(param_1->field_0x28 + 8);
  puVar1 = (uint32_t *)dispatch_virtual_slot_two_104af096((int)param_1,2,4);
  param_1->field_0x2c = (uintptr_t)(puVar1);
  iVar2 = dispatch_virtual_slot_two_104af096((int)param_1,7,2);
  param_1->field_0x30 = iVar2;
  puVar1 = (uint32_t *)(iVar2 * param_1->field_0x34);
  param_1->field_0x24 = (uintptr_t)(puVar1);
  if (param_3 <= (uint32_t)(puVar1) && (int)puVar1 - param_3 != 0) {
    param_1->field_0x24 = (uintptr_t)((uint32_t *)param_3);
  }
  invoke_virtual_slot_1((int *)param_1,*(uint32_t *)&param_1->field_0x20,(int)param_1->field_0x24);
  return;
}
