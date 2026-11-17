/* @k10d allocate_and_init_subobject_104ce348 @ 0x104ce348
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_subobject_104ce348(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x21c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b9574_new(piVar1);
  }
  *(int **)(param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}
