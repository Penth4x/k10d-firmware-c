/* @k10d init_object_with_two_params @ 0x104cffa6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores two parameters and a constant into an object, then calls two helper functions on
 *   related pointers.
 * summary:
 *   The function writes param_2 and param_3 to offsets 4 and 8 of the object pointed to by
 *   param_1, and sets offset 0xc to 8. It dereferences the pointer at offset 8 to get a
 *   second object, sets its offset 0x28 to 8, and calls read_two_fields_and_store_sum with
 *   the first and second objects. If the second object's offset 0x2c is non-zero, it
 *   updates offset 0x28 to the value from the first object's offset 0xc and calls
 *   accumulate_two_buffer_sizes. Returns 1 if both helper calls return non-zero, else 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_params(cls_105b9b2c *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  param_1->field_0x4 = param_2;
  param_1->field_0x8 = param_3;
  param_1->field_0xc = 8;
  iVar4 = 0;
  iVar3 = *(int *)(param_1->field_0x8 + 8);
  *(uint32_t *)(iVar3 + 0x28) = 8;
  iVar1 = read_two_fields_and_store_sum((int)(param_1),(void *)(iVar3));
  iVar3 = *(int *)(iVar3 + 0x2c);
  if (iVar3 != 0) {
    *(uint32_t *)(iVar3 + 0x28) = param_1->field_0xc;
    iVar4 = accumulate_two_buffer_sizes((int)param_1,iVar3);
  }
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar4 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
