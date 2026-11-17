/* @k10d init_two_heap_objects_104ed02e @ 0x104ed02e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_heap_objects_104ed02e(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x3100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2b6c_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x3140);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2de4_new(piVar1);
  }
  *(int **)((int)param_1 + 8) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}
