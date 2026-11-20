/* @k10d cls_105992d4_delete @ 0x1040679e
 * name: verified (structural evidence: stores vtable 0x105992d4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105992d4 (vtable 0x105992d4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105992d4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105992d4_delete(cls_105992d4 *param_1,uint param_2)

{
  if (param_1 != (cls_105992d4 *)0x0) {
    *(void **)&param_1->field_0x0 = (void *)0x105992d4/*ROM*/;
    *(uint32_t *)&param_1->field_0x40 = 0x10599374/*ROM*/;
    reset_vtable_and_free_if_flagged_10428182((void *)&param_1->field_0x40,0);
    *(void **)&param_1->field_0x0 = (void *)0x105643d0/*ROM*/;
    cls_105b4254_delete((cls_105b4254 *)&param_1->field_0x8,2);
    reset_vtable_and_free_if_flagged_104968f2((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
