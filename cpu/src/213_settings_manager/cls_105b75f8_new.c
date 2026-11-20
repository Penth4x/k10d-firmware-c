/* @k10d cls_105b75f8_new @ 0x104ada68
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105b75f8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b75f8 (vtable 0x105b75f8, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105b75f8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7748 * cls_105b75f8_new(cls_105b75f8 *param_1,int param_2)

{
  if ((param_1 != (cls_105b75f8 *)0x0) ||
     (param_1 = (cls_105b75f8 *)heap_alloc((void *)0x28), (cls_105b7748 *)param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7748_new((cls_105b7748 *)param_1);
    ((cls_105b7748 *)param_1)->field_0x18 = 0x105b75f8/*ROM*/;
    ((cls_105b7748 *)param_1)->field_0x20 = *(uint8_t *)(param_2 + 0x105b75f0/*ROM*/);
    ((cls_105b7748 *)param_1)->field_0x21 = *(uint8_t *)(param_2 + 0x105b75f3/*ROM*/);
    ((cls_105b7748 *)param_1)->field_0x24 = (uint32_t)0x0;
  }
  return (cls_105b7748 *)param_1;
}
