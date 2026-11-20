/* @k10d allocate_and_init_subobject_104ce348 @ 0x104ce348
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_subobject_104ce348(cls_105b9634 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x21c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105b9574_new(piVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  return;
}
