/* @k10d cls_105b9458_delete @ 0x104c3daa
 * name: verified (structural evidence: stores vtable 0x105b9458 to *this; heap_free(this) under (param_2 & 1))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9458 (vtable 0x105b9458): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9458 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9458_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(void **)((int)param_1 + 0x14) = &DAT_105b9458/*ROM*/;
    cls_105b9400_delete((void *)((int)param_1 + 0x34),2);
    free_heap_if_flagged_1045c402((void *)((int)param_1 + 0x2c),2);
    cls_105b934c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
