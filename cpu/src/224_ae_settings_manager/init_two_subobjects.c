/* @k10d init_two_subobjects @ 0x104bb25c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_subobjects(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x50);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b9274_new(piVar1);
  }
  *(int **)((int)param_1 + 4) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  piVar1 = (int *)heap_alloc((void *)0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_1061e19c_new(piVar1);
  }
  *(int **)((int)param_1 + 8) = piVar1;
  (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0);
  return;
}
