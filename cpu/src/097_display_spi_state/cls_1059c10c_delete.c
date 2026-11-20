/* @k10d cls_1059c10c_delete @ 0x10412d92
 * name: verified (structural evidence: stores vtable 0x1059c10c to *this; heap_free(this) under (param_2 & 1))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059c10c (vtable 0x1059c10c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059c10c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10412da6) overlaps instruction at (ram,0x10412da4)
    */
/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_1059c10c_delete(cls_1059c10c *param_1,uint param_2)

{
  if (param_1 != (cls_1059c10c *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x1059c10c/*ROM*/);
    param_1->field_0x4 = (uintptr_t)((void *)0x1059c1cc/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x1059c1ec/*ROM*/);
    param_1->field_0x2c = (uintptr_t)((void *)0x1059c21c/*ROM*/);
    param_1->field_0x30 = (uintptr_t)((void *)0x1059c234/*ROM*/);
    param_1->field_0x34 = (uintptr_t)((void *)0x1059c254/*ROM*/);
    param_1->field_0x40 = 0x1059c294/*ROM*/;
    param_1->field_0x44 = 0x1059c2ac/*ROM*/;
    lens_fw_update_teardown();
    cls_105a2be0_delete(&param_1[1].field_0x5a0,2);
    cls_105a2be0_delete(&param_1[1].field_0x598,2);
    cls_105a2af8_delete(&param_1[1].field_0x590,2);
    cls_105a2af8_delete(&param_1[1].field_0x588,2);
    cls_105a2af8_delete(&param_1[1].field_0x580,2);
    cls_105d54e0_delete((cls_105d54e0 *)&param_1[1].field_0x504,2);
    free_heap_if_flag_set_10513bb2(&param_1[1].field_0x3c2,2);
    free_heap_if_flag_set_10513bb2(&param_1[1].field_0x280,2);
    free_heap_if_flag_set_10513bb2(&param_1[1].field_0x13e,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0xfb4,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0xe72,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0xd30,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0xbee,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0xaac,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x96a,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x828,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x6e6,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x5a4,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x462,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x320,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x1de,2);
    free_heap_if_flag_set_10513bb2(&param_1->field_0x9c,2);
    cls_105c2050_delete((cls_105c2050 *)&param_1->field_0x60,2);
    cls_1059e408_delete((cls_1059e408 *)&param_1->field_0x44,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
