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

void cls_1059c10c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059c10c/*ROM*/;
    param_1[1] = 0x1059c1cc/*ROM*/;
    param_1[6] = 0x1059c1ec/*ROM*/;
    param_1[0xb] = 0x1059c21c/*ROM*/;
    param_1[0xc] = 0x1059c234/*ROM*/;
    param_1[0xd] = 0x1059c254/*ROM*/;
    param_1[0x10] = 0x1059c294/*ROM*/;
    param_1[0x11] = 0x1059c2ac/*ROM*/;
    lens_fw_update_teardown();
    cls_105a2be0_delete(param_1 + 0x556,2);
    cls_105a2be0_delete(param_1 + 0x554,2);
    cls_105a2af8_delete(param_1 + 0x552,2);
    cls_105a2af8_delete(param_1 + 0x550,2);
    cls_105a2af8_delete(param_1 + 0x54e,2);
    cls_105d54e0_delete(param_1 + 0x52f,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x137a),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x48e,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x10f6),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x3ed,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0xe72),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x34c,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0xbee),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x2ab,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x96a),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x20a,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x6e6),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x169,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x462),2);
    free_heap_if_flag_set_10513bb2(param_1 + 200,2);
    free_heap_if_flag_set_10513bb2((void *)((int)param_1 + 0x1de),2);
    free_heap_if_flag_set_10513bb2(param_1 + 0x27,2);
    cls_105c2050_delete(param_1 + 0x18,2);
    cls_1059e408_delete(param_1 + 0x11,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 0x10,0);
    cls_1059e128_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
