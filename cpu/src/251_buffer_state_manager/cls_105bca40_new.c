/* @k10d cls_105bca40_new @ 0x104e051e
 * name: verified (structural evidence: heap_alloc(0x102c) when NULL; stores vtable 0x105bca40; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bca40 (vtable 0x105bca40, 0x102c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x102c) when NULL; stores vtable 0x105bca40; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7d6c * cls_105bca40_new(cls_105bca40 *param_1)

{
  if ((param_1 != (cls_105bca40 *)0x0) ||
     (param_1 = (cls_105bca40 *)heap_alloc((void *)0x102c), (cls_105b7d6c *)param_1 != (cls_105b7d6c *)0x0))
  {
    cls_105b7d6c_new((cls_105b7d6c *)param_1);
    ((cls_105b7d6c *)param_1)->field1_0x4 = 0x105bca40/*ROM*/;
    ((cls_105b7d6c *)param_1)->field2_0x8 = 0x105bca58/*ROM*/;
    ((cls_105b7d6c *)param_1)->field_0x0 = 0x105bca70/*ROM*/;
    ((cls_105b7d6c *)param_1)->field1_0x4 = 0x105bcab8/*ROM*/;
    ((cls_105b7d6c *)param_1)->field2_0x8 = 0x105bcad0/*ROM*/;
    ((cls_105b7d6c *)param_1)->field3_0xc = 0;
    ((cls_105b7d6c *)(param_1 + 0x101))->field_0x0 = 0;
    ((cls_105b7d6c *)(param_1 + 0x101))->field1_0x4 = 0;
    ((cls_105b7d6c *)(param_1 + 0x101))->field2_0x8 = 0;
    ((cls_105b7d6c *)(param_1 + 0x101))->field3_0xc = 0;
    ((cls_105b7d6c *)(param_1 + 0x102))->field_0x0 = 0;
    ((cls_105b7d6c *)(param_1 + 0x102))->field1_0x4 = 0;
    ((cls_105b7d6c *)(param_1 + 0x102))->field2_0x8 = 0;
    fill_byte_array((cls_105b7d6c *)(param_1 + 1),0,0x1000);
  }
  return (cls_105b7d6c *)param_1;
}
