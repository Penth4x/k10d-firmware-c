/* @k10d cls_1059d1d8_delete @ 0x1041ba70
 * name: verified (structural evidence: stores vtable 0x1059d1d8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059d1d8 (vtable 0x1059d1d8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059d1d8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059d1d8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059d1d8/*ROM*/;
    param_1[1] = 0x1059d2d0/*ROM*/;
    param_1[2] = 0x1059d2f0/*ROM*/;
    param_1[8] = 0x1059d318/*ROM*/;
    param_1[0x25] = 0x1059d330/*ROM*/;
    cls_105a2af8_delete(param_1 + 0x33,2);
    cls_105a2af8_delete(param_1 + 0x31,2);
    cls_105a2a8c_delete(param_1 + 0x24,0);
    cls_1059cbf0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
