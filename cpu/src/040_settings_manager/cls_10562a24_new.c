/* @k10d cls_10562a24_new @ 0x10393a66
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x10562a24; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562a24 (vtable 0x10562a24, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x10562a24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562a24_new(cls_10562a24 *param_1)

{
  if ((param_1 != (cls_10562a24 *)0x0) ||
     (param_1 = (cls_10562a24 *)heap_alloc((void *)0x84), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562a24/*ROM*/);
    ((cls_10562b98 *)param_1)->field_0x4 = 0;
    cls_105635ac_new((cls_105635ac *)&((cls_10562b98 *)param_1)->field_0x8);
    *(uint32_t *)&((cls_10562b98 *)param_1)->field_0x6c = 0;
    ((cls_10562b98 *)param_1)->field_0x70 = 0;
    ((cls_10562b98 *)param_1)->field_0x71 = 0;
    ((cls_10562b98 *)param_1)->field_0x72 = 0;
    ((cls_10562b98 *)param_1)->field_0x74 = (uintptr_t)((void *)0x0);
    ((cls_10562b98 *)param_1)->field90_0x78 = 0;
    *(uint8_t *)&((cls_10562b98 *)param_1)->field_0x7c = 0;
    ((cls_10562b98 *)param_1)->field_0x80 = 0;
    ((cls_10562b98 *)param_1)->field93_0x81 = 0;
    *(uint16_t *)&((cls_10562b98 *)param_1)->field_0x82 = 2000;
  }
  return (cls_10562b98 *)param_1;
}
