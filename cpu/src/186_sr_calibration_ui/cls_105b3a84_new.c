/* @k10d cls_105b3a84_new @ 0x1048a722
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105b3a84; returns param_1)
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3a84 (vtable 0x105b3a84, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105b3a84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3a84_new(cls_105b3a84 *param_1)

{
  if ((param_1 != (cls_105b3a84 *)0x0) ||
     (param_1 = (cls_105b3a84 *)heap_alloc((void *)0x6c), param_1 != (cls_105b3a84 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    cls_105a2c1c_new((cls_105a2c1c *)&param_1->field_0x4c);
    param_1->field_0x48 = (uintptr_t)(&DAT_105b3a84/*ROM*/);
    param_1->field_0x5c = (uintptr_t)(&DAT_105b3ab4/*ROM*/);
    cls_105a2af8_new(&param_1->field_0x60);
    param_1->field_0x68 = 0;
    wait_flg_obj(&param_1->field_0x60,0);
    alloc_pool_and_init_task((int *)&param_1->field_0x4c,0x10,0x1000,4);
  }
  return (int)param_1;
}
