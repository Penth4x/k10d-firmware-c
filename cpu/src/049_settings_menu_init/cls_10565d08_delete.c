/* @k10d cls_10565d08_delete @ 0x103adb0e
 * name: verified (structural evidence: stores vtable 0x10565d08 to *this; heap_free(this) under (param_2 & 1))
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10565d08 (vtable 0x10565d08): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10565d08 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10565d08_delete(cls_10565d08 *param_1,uint param_2)

{
  if (param_1 != (cls_10565d08 *)0x0) {
    *(void **)&param_1->field_0x0 = (void *)0x10565d08/*ROM*/;
    *(uint32_t *)&param_1->field_0x44 = 0x10565da8/*ROM*/;
    cls_105a2a8c_delete(&param_1->field_0x40,0);
    *(void **)&param_1->field_0x0 = (void *)0x105643d0/*ROM*/;
    cls_105b4254_delete((cls_105b4254 *)&param_1->field5_0x8,2);
    reset_vtable_and_free_if_flagged_104968f2((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
