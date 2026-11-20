/* @k10d cls_105b5d3c_new @ 0x104a14a0
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105b5d3c; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5d3c (vtable 0x105b5d3c, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105b5d3c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6358 * cls_105b5d3c_new(cls_105b5d3c *param_1)

{
  if ((param_1 != (cls_105b5d3c *)0x0) ||
     (param_1 = (cls_105b5d3c *)heap_alloc((void *)0x5c), param_1 != (cls_105b5d3c *)0x0)) {
    cls_105b6358_new((cls_105b6358 *)param_1);
    ((cls_105b6358 *)param_1)->field_0x1c = 0x105b5d3c/*ROM*/;
    ((cls_105b6358 *)param_1)->field_0x20 = 0;
    cls_105b68e8_new((cls_105b68e8 *)&((cls_105b6358 *)param_1)->field_0x24);
    get_lens_fw_update_status();
  }
  return (cls_105b6358 *)param_1;
}
