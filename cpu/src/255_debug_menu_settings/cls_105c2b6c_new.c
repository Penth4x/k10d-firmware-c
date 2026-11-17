/* @k10d cls_105c2b6c_new @ 0x104ec5d8
 * name: verified (structural evidence: heap_alloc(0x3100) when NULL; stores vtable 0x105c2b6c; returns param_1)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c2b6c (vtable 0x105c2b6c, 0x3100 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3100) when NULL; stores vtable 0x105c2b6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c2b6c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3100), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105c2b6c/*ROM*/;
    cls_105c2720_new(param_1 + 1);
    cls_105c2968_new(param_1 + 4);
    cls_105c29b0_new(param_1 + 7);
    cls_105c29f8_new(param_1 + 10);
    cls_105c2a58_new(param_1 + 0xd);
    cls_105c2be4_new(param_1 + 0x10);
    cls_105c2c2c_new(param_1 + 0x13);
    cls_105c2c74_new(param_1 + 0x16);
    cls_105c2cdc_new(param_1 + 0x19);
    cls_105d5428_new(param_1 + 0x1c);
    param_1[0x28] = 0x105c2b5c/*ROM*/;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x32] = 0x105c2b5c/*ROM*/;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x3c] = 0x105c2b5c/*ROM*/;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3e] = 0x1000;
    param_1[0x3f] = 8;
    fill_byte_array(param_1 + 0x40,0,0x1000);
    fill_byte_array(param_1 + 0x440,0,0x1000);
    fill_byte_array(param_1 + 0x840,0,0x1000);
  }
  return param_1;
}
