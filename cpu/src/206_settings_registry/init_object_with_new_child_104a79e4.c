/* @k10d init_object_with_new_child_104a79e4 @ 0x104a79e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_new_child_104a79e4(void *param_1)

{
  int *piVar1;
  
  initialize_object_hierarchy();
  piVar1 = (int *)cls_105b6938_new(0);
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),0);
  return;
}
