/* @k10d cls_105b2ed8_delete @ 0x10486b1e
 * name: verified (structural evidence: stores vtable 0x105b2ed8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2ed8 (vtable 0x105b2ed8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2ed8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Classic service menu ctor(obj, gate_flag). Real gate: (param2&1) test at 0x10486b6a (e205 beq ->
   epilogue). f227@0x10486b26 is a NULL-CHECK on obj, NOT the gate */

void cls_105b2ed8_delete(cls_105b2ed8 *param_1,uint param_2)

{
  if (param_1 != (cls_105b2ed8 *)0x0) {
    *(uint32_t *)&param_1->field_0x48 = (uint32_t)&DAT_105b2ed8/*ROM*/;
    *(uint32_t *)&param_1->field_0x5c = (uint32_t)&DAT_105b2f08/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x60,2);
    cls_105a2c1c_delete(&param_1->field_0x4c,0);
    classic_menu_reg((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
