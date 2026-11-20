/* @k10d init_two_heap_objects_104ed02e @ 0x104ed02e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_heap_objects_104ed02e(cls_105c2b94 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)heap_alloc((void *)0x3100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2b6c_new(piVar1);
  }
  param_1->field_0x4 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  piVar1 = (int *)heap_alloc((void *)0x3140);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    cls_105c2de4_new(piVar1);
  }
  param_1->field_0x8 = (uintptr_t)((void *)piVar1);
  (((vtbl_entry*)(*piVar1))[2].fn)((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),0);
  return;
}
