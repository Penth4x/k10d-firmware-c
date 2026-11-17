/* @k10d cls_1055a304_delete @ 0x103904b2
 * name: verified (structural evidence: stores vtable 0x1055a304 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1055a304 (vtable 0x1055a304): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1055a304 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1055a304_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1055a304/*ROM*/;
    param_1[1] = 0x1055a3cc/*ROM*/;
    param_1[6] = 0x1055a3ec/*ROM*/;
    param_1[0xb] = 0x1055a41c/*ROM*/;
    param_1[0xc] = 0x1055a434/*ROM*/;
    param_1[0xd] = 0x1055a454/*ROM*/;
    param_1[0x10] = 0x1055a494/*ROM*/;
    param_1[0x12] = 0x1055a4ac/*ROM*/;
    cls_1055a4c4_delete(param_1 + 0x1a,2);
    cls_105a2af8_delete(param_1 + 0x13,2);
    cls_105a2a8c_delete(param_1 + 0x11,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 0x10,0);
    cls_1059e128_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
