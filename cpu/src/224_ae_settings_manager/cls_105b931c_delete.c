/* @k10d cls_105b931c_delete @ 0x104bb3dc
 * name: verified (structural evidence: stores vtable 0x105b931c to *this; heap_free(this) under (param_2 & 1))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b931c (vtable 0x105b931c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b931c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b931c_delete(cls_105b931c *param_1,uint param_2)

{
  if (param_1 != (cls_105b931c *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105b931c/*ROM*/;
    release_two_member_objects_104bb31e(param_1);
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
