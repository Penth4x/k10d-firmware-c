/* @k10d cls_105992d4_new @ 0x104064dc
 * name: verified (structural evidence: heap_alloc(0xc0) when NULL; stores vtable 0x105992d4; returns param_1)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105992d4 (vtable 0x105992d4, 0xc0 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc0) when NULL; stores vtable 0x105992d4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105992d4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc0), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    cls_1059e478_new(param_1 + 0x10);
    *param_1 = 0x105992d4/*ROM*/;
    param_1[0x10] = 0x10599374/*ROM*/;
    initialize_lens_update_object(param_1 + 0x11,0x10);
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x55) = 0;
    *(uint8_t *)((int)param_1 + 0x56) = 0;
    *(uint8_t *)((int)param_1 + 0x57) = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x59) = 0;
    *(uint8_t *)((int)param_1 + 0x5a) = 0;
    *(uint8_t *)((int)param_1 + 0x5b) = 0;
    *(uint8_t *)(param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0xb9) = 0;
    *(uint8_t *)((int)param_1 + 0xba) = 0;
    *(uint8_t *)((int)param_1 + 0xbb) = 0;
    *(uint8_t *)(param_1 + 0x2f) = 0;
    *(uint8_t *)((int)param_1 + 0xbd) = 0;
    *(uint8_t *)((int)param_1 + 0xbe) = 0;
    *(uint8_t *)((int)param_1 + 0x5d) = 0;
    *(uint8_t *)((int)param_1 + 0x5e) = 1;
    *(uint8_t *)((int)param_1 + 0x5f) = 3;
    *(uint8_t *)(param_1 + 0x18) = 5;
    *(uint8_t *)((int)param_1 + 0x61) = 6;
    *(uint8_t *)((int)param_1 + 0x62) = 8;
    *(uint8_t *)((int)param_1 + 99) = 9;
    *(uint8_t *)(param_1 + 0x19) = 0xb;
    *(uint8_t *)((int)param_1 + 0x65) = 0xc;
    *(uint8_t *)((int)param_1 + 0x66) = 0xe;
    *(uint8_t *)((int)param_1 + 0x67) = 0xf;
    *(uint8_t *)(param_1 + 0x1a) = 0x11;
    *(uint8_t *)((int)param_1 + 0x69) = 0x12;
    *(uint8_t *)((int)param_1 + 0x6a) = 0x13;
    *(uint8_t *)((int)param_1 + 0x6b) = 0x15;
    *(uint8_t *)(param_1 + 0x1b) = 0x16;
    *(uint8_t *)((int)param_1 + 0x6d) = 0x17;
    *(uint8_t *)((int)param_1 + 0x6e) = 0x19;
    *(uint8_t *)((int)param_1 + 0x6f) = 0x1a;
    *(uint8_t *)(param_1 + 0x1c) = 0x1b;
    *(uint8_t *)((int)param_1 + 0x71) = 0x1c;
    *(uint8_t *)((int)param_1 + 0x72) = 0x1e;
    *(uint8_t *)((int)param_1 + 0x73) = 0x1f;
    *(uint8_t *)(param_1 + 0x1d) = 0x20;
    *(uint8_t *)((int)param_1 + 0x75) = 0x21;
    *(uint8_t *)((int)param_1 + 0x76) = 0x22;
    *(uint8_t *)((int)param_1 + 0x77) = 0x23;
    *(uint8_t *)(param_1 + 0x1e) = 0x24;
    *(uint8_t *)((int)param_1 + 0x79) = 0x25;
    *(uint8_t *)((int)param_1 + 0x7a) = 0x26;
    *(uint8_t *)((int)param_1 + 0x7b) = 0x27;
    *(uint8_t *)(param_1 + 0x1f) = 0x29;
    *(uint8_t *)((int)param_1 + 0x7d) = 0x2a;
    *(uint8_t *)((int)param_1 + 0x7e) = 0x2b;
    *(uint8_t *)((int)param_1 + 0x7f) = 0x2c;
    *(uint8_t *)(param_1 + 0x20) = 0x2d;
    *(uint8_t *)((int)param_1 + 0x81) = 0x2e;
    *(uint8_t *)((int)param_1 + 0x82) = 0x2f;
    *(uint8_t *)((int)param_1 + 0x83) = 0x31;
    *(uint8_t *)(param_1 + 0x21) = 0x32;
    *(uint8_t *)((int)param_1 + 0x85) = 0x33;
    *(uint8_t *)((int)param_1 + 0x86) = 0x34;
    *(uint8_t *)((int)param_1 + 0x87) = 0x35;
    *(uint8_t *)(param_1 + 0x22) = 0x36;
    *(uint8_t *)((int)param_1 + 0x89) = 0x37;
    *(uint8_t *)((int)param_1 + 0x8a) = 0x38;
    *(uint8_t *)((int)param_1 + 0x8b) = 0x39;
    *(uint8_t *)(param_1 + 0x23) = 0x3b;
    *(uint8_t *)((int)param_1 + 0x8d) = 0x3c;
    *(uint8_t *)((int)param_1 + 0x8e) = 0x3d;
    *(uint8_t *)((int)param_1 + 0x8f) = 0x3e;
    *(uint8_t *)(param_1 + 0x24) = 0x3f;
    *(uint8_t *)((int)param_1 + 0x91) = 0x40;
    *(uint8_t *)((int)param_1 + 0x92) = 0x41;
    *(uint8_t *)((int)param_1 + 0x93) = 0x42;
    *(uint8_t *)(param_1 + 0x25) = 0x43;
    *(uint8_t *)((int)param_1 + 0x95) = 0x44;
    *(uint8_t *)((int)param_1 + 0x96) = 0x45;
    *(uint8_t *)((int)param_1 + 0x97) = 0x46;
    *(uint8_t *)(param_1 + 0x26) = 0x48;
    *(uint8_t *)((int)param_1 + 0x99) = 0x49;
    *(uint8_t *)((int)param_1 + 0x9a) = 0x4a;
    *(uint8_t *)((int)param_1 + 0x9b) = 0x4b;
    *(uint8_t *)(param_1 + 0x27) = 0x4c;
    *(uint8_t *)((int)param_1 + 0x9d) = 0x4d;
    *(uint8_t *)((int)param_1 + 0x9e) = 0x4e;
    *(uint8_t *)((int)param_1 + 0x9f) = 0x4f;
    *(uint8_t *)(param_1 + 0x28) = 0x50;
    *(uint8_t *)((int)param_1 + 0xa1) = 0x51;
    *(uint8_t *)((int)param_1 + 0xa2) = 0x52;
    *(uint8_t *)((int)param_1 + 0xa3) = 0x53;
    *(uint8_t *)(param_1 + 0x29) = 0x54;
    *(uint8_t *)((int)param_1 + 0xa5) = 0x55;
    *(uint8_t *)((int)param_1 + 0xa6) = 0x56;
    *(uint8_t *)((int)param_1 + 0xa7) = 0x57;
    *(uint8_t *)(param_1 + 0x2a) = 0x58;
    *(uint8_t *)((int)param_1 + 0xa9) = 0;
    *(uint8_t *)((int)param_1 + 0xaa) = 2;
    *(uint8_t *)((int)param_1 + 0xab) = 4;
    *(uint8_t *)(param_1 + 0x2b) = 7;
    *(uint8_t *)((int)param_1 + 0xad) = 10;
    *(uint8_t *)((int)param_1 + 0xae) = 0xd;
    *(uint8_t *)((int)param_1 + 0xaf) = 0x10;
    *(uint8_t *)(param_1 + 0x2c) = 0x14;
    *(uint8_t *)((int)param_1 + 0xb1) = 0x18;
    *(uint8_t *)((int)param_1 + 0xb2) = 0x1d;
    *(uint8_t *)((int)param_1 + 0xb3) = 0x22;
    *(uint8_t *)(param_1 + 0x2d) = 0x28;
    *(uint8_t *)((int)param_1 + 0xb5) = 0x30;
    *(uint8_t *)((int)param_1 + 0xb6) = 0x3a;
    *(uint8_t *)((int)param_1 + 0xb7) = 0x47;
    *(uint8_t *)(param_1 + 0x2e) = 0x58;
  }
  return param_1;
}
