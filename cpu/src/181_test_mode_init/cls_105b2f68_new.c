/* @k10d cls_105b2f68_new @ 0x10486f18
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x105b2f68; returns param_1)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2f68 (vtable 0x105b2f68, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x105b2f68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2f68_new(cls_105b2f68 *param_1)

{
  if ((param_1 != (cls_105b2f68 *)0x0) ||
     (param_1 = (cls_105b2f68 *)heap_alloc((void *)0x6c), param_1 != (cls_105b2f68 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    cls_105a2c1c_new((cls_105a2c1c *)&param_1->field_0x4c);
    param_1->field_0x48 = (uintptr_t)(&DAT_105b2f68/*ROM*/);
    param_1->field_0x5c = (uintptr_t)(&DAT_105b2f98/*ROM*/);
    cls_105a2af8_new(&param_1->field_0x60);
    param_1->field_0x68 = 0;
    wait_flg_obj(&param_1->field_0x60,0);
    alloc_pool_and_init_task((int *)&param_1->field_0x4c,0x10,0x1000,4);
  }
  return (int)param_1;
}
