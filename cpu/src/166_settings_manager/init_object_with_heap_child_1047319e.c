/* @k10d init_object_with_heap_child_1047319e @ 0x1047319e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 166_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_child_1047319e(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105a9ac8_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}
