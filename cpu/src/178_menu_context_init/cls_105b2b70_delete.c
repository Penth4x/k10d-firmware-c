/* @k10d cls_105b2b70_delete @ 0x10485ff0
 * name: verified (structural evidence: stores vtable 0x105b2b70 to *this; heap_free(this) under (param_2 & 1))
 * unit: 178_menu_context_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2b70 (vtable 0x105b2b70): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2b70 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b2b70_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105b2b70/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105b2c30/*ROM*/;
    param_1[6] = (uint32_t)&DAT_105b2c50/*ROM*/;
    param_1[0xb] = (uint32_t)&DAT_105b2c80/*ROM*/;
    param_1[0xc] = (uint32_t)&DAT_105b2c98/*ROM*/;
    param_1[0xd] = (uint32_t)&DAT_105b2cb8/*ROM*/;
    param_1[0x11] = (uint32_t)&DAT_105b2cf8/*ROM*/;
    cls_105a8a1c_delete(param_1 + 0x17,2);
    cls_105a2af8_delete(param_1 + 0x12,2);
    cls_105a2a8c_delete(param_1 + 0x10,0);
    cls_1059e128_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
