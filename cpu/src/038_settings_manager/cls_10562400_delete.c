/* @k10d cls_10562400_delete @ 0x103911a4
 * name: verified (structural evidence: stores vtable 0x10562400 to *this; heap_free(this) under (param_2 & 1))
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10562400 (vtable 0x10562400): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10562400 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10562400_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x10562400/*ROM*/;
    param_1[1] = 0x10562540/*ROM*/;
    param_1[6] = 0x10562560/*ROM*/;
    param_1[0xb] = 0x10562590/*ROM*/;
    param_1[0xc] = 0x105625a8/*ROM*/;
    param_1[0xd] = 0x105625c8/*ROM*/;
    param_1[0x10] = 0x10562608/*ROM*/;
    param_1[0x26] = 0x10562650/*ROM*/;
    param_1[0xb07] = 0x10562698/*ROM*/;
    param_1[0xb09] = 0x105626b0/*ROM*/;
    cls_105626c8_delete(param_1 + 0xb14,2);
    cls_105a2a8c_delete(param_1 + 0xb08,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 0xb07,0);
    cls_105bb314_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
