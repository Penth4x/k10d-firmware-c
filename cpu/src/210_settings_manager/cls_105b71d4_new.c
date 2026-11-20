/* @k10d cls_105b71d4_new @ 0x104ab320
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105b71d4; returns param_1)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b71d4 (vtable 0x105b71d4, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105b71d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b71d4_new(cls_105b71d4 *param_1,uint8_t param_2,uint8_t param_3)

{
  if ((param_1 != (cls_105b71d4 *)0x0) || (param_1 = (cls_105b71d4 *)heap_alloc((void *)0x54), (cls_105b73a8 *)param_1 != (cls_105b73a8 *)0x0)) {
    cls_105b73a8_new((cls_105b73a8 *)param_1);
    ((cls_105b73a8 *)param_1)->field_0x4 = 0x105b71d4/*ROM*/;
    ((uint32_t *)&((((cls_105b73a8 *)param_1)->field_0x8)))[0] = 0x105b7224/*ROM*/;
    *(uint8_t *)&((cls_105b73a8 *)param_1)->field_0x14 = param_2;
    *(uint8_t *)((int)&((cls_105b73a8 *)param_1)->field_0x14 + 1) = param_3;
    *(uint8_t *)((int)&((cls_105b73a8 *)param_1)->field_0x14 + 2) = 0;
    *(uint8_t *)((int)&((cls_105b73a8 *)param_1)->field_0x14 + 3) = 0;
    ((cls_105b73a8 *)param_1)->field_0x18 = 0;
    ((cls_105b73a8 *)param_1)->field_0x1a = 0;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x1c = 0;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x20 = 0;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x24 = uRam105b8cac;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x28 = uRam105b8cb0;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x2c = uRam105b8cb4;
    ((cls_105b73a8 *)param_1)->field_0x30 = uRam105b8cb8;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x34 = uRam105b8cbc;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x38 = uRam105b8ce4;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x3c = uRam105b8d1c;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x40 = uRam105b8d20;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x44 = uRam105b8d24;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x48 = uRam105b8d28;
    ((cls_105b73a8 *)param_1)->field_0x4c = uRam105b8d2c;
    *(uint32_t *)&((cls_105b73a8 *)param_1)->field_0x50 = 0;
  }
  return (int)(cls_105b73a8 *)param_1;
}
