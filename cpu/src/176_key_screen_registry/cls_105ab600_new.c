/* @k10d cls_105ab600_new @ 0x1048218e
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105ab600; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab600 (vtable 0x105ab600, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105ab600; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104821aa) overlaps instruction at (ram,0x104821a8)
    */

int cls_105ab600_new(cls_105ab600 *param_1,uint32_t param_2)

{
  if ((param_1 != (cls_105ab600 *)0x0) ||
     (param_1 = (cls_105ab600 *)heap_alloc((void *)0x1c), (cls_105a1798 *)param_1 != (cls_105a1798 *)0x0)) {
    cls_105a1798_new((cls_105a1798 *)param_1,param_2);
    ((cls_105a1798 *)param_1)->field_0x4 = 0x105ab600/*ROM*/;
    ((uint32_t *)&((((cls_105a1798 *)param_1)->field_0x8)))[0] = 0x105ab678/*ROM*/;
  }
  return (int)param_1;
}
