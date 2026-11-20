/* @k10d cls_105b3998_new @ 0x10489cd4
 * name: verified (structural evidence: heap_alloc(0x88) when NULL; stores vtable 0x105b3998; returns param_1)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3998 (vtable 0x105b3998, 0x88 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x88) when NULL; stores vtable 0x105b3998; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3998_new(cls_105b3998 *param_1)

{
  if ((param_1 != (cls_105b3998 *)0x0) ||
     (param_1 = (cls_105b3998 *)heap_alloc((void *)0x88), param_1 != (cls_105b3998 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    param_1->field_0x48 = (uintptr_t)((void *)0x105b3998/*ROM*/);
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x78 = 0;
    param_1->field_0x6c = 0;
    *(uint32_t *)&param_1->field_0x7c = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x80 = 0;
    param_1->field_0x84 = 0;
    param_1->field_0x85 = 0;
  }
  return (int)param_1;
}
