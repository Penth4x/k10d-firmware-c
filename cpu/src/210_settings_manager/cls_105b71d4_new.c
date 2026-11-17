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

int cls_105b71d4_new(uint32_t *param_1,uint8_t param_2,uint8_t param_3)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_105b73a8_new(param_1);
    param_1[1] = 0x105b71d4/*ROM*/;
    param_1[2] = 0x105b7224/*ROM*/;
    *(uint8_t *)(param_1 + 5) = param_2;
    *(uint8_t *)((int)param_1 + 0x15) = param_3;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x17) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = uRam105b8cac;
    param_1[10] = uRam105b8cb0;
    param_1[0xb] = uRam105b8cb4;
    param_1[0xc] = uRam105b8cb8;
    param_1[0xd] = uRam105b8cbc;
    param_1[0xe] = uRam105b8ce4;
    param_1[0xf] = uRam105b8d1c;
    param_1[0x10] = uRam105b8d20;
    param_1[0x11] = uRam105b8d24;
    param_1[0x12] = uRam105b8d28;
    param_1[0x13] = uRam105b8d2c;
    param_1[0x14] = 0;
  }
  return (int)param_1;
}
