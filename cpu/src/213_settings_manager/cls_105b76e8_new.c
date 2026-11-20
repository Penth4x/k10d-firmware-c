/* @k10d cls_105b76e8_new @ 0x104ae0d2
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b76e8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b76e8 (vtable 0x105b76e8, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b76e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7748 * cls_105b76e8_new(cls_105b76e8 *param_1)

{
  uint32_t *puVar1;
  
  if ((param_1 != (cls_105b76e8 *)0x0) ||
     (param_1 = (cls_105b76e8 *)heap_alloc((void *)0x28), (cls_105b7748 *)param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7748_new((cls_105b7748 *)param_1);
    cls_105b7730_new((cls_105b7730 *)&((cls_105b7748 *)param_1)->field_0x20);
    ((cls_105b7748 *)param_1)->field_0x18 = 0x105b76e8/*ROM*/;
    *(uint32_t *)&((cls_105b7748 *)param_1)->field_0x20 = 0x105b7718/*ROM*/;
    puVar1 = (uint32_t *)heap_alloc_2(0x14);
    ((cls_105b7748 *)param_1)->field_0x24 = (uintptr_t)(puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return (cls_105b7748 *)param_1;
}
