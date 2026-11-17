/* @k10d cls_1059d9d0_new @ 0x1042298e
 * name: verified (structural evidence: heap_alloc(0xc0) when NULL; stores vtable 0x1059d9d0; returns param_1)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059d9d0 (vtable 0x1059d9d0, 0xc0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc0) when NULL; stores vtable 0x1059d9d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059d9d0_new(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc0), param_1 != (uint32_t *)0x0)) {
    puVar1 = param_1;
    if ((param_1 != (uint32_t *)0x0) ||
       (puVar1 = (uint32_t *)heap_alloc((void *)4), puVar1 != (uint32_t *)0x0)) {
      *puVar1 = 0x1059d740/*ROM*/;
    }
    *param_1 = 0x1059d9d0/*ROM*/;
    *(uint16_t *)(param_1 + 1) = 0xf60;
    *(uint16_t *)((int)param_1 + 6) = 0xa40;
    *(uint16_t *)(param_1 + 2) = 0xf20;
    *(uint16_t *)((int)param_1 + 10) = 0xa20;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 1;
    *(uint8_t *)((int)param_1 + 0x11) = 0;
    *(uint8_t *)((int)param_1 + 0x12) = 1;
    *(uint8_t *)((int)param_1 + 0x13) = 0;
    param_1[5] = 2;
    *(uint16_t *)(param_1 + 6) = 0x160;
    *(uint16_t *)((int)param_1 + 0x1a) = 0xc4;
    *(uint16_t *)(param_1 + 7) = 0xcc;
    *(uint16_t *)((int)param_1 + 0x1e) = 0x6b;
    *(uint16_t *)(param_1 + 8) = 0xa40;
    *(uint16_t *)((int)param_1 + 0x22) = 0x3d0;
    *(uint16_t *)(param_1 + 9) = 0x16e0;
    *(uint16_t *)((int)param_1 + 0x26) = 0x7b0;
    param_1[10] = 0x2b0;
    param_1[0xb] = 0x500;
    *(uint8_t *)(param_1 + 0xc) = 1;
    *(uint16_t *)((int)param_1 + 0x32) = 0;
    *(uint16_t *)(param_1 + 0xd) = 0;
    *(uint16_t *)((int)param_1 + 0x36) = 0xa40;
    *(uint16_t *)(param_1 + 0xe) = 0x3d0;
    *(uint16_t *)((int)param_1 + 0x3a) = 2;
    *(uint16_t *)(param_1 + 0xf) = 1;
    param_1[0x10] = 0x80000000/*SDRAM*/;
    param_1[0x11] = 0;
    param_1[0x12] = 0x80000000/*SDRAM*/;
    param_1[0x13] = 0;
    param_1[0x14] = 0x40000000;
    param_1[0x15] = 0;
    param_1[0x16] = 0x40000000;
    param_1[0x17] = 0;
    param_1[0x18] = 0x80000000/*SDRAM*/;
    param_1[0x19] = 0;
    param_1[0x1a] = 1;
    param_1[0x1b] = 1;
    *(uint8_t *)(param_1 + 0x1c) = 0;
    *(uint8_t *)((int)param_1 + 0x71) = 0;
    *(uint16_t *)((int)param_1 + 0x72) = 0;
    *(uint16_t *)(param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x76) = 1;
    *(uint16_t *)(param_1 + 0x1e) = 0;
    *(uint16_t *)((int)param_1 + 0x7a) = 0;
    *(uint16_t *)(param_1 + 0x1f) = 0;
    *(uint16_t *)((int)param_1 + 0x7e) = 0;
    *(uint16_t *)(param_1 + 0x20) = 0x4a;
    *(uint16_t *)((int)param_1 + 0x82) = 0x28;
    *(uint16_t *)(param_1 + 0x21) = 0x6e;
    *(uint16_t *)((int)param_1 + 0x86) = 0x24;
    *(uint16_t *)(param_1 + 0x22) = 0x20;
    *(uint16_t *)((int)param_1 + 0x8a) = 0x40;
    *(uint16_t *)(param_1 + 0x23) = 0x6e;
    *(uint16_t *)((int)param_1 + 0x8e) = 0x24;
    *(uint16_t *)(param_1 + 0x24) = 0x6e;
    *(uint16_t *)((int)param_1 + 0x92) = 0x24;
    *(uint16_t *)(param_1 + 0x25) = 0xb9a;
    *(uint16_t *)((int)param_1 + 0x96) = 0;
    *(uint16_t *)(param_1 + 0x26) = 0xcc;
    *(uint16_t *)((int)param_1 + 0x9a) = 0x6b;
    *(uint16_t *)(param_1 + 0x27) = 0xe;
    *(uint16_t *)((int)param_1 + 0x9e) = 0x3d0;
    *(uint16_t *)(param_1 + 0x28) = 0x4a;
    *(uint16_t *)((int)param_1 + 0xa2) = 0x3d0;
    *(uint16_t *)(param_1 + 0x29) = 0xc;
    *(uint16_t *)((int)param_1 + 0xa6) = 8;
    *(uint16_t *)(param_1 + 0x2a) = 0xf40;
    *(uint16_t *)((int)param_1 + 0xaa) = 0xa40;
    *(uint8_t *)(param_1 + 0x2b) = 1;
    *(uint16_t *)((int)param_1 + 0xae) = 0x160;
    *(uint16_t *)(param_1 + 0x2c) = 0;
    *(uint16_t *)((int)param_1 + 0xb2) = 0xcc;
    *(uint16_t *)(param_1 + 0x2d) = 0x6b;
    *(uint16_t *)((int)param_1 + 0xb6) = 0xa48;
    *(uint16_t *)(param_1 + 0x2e) = 0x3d0;
    *(uint8_t *)((int)param_1 + 0xba) = 1;
    *(uint16_t *)(param_1 + 0x2f) = 0x3c;
    *(uint16_t *)((int)param_1 + 0xbe) = 0x14;
  }
  return param_1;
}
