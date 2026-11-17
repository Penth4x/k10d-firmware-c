/* @k10d cls_105577f8_delete @ 0x10366aee
 * name: verified (structural evidence: stores vtable 0x105577f8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105577f8 (vtable 0x105577f8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105577f8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105577f8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105577f8/*ROM*/;
    cls_105b9458_delete(param_1 + 0xa0,2);
    cls_105b9458_delete(param_1 + 0x1b,2);
    cls_10558c04_delete(param_1 + 8,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
