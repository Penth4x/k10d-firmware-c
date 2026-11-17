/* @k10d cls_105649cc_new @ 0x103a123e
 * name: verified (structural evidence: heap_alloc(0x11c) when NULL; stores vtable 0x105649cc; returns param_1)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105649cc (vtable 0x105649cc, 0x11c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x11c) when NULL; stores vtable 0x105649cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105649cc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x11c), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x105649cc/*ROM*/;
    *(uint8_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x41) = 0;
    *(uint8_t *)((int)param_1 + 0x42) = 0;
    *(uint8_t *)((int)param_1 + 0x43) = 0;
    *(uint8_t *)(param_1 + 0x11) = 0;
    *(uint8_t *)((int)param_1 + 0x45) = 0;
    *(uint16_t *)((int)param_1 + 0x46) = 0;
    *(uint16_t *)(param_1 + 0x12) = 0;
    *(uint16_t *)((int)param_1 + 0x4a) = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
    *(uint8_t *)((int)param_1 + 0x4e) = 0;
    *(uint8_t *)(param_1 + 0x46) = 0;
    *(uint8_t *)((int)param_1 + 0x119) = 0;
    *(uint16_t *)(param_1 + 0x14) = 0;
    *(uint16_t *)((int)param_1 + 0x52) = 0x18;
    *(uint16_t *)(param_1 + 0x15) = 0x1a;
    *(uint16_t *)((int)param_1 + 0x56) = 0x1b;
    *(uint16_t *)(param_1 + 0x16) = 0x1c;
    *(uint16_t *)((int)param_1 + 0x5a) = 0x1e;
    *(uint16_t *)(param_1 + 0x17) = 0x20;
    *(uint16_t *)((int)param_1 + 0x5e) = 0x21;
    *(uint16_t *)(param_1 + 0x18) = 0x22;
    *(uint16_t *)((int)param_1 + 0x62) = 0x24;
    *(uint16_t *)(param_1 + 0x19) = 0x26;
    *(uint16_t *)((int)param_1 + 0x66) = 0x27;
    *(uint16_t *)(param_1 + 0x1a) = 0x28;
    *(uint16_t *)((int)param_1 + 0x6a) = 0x2a;
    *(uint16_t *)(param_1 + 0x1b) = 0x2c;
    *(uint16_t *)((int)param_1 + 0x6e) = 0x2d;
    *(uint16_t *)(param_1 + 0x1c) = 0x2e;
    *(uint16_t *)((int)param_1 + 0x72) = 0x30;
    *(uint16_t *)(param_1 + 0x1d) = 0x32;
    *(uint16_t *)((int)param_1 + 0x76) = 0x33;
    *(uint16_t *)(param_1 + 0x1e) = 0x34;
    *(uint16_t *)((int)param_1 + 0x7a) = 0x36;
    *(uint16_t *)(param_1 + 0x1f) = 0x38;
    *(uint16_t *)((int)param_1 + 0x7e) = 0x39;
    *(uint16_t *)(param_1 + 0x20) = 0x3a;
    *(uint16_t *)((int)param_1 + 0x82) = 0x3c;
    *(uint8_t *)(param_1 + 0x2d) = 0;
    *(uint8_t *)(param_1 + 0x33) = 1;
    *(uint8_t *)((int)param_1 + 0xce) = 2;
    *(uint8_t *)((int)param_1 + 0xcf) = 3;
    *(uint8_t *)(param_1 + 0x34) = 4;
    *(uint8_t *)((int)param_1 + 0xd2) = 5;
    *(uint8_t *)(param_1 + 0x35) = 6;
    *(uint8_t *)((int)param_1 + 0xd5) = 7;
    *(uint8_t *)((int)param_1 + 0xd6) = 8;
    *(uint8_t *)(param_1 + 0x36) = 9;
    *(uint8_t *)((int)param_1 + 0xda) = 10;
    *(uint8_t *)((int)param_1 + 0xdb) = 0xb;
    *(uint8_t *)(param_1 + 0x37) = 0xc;
    *(uint8_t *)((int)param_1 + 0xde) = 0xd;
    *(uint8_t *)(param_1 + 0x38) = 0xe;
    *(uint8_t *)((int)param_1 + 0xe1) = 0xf;
    *(uint8_t *)((int)param_1 + 0xe2) = 0x10;
    *(uint8_t *)(param_1 + 0x39) = 0x11;
    *(uint8_t *)((int)param_1 + 0xe6) = 0x12;
    *(uint8_t *)((int)param_1 + 0xe7) = 0x13;
    *(uint8_t *)(param_1 + 0x3a) = 0x14;
    *(uint8_t *)((int)param_1 + 0xea) = 0x15;
    *(uint8_t *)(param_1 + 0x3b) = 0x16;
    *(uint8_t *)((int)param_1 + 0xed) = 0x17;
    *(uint8_t *)((int)param_1 + 0xee) = 0x18;
    *(uint8_t *)(param_1 + 0x3c) = 0x19;
  }
  return param_1;
}
