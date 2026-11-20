/* @k10d cls_105a6abc_delete @ 0x1045f268
 * name: verified (structural evidence: stores vtable 0x105a6abc to *this; heap_free(this) under (param_2 & 1))
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a6abc (vtable 0x105a6abc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a6abc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a6abc_delete(cls_105a6abc *param_1,uint param_2)

{
  if (param_1 != (cls_105a6abc *)0x0) {
    *(uint32_t **)&param_1->field_0x0 = &DAT_105a6abc/*ROM*/;
    reset_vtable_and_free_if_flagged_10496932((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
