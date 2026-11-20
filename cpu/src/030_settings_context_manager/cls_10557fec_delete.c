/* @k10d cls_10557fec_delete @ 0x1037079c
 * name: verified (structural evidence: stores vtable 0x10557fec to *this; heap_free(this) under (param_2 & 1))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557fec (vtable 0x10557fec): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557fec to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557fec_delete(cls_10557fec *param_1,uint param_2)

{
  if (param_1 != (cls_10557fec *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10557fec/*ROM*/;
    destroy_five_member_objects(&param_1->field_0x78,2);
    cls_1055a090_delete((cls_1055a090 *)&param_1->field_0x40,2);
    cls_1055a164_delete((cls_1055a164 *)&param_1->field_0x18,2);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
