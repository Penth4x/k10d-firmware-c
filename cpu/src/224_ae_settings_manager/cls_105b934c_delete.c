/* @k10d cls_105b934c_delete @ 0x104bcc9e
 * name: verified (structural evidence: stores vtable 0x105b934c to *this; heap_free(this) under (param_2 & 1))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b934c (vtable 0x105b934c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b934c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b934c_delete(cls_105b934c *param_1,uint param_2)

{
  if (param_1 != (cls_105b934c *)0x0) {
    param_1->field_0x14 = (uint32_t)&DAT_105b934c/*ROM*/;
    release_heap_block_and_clear_104bcd58(param_1);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
