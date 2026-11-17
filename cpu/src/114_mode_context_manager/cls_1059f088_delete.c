/* @k10d cls_1059f088_delete @ 0x1043032e
 * name: verified (structural evidence: stores vtable 0x1059f088 to *this; heap_free(this) under (param_2 & 1))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059f088 (vtable 0x1059f088): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059f088 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10430340) overlaps instruction at (ram,0x1043033e)
    */

void cls_1059f088_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059f088/*ROM*/;
    param_1[1] = 0x1059f0e8/*ROM*/;
    param_1[6] = 0x1059f108/*ROM*/;
    param_1[7] = 0x1059f120/*ROM*/;
    param_1[8] = 0x1059f140/*ROM*/;
    param_1[10] = 0x1059f158/*ROM*/;
    cls_105a2bf8_delete(param_1 + 0x24,2);
    cls_105a2af8_delete(param_1 + 0x21,2);
    cls_105a2af8_delete(param_1 + 0x1f,2);
    cls_105a2bf8_delete(param_1 + 0x1d,2);
    cls_105a2bf8_delete(param_1 + 0x1b,2);
    cls_105a2b30_delete(param_1 + 0x19,2);
    cls_1059e298_delete(param_1 + 0x11,2);
    cls_105a2a8c_delete(param_1 + 9,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 8,0);
    reset_vtable_and_free_if_owned_104281c2(param_1 + 7,0);
    cls_105a2c1c_delete(param_1 + 2,0);
    reset_vtable_and_free_if_owned_10428142(param_1 + 1,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
