/* @k10d cls_105b3d34_new @ 0x1048d026
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d34 (vtable 0x105b3d34, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105b3d34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3d34_new(cls_105b3d34 *param_1)

{
  cls_105b3d9c *pcVar1;
  
  if ((param_1 != (cls_105b3d34 *)0x0) ||
     (param_1 = (cls_105b3d34 *)heap_alloc((void *)0x34), param_1 != (cls_105b3d34 *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)param_1);
    param_1->field_0x20 = (uint32_t)&DAT_105b3d34/*ROM*/;
    param_1->field_0x24 = 0;
    param_1->field_0x26 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2a = 0;
    param_1->field_0x2c = 7;
    pcVar1 = (cls_105b3d9c *)heap_alloc((void *)0x2c);
    if (pcVar1 == (cls_105b3d9c *)0x0) {
      pcVar1 = (cls_105b3d9c *)0x0;
    }
    else {
      cls_105b3d9c_new(pcVar1);
    }
    param_1->field_0x30 = (uint32_t)&pcVar1->field_0x0;
  }
  return (int)param_1;
}
