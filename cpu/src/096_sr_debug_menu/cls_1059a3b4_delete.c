/* @k10d cls_1059a3b4_delete @ 0x1040c7e4
 * name: verified (structural evidence: stores vtable 0x1059a3b4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059a3b4 (vtable 0x1059a3b4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059a3b4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059a3b4_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059a3b4/*ROM*/;
    param_1[0x11] = 0x1059a454/*ROM*/;
    heap_free_2(param_1[0x5e]);
    param_1[0x5e] = 0;
    heap_free_2(param_1[0x89]);
    param_1[0x89] = 0;
    heap_free_2(param_1[0xb4]);
    param_1[0xb4] = 0;
    heap_free_2(param_1[0xdf]);
    param_1[0xdf] = 0;
    cls_105a2a8c_delete(param_1 + 0x10,0);
    *param_1 = 0x105643d0/*ROM*/;
    cls_105b4254_delete((cls_105b4254 *)(param_1 + 2),2);
    reset_vtable_and_free_if_flagged_104968f2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
