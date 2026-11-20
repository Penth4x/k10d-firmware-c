/* @k10d init_object_with_new_child_104a79e4 @ 0x104a79e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_new_child_104a79e4(cls_105b6980 *param_1)

{
  int *piVar1;
  
  initialize_object_hierarchy();
  piVar1 = (int *)cls_105b6938_new(0);
  param_1->field_0x4 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj),0);
  return;
}
