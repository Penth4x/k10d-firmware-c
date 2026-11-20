/* @k10d init_two_subobjects @ 0x104bb25c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_subobjects(cls_105b931c *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x50);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b9274_new(piVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  piVar1 = (int *)heap_alloc((void *)0x14);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_1061e19c_new(piVar1);
  }
  param_1->field_0x8 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  return;
}
