/* @k10d cls_105b2ed8_new @ 0x10486a96
 * name: verified (structural evidence: heap_alloc(0x74) when NULL; stores vtable 0x105b2ed8; returns param_1)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2ed8 (vtable 0x105b2ed8, 0x74 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x74) when NULL; stores vtable 0x105b2ed8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2ed8_new(cls_105b2ed8 *param_1)

{
  if ((param_1 != (cls_105b2ed8 *)0x0) ||
     (param_1 = (cls_105b2ed8 *)heap_alloc((void *)0x74), param_1 != (cls_105b2ed8 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    cls_105a2c1c_new((cls_105a2c1c *)&param_1->field_0x4c);
    param_1->field_0x48 = (uintptr_t)(&DAT_105b2ed8/*ROM*/);
    param_1->field_0x5c = (uintptr_t)(&DAT_105b2f08/*ROM*/);
    cls_105a2af8_new(&param_1->field_0x60);
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    wait_flg_obj(&param_1->field_0x60,0);
    alloc_pool_and_init_task((int *)&param_1->field_0x4c,0x10,0x1000,4);
  }
  return (int)param_1;
}
