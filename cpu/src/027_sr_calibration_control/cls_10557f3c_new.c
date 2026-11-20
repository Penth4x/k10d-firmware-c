/* @k10d cls_10557f3c_new @ 0x1036edfc
 * name: verified (structural evidence: heap_alloc(0xc8) when NULL; stores vtable 0x10557f3c; returns param_1)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557f3c (vtable 0x10557f3c, 0xc8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc8) when NULL; stores vtable 0x10557f3c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557f3c_new(cls_10557f3c *param_1)

{
  if ((param_1 != (cls_10557f3c *)0x0) ||
     (param_1 = (cls_10557f3c *)heap_alloc((void *)200), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0)) {
    cls_10557c88_new((cls_10557c88 *)param_1);
    cls_105a2c1c_new((cls_105a2c1c *)&((cls_10557c88 *)param_1)->field8_0x14);
    ((cls_10557c88 *)param_1)->field_0x0 = (uint32_t)(&DAT_10557f3c/*ROM*/);
    ((cls_10557c88 *)param_1)->field17_0x24 = (uint32_t)(&DAT_10557fb4/*ROM*/);
    ((cls_10557c88 *)param_1)->field18_0x28 = 0;
    ((cls_10557c88 *)param_1)->field19_0x29 = 0;
    ((cls_10557c88 *)param_1)->field20_0x2a = 0;
    ((cls_10557c88 *)param_1)->field_0x2b = 0;
    ((cls_10557c88 *)param_1)->field22_0x2c = 0;
    ((cls_10557c88 *)param_1)->field23_0x2e = 0;
    cls_10559e7c_new((cls_10559e7c *)&((cls_10557c88 *)param_1)->field24_0x30);
    cls_10599780_new((cls_10599780 *)&((cls_10557c88 *)param_1)->field_0x58);
    cls_10559760_new((cls_10559760 *)&((cls_10557c88 *)param_1)->field_0x80);
    alloc_and_zero_two_words_1045c3bc(&((cls_10557c88 *)param_1)->field_0xa8);
    ((cls_10557c88 *)param_1)->field_0xb0 = 0;
    ((cls_10557c88 *)param_1)->field110_0xb4 = 0;
    ((cls_10557c88 *)param_1)->field111_0xb8 = 0;
    ((cls_10557c88 *)param_1)->field112_0xb9 = 0;
    cls_105a2af8_new((cls_105a2af8 *)&((cls_10557c88 *)param_1)->field115_0xbc);
    ((cls_10557c88 *)param_1)->field123_0xc4 = 0;
    ((cls_10557c88 *)param_1)->field124_0xc5 = 0;
    ((cls_10557c88 *)param_1)->field125_0xc6 = 0;
    ((cls_10557c88 *)param_1)->field126_0xc7 = 0;
    wait_flg_obj(&((cls_10557c88 *)param_1)->field115_0xbc,2);
    alloc_pool_and_init_task((int *)&((cls_10557c88 *)param_1)->field8_0x14,0x10,0x1000,4);
  }
  return (cls_10557c88 *)param_1;
}
