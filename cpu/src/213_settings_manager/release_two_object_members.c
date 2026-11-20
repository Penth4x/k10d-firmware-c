/* @k10d release_two_object_members @ 0x104afc7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_object_members(cls_105b7994 *param_1)

{
  uint32_t *puVar1;
  
  if (param_1->field_0x40 != 0) {
    heap_free_2(param_1->field_0x40);
  }
  puVar1 = (uint32_t *)(param_1->field_0x34);
  if (puVar1 != (uint32_t *)0x0) {
    (((vtbl_entry*)(puVar1[1]))[1].fn)((int)*(short *)(puVar1[1] + 8) + (int)puVar1,3);
  }
  return;
}
