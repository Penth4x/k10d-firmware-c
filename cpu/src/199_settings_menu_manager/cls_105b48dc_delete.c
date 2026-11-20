/* @k10d cls_105b48dc_delete @ 0x10494286
 * name: verified (structural evidence: stores vtable 0x105b48dc to *this; heap_free(this) under (param_2 & 1))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b48dc (vtable 0x105b48dc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b48dc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b48dc_delete(cls_105b48dc *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_105b48dc *)0x0) {
    param_1->field_0xc = (uintptr_t)(&DAT_105b48dc/*ROM*/);
    piVar1 = *(int **)&param_1->field_0x30;
    if (piVar1 != *(int **)&param_1->field_0x34) {
      do {
        *(uint32_t *)*piVar1 = 0;
        heap_free(*piVar1);
        piVar1 = piVar1 + 1;
      } while (piVar1 != *(int **)&param_1->field_0x34);
    }
    piVar1 = (int *)((uintptr_t)(param_1->field11_0x18));
    if ((uint32_t)(piVar1) != param_1->field_0x1c) {
      do {
        heap_free(*piVar1);
        piVar1 = piVar1 + 1;
      } while ((uint32_t)(piVar1) != param_1->field_0x1c);
    }
    cls_105a5c2c_delete((cls_105a5c2c *)&param_1->field_0x30,2);
    cls_105a5c2c_delete((cls_105a5c2c *)&param_1->field11_0x18,2);
    cls_105b45e4_delete((cls_105b45e4 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
