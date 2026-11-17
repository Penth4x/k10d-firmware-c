/* @k10d cls_1059e4d0_new @ 0x1050d3f0
 * name: verified (structural evidence: heap_alloc(0x8d8) when NULL; stores vtable 0x1059e4d0; returns param_1)
 * unit: 270_test_mode_screen (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e4d0 (vtable 0x1059e4d0, 0x8d8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8d8) when NULL; stores vtable 0x1059e4d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059e4d0_new(uint32_t *param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int iVar4;
  uint16_t *puVar5;
  uint16_t *puVar6;
  uint32_t *puStack_4c;
  uint32_t *puStack_48;
  uint16_t *puStack_34;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x8d8), param_1 != (uint32_t *)0x0)) {
    param_1[0x235] = &test_mode_screen_vtable;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = &DAT_1059e4d0/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(uint8_t *)(param_1 + 10) = 0;
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0x2a) = 1;
    *(uint8_t *)((int)param_1 + 0x2b) = 0;
    *(uint8_t *)(param_1 + 0xb) = 0;
    *(uint8_t *)((int)param_1 + 0x2d) = 0;
    *(uint8_t *)((int)param_1 + 0x2e) = 0;
    *(uint8_t *)((int)param_1 + 0x2f) = 0;
    *(uint8_t *)(param_1 + 0xc) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0x180;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 4;
    *(uint16_t *)(param_1 + 0x3f) = 0;
    *(uint16_t *)((int)param_1 + 0xfe) = 0;
    *(uint16_t *)(param_1 + 0x40) = 0;
    param_1[0x41] = 0;
    *(uint16_t *)(param_1 + 0x42) = 0;
    *(uint16_t *)((int)param_1 + 0x10a) = 0;
    *(uint16_t *)(param_1 + 0x43) = 0;
    *(uint16_t *)((int)param_1 + 0x10e) = 0;
    param_1[0x44] = 0;
    *(uint16_t *)(param_1 + 0x45) = 0x100;
    *(uint16_t *)((int)param_1 + 0x116) = 0x100;
    *(uint16_t *)(param_1 + 0x46) = 0x100;
    *(uint16_t *)((int)param_1 + 0x11a) = 0x100;
    *(uint16_t *)(param_1 + 0x47) = 0;
    *(uint16_t *)((int)param_1 + 0x11e) = 0;
    *(uint16_t *)(param_1 + 0x48) = 0;
    *(uint16_t *)((int)param_1 + 0x122) = 0;
    *(uint16_t *)(param_1 + 0x49) = 0;
    *(uint16_t *)((int)param_1 + 0x126) = 0;
    *(uint16_t *)(param_1 + 0x4a) = 0;
    *(uint16_t *)((int)param_1 + 0x12a) = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    construct_large_camera_object(param_1 + 0x52);
    *(uint16_t *)(param_1 + 0x19e) = 0;
    *(uint16_t *)((int)param_1 + 0x67a) = 0;
    *(uint16_t *)(param_1 + 0x1a4) = 0;
    *(uint16_t *)((int)param_1 + 0x692) = 3;
    *(uint8_t *)(param_1 + 0x1a5) = 0;
    *(uint8_t *)((int)param_1 + 0x695) = 1;
    param_1[0x1a6] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a8] = 0;
    *(uint8_t *)(param_1 + 0x1a9) = 0;
    *(uint8_t *)((int)param_1 + 0x6a5) = 0;
    *(uint16_t *)((int)param_1 + 0x6a6) = 0;
    *(uint16_t *)(param_1 + 0x1aa) = 0;
    *(uint16_t *)((int)param_1 + 0x6aa) = 0;
    *(uint16_t *)(param_1 + 0x1ab) = 0;
    param_1[0x1ac] = 0;
    param_1[0x1ad] = 0;
    *(uint8_t *)(param_1 + 0x1ae) = 0;
    *(uint8_t *)((int)param_1 + 0x6b9) = 0;
    param_1[0x1af] = 0;
    param_1[0x1b0] = 0;
    param_1[0x1b1] = 0;
    param_1[0x1b2] = 0;
    param_1[0x1b3] = 1;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1b6] = 0;
    *(uint16_t *)(param_1 + 0x1b7) = 0;
    *(uint16_t *)((int)param_1 + 0x6de) = 0;
    *(uint16_t *)(param_1 + 0x1b8) = 0;
    *(uint16_t *)((int)param_1 + 0x6e2) = 0;
    *(uint16_t *)(param_1 + 0x1b9) = 0;
    param_1[0x1ba] = 1;
    param_1[0x1bb] = 0;
    param_1[0x1bc] = 0;
    param_1[0x1bd] = 0;
    *(uint16_t *)(param_1 + 0x1be) = 0;
    *(uint16_t *)((int)param_1 + 0x6fa) = 0;
    *(uint16_t *)(param_1 + 0x1bf) = 0;
    *(uint16_t *)((int)param_1 + 0x6fe) = 0;
    *(uint16_t *)(param_1 + 0x1c0) = 0;
    param_1[0x1c1] = 1;
    param_1[0x1c2] = 0;
    param_1[0x1c3] = 0;
    param_1[0x1c4] = 0;
    *(uint16_t *)(param_1 + 0x1c5) = 0;
    *(uint16_t *)((int)param_1 + 0x716) = 0;
    *(uint16_t *)(param_1 + 0x1c6) = 0;
    *(uint16_t *)((int)param_1 + 0x71a) = 0;
    *(uint16_t *)(param_1 + 0x1c7) = 0;
    param_1[0x1c8] = 1;
    param_1[0x1c9] = 0;
    param_1[0x1ca] = 0;
    param_1[0x1cb] = 0;
    *(uint16_t *)(param_1 + 0x1cc) = 0;
    *(uint16_t *)((int)param_1 + 0x732) = 0;
    *(uint16_t *)(param_1 + 0x1cd) = 0;
    *(uint16_t *)((int)param_1 + 0x736) = 0;
    *(uint16_t *)(param_1 + 0x1ce) = 0;
    param_1[0x1cf] = 1;
    param_1[0x1d0] = 0;
    param_1[0x1d1] = 0;
    param_1[0x1d2] = 0;
    *(uint16_t *)(param_1 + 0x1d3) = 0;
    *(uint16_t *)((int)param_1 + 0x74e) = 0;
    *(uint16_t *)(param_1 + 0x1d4) = 0;
    *(uint16_t *)((int)param_1 + 0x752) = 0;
    *(uint16_t *)(param_1 + 0x1d5) = 0;
    param_1[0x1d6] = 1;
    param_1[0x1d7] = 0;
    param_1[0x1d8] = 0;
    param_1[0x1d9] = 0;
    *(uint16_t *)(param_1 + 0x1da) = 0;
    *(uint16_t *)((int)param_1 + 0x76a) = 0;
    *(uint16_t *)(param_1 + 0x1db) = 0;
    *(uint16_t *)((int)param_1 + 0x76e) = 0;
    *(uint16_t *)(param_1 + 0x1dc) = 0;
    param_1[0x1dd] = 0;
    param_1[0x1de] = 0;
    param_1[0x1df] = 0;
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 1;
    *(uint16_t *)(param_1 + 0x1e2) = 0;
    param_1[0x1e3] = 0;
    param_1[0x1e4] = 0;
    param_1[0x1e5] = 0;
    param_1[0x1e6] = 0;
    param_1[0x1e7] = 0;
    param_1[0x1e8] = 1;
    *(uint16_t *)(param_1 + 0x1e9) = 0;
    param_1[0x1ea] = 0;
    param_1[0x1eb] = 0;
    param_1[0x1ec] = 0;
    param_1[0x1ed] = 0;
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 1;
    *(uint16_t *)(param_1 + 0x1f0) = 0;
    param_1[0x1f1] = 0;
    param_1[0x1f2] = 0;
    param_1[499] = 0;
    param_1[500] = 0;
    param_1[0x1f5] = 0;
    param_1[0x1f6] = 1;
    *(uint16_t *)(param_1 + 0x1f7) = 0;
    param_1[0x1f8] = 0;
    param_1[0x1f9] = 0;
    param_1[0x1fa] = 0;
    param_1[0x1fb] = 0;
    param_1[0x1fc] = 0;
    param_1[0x1fd] = 0;
    param_1[0x1fe] = 0;
    param_1[0x1ff] = 0;
    param_1[0x200] = 0;
    param_1[0x201] = 0;
    param_1[0x202] = 0;
    param_1[0x203] = 0;
    param_1[0x204] = 0;
    param_1[0x205] = 0;
    param_1[0x206] = 0;
    param_1[0x207] = 0;
    param_1[0x208] = 0;
    param_1[0x209] = 0;
    param_1[0x20a] = 0;
    param_1[0x20b] = 0;
    param_1[0x20c] = 0;
    param_1[0x20d] = 0;
    param_1[0x20e] = 0;
    param_1[0x20f] = 0;
    *(uint16_t *)(param_1 + 0x210) = 0;
    *(uint16_t *)((int)param_1 + 0x842) = 0;
    *(uint16_t *)(param_1 + 0x211) = 0;
    *(uint16_t *)((int)param_1 + 0x846) = 0;
    *(uint16_t *)(param_1 + 0x212) = 0x280;
    *(uint16_t *)((int)param_1 + 0x84a) = 0x1e0;
    *(uint16_t *)(param_1 + 0x213) = 0xa0;
    *(uint16_t *)((int)param_1 + 0x84e) = 0x78;
    *(uint16_t *)(param_1 + 0x214) = 0x280;
    *(uint16_t *)((int)param_1 + 0x852) = 0x1e0;
    param_1[0x215] = 0x8000;
    param_1[0x216] = 0xa000;
    param_1[0x217] = 0x1800;
    param_1[0x218] = 0x2000;
    param_1[0x219] = 0x150000;
    param_1[0x21a] = 0x170000;
    param_1[0x21b] = 0xe100;
    param_1[0x21c] = 0;
    param_1[0x21d] = 0;
    param_1[0x21e] = 0;
    param_1[0x21f] = 0;
    init_timing_parameter_block(param_1 + 0x220);
    *(uint8_t *)(param_1 + 0x231) = 0;
    *(uint8_t *)((int)param_1 + 0x8c5) = 0;
    param_1[0x232] = 0;
    *(uint16_t *)(param_1 + 0x233) = 0x100;
    *(uint16_t *)((int)param_1 + 0x8ce) = 0x100;
    *(uint16_t *)(param_1 + 0x234) = 0x100;
    *(uint16_t *)((int)param_1 + 0x8d2) = 0x100;
    puVar2 = (uint32_t *)heap_alloc((void *)0xf8);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xf8), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(uint16_t *)(puVar3 + 4) = 0;
        *(uint16_t *)((int)puVar3 + 0x12) = 0;
        *(uint16_t *)(puVar3 + 5) = 0;
        *(uint16_t *)((int)puVar3 + 0x16) = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(uint16_t *)(puVar3 + 0xe) = 0;
        *(uint16_t *)((int)puVar3 + 0x3a) = 0;
        *(uint16_t *)(puVar3 + 0xf) = 0;
        *(uint16_t *)((int)puVar3 + 0x3e) = 0;
        *(uint16_t *)(puVar3 + 0x10) = 0;
        *(uint16_t *)((int)puVar3 + 0x42) = 0;
        *(uint16_t *)(puVar3 + 0x11) = 0;
        *(uint16_t *)((int)puVar3 + 0x46) = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(uint8_t *)(puVar3 + 0x17) = 0;
        *(uint8_t *)((int)puVar3 + 0x5d) = 0;
        *(uint8_t *)((int)puVar3 + 0x5e) = 0;
        zero_init_0x94_byte_struct(puVar3 + 0x18);
        puVar3[0x3d] = 0;
      }
    }
    param_1[0x1f9] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0xc);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xc), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(uint8_t *)(puVar3 + 2) = 0;
        *(uint8_t *)((int)puVar3 + 9) = 0;
      }
    }
    param_1[0x1fa] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x40);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x40), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 1;
        *(uint16_t *)(puVar3 + 1) = 0;
        *(uint16_t *)((int)puVar3 + 6) = 0;
        *(uint16_t *)(puVar3 + 2) = 0;
        *(uint16_t *)((int)puVar3 + 10) = 0;
        *(uint16_t *)(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(uint16_t *)(puVar3 + 8) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x22) = 0x80;
        *(uint16_t *)(puVar3 + 9) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x26) = 0x80;
        *(uint16_t *)(puVar3 + 10) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2a) = 0x80;
        *(uint16_t *)(puVar3 + 0xb) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2e) = 0x80;
        *(uint16_t *)(puVar3 + 0xc) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x32) = 0x80;
        *(uint16_t *)(puVar3 + 0xd) = 0;
        *(uint16_t *)((int)puVar3 + 0x36) = 0;
        *(uint8_t *)(puVar3 + 0xe) = 0;
        *(uint8_t *)((int)puVar3 + 0x39) = 1;
        puVar3[0xf] = 0;
      }
    }
    param_1[0x1fb] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x40);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x40), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 1;
        *(uint16_t *)(puVar3 + 1) = 0;
        *(uint16_t *)((int)puVar3 + 6) = 0;
        *(uint16_t *)(puVar3 + 2) = 0;
        *(uint16_t *)((int)puVar3 + 10) = 0;
        *(uint16_t *)(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(uint16_t *)(puVar3 + 8) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x22) = 0x80;
        *(uint16_t *)(puVar3 + 9) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x26) = 0x80;
        *(uint16_t *)(puVar3 + 10) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2a) = 0x80;
        *(uint16_t *)(puVar3 + 0xb) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2e) = 0x80;
        *(uint16_t *)(puVar3 + 0xc) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x32) = 0x80;
        *(uint16_t *)(puVar3 + 0xd) = 0;
        *(uint16_t *)((int)puVar3 + 0x36) = 0;
        *(uint8_t *)(puVar3 + 0xe) = 0;
        *(uint8_t *)((int)puVar3 + 0x39) = 1;
        puVar3[0xf] = 0;
      }
    }
    param_1[0x1fc] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x40);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x40), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 1;
        *(uint16_t *)(puVar3 + 1) = 0;
        *(uint16_t *)((int)puVar3 + 6) = 0;
        *(uint16_t *)(puVar3 + 2) = 0;
        *(uint16_t *)((int)puVar3 + 10) = 0;
        *(uint16_t *)(puVar3 + 3) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(uint16_t *)(puVar3 + 8) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x22) = 0x80;
        *(uint16_t *)(puVar3 + 9) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x26) = 0x80;
        *(uint16_t *)(puVar3 + 10) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2a) = 0x80;
        *(uint16_t *)(puVar3 + 0xb) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x2e) = 0x80;
        *(uint16_t *)(puVar3 + 0xc) = 0x80;
        *(uint16_t *)((int)puVar3 + 0x32) = 0x80;
        *(uint16_t *)(puVar3 + 0xd) = 0;
        *(uint16_t *)((int)puVar3 + 0x36) = 0;
        *(uint8_t *)(puVar3 + 0xe) = 0;
        *(uint8_t *)((int)puVar3 + 0x39) = 1;
        puVar3[0xf] = 0;
      }
    }
    param_1[0x1fd] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x2188);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puStack_4c = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puStack_4c = (uint32_t *)heap_alloc((void *)0x2188), puStack_4c != (uint32_t *)0x0)) {
        *puStack_4c = 0;
        puStack_4c[1] = 4;
        puStack_4c[2] = 1;
        puStack_4c[3] = 0;
        *(uint16_t *)(puStack_4c + 4) = 7;
        *(uint16_t *)((int)puStack_4c + 0x12) = 0;
        puStack_4c[5] = 0;
        puStack_4c[6] = 0;
        puStack_4c[7] = 0;
        *(uint16_t *)(puStack_4c + 8) = 0;
        *(uint16_t *)((int)puStack_4c + 0x22) = 0;
        *(uint16_t *)(puStack_4c + 9) = 0;
        *(uint8_t *)((int)puStack_4c + 0x26) = 0;
        *(uint16_t *)(puStack_4c + 10) = 1;
        *(uint16_t *)((int)puStack_4c + 0x2a) = 1;
        puStack_4c[0xb] = 0;
        puStack_4c[0xc] = 0;
        *(uint16_t *)(puStack_4c + 0xd) = 0;
        *(uint16_t *)((int)puStack_4c + 0x36) = 0;
        *(uint8_t *)(puStack_4c + 0xe) = 1;
        *(uint8_t *)((int)puStack_4c + 0x39) = 1;
        *(uint8_t *)((int)puStack_4c + 0x3a) = 0;
        *(uint8_t *)((int)puStack_4c + 0x3b) = 0;
        zero_init_36_byte_struct(puStack_4c + 0xf);
        init_0x20_byte_object(puStack_4c + 0x18);
        init_100_byte_struct(puStack_4c + 0x20);
        zero_initialize_60_byte_object(puStack_4c + 0x39);
        alloc_and_init_0x2050_buffer(puStack_4c + 0x48);
        init_16_byte_struct(puStack_4c + 0x85c);
        *(uint8_t *)(puStack_4c + 0x860) = 0;
        puStack_4c[0x861] = 0;
      }
    }
    param_1[0x1fe] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x24);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x24), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(uint8_t *)(puVar3 + 4) = 0;
        *(uint8_t *)((int)puVar3 + 0x11) = 1;
        *(uint8_t *)((int)puVar3 + 0x12) = 1;
        puVar3[5] = 0;
        *(uint8_t *)(puVar3 + 6) = 0;
        puVar3[7] = 0;
        *(uint8_t *)(puVar3 + 8) = 0;
      }
    }
    param_1[0x1ff] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x24);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x24), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(uint8_t *)(puVar3 + 8) = 1;
        *(uint8_t *)((int)puVar3 + 0x21) = 0;
        *(uint8_t *)((int)puVar3 + 0x22) = 0;
        *(uint8_t *)((int)puVar3 + 0x23) = 0;
      }
    }
    param_1[0x200] = puVar2;
    iVar4 = heap_alloc((void *)0x30);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      zero_initialize_0x30_struct(iVar4);
    }
    param_1[0x201] = iVar4;
    puVar2 = (uint32_t *)heap_alloc((void *)0xe8);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xe8), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        init_0x38_byte_struct(puVar3 + 1);
        init_0x38_byte_struct(puVar3 + 0xf);
        init_0x38_byte_struct(puVar3 + 0x1d);
        init_0x38_byte_struct(puVar3 + 0x2b);
        puVar3[0x39] = 0;
      }
    }
    param_1[0x202] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0xe8);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xe8), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        init_0x38_byte_struct(puVar3 + 1);
        init_0x38_byte_struct(puVar3 + 0xf);
        init_0x38_byte_struct(puVar3 + 0x1d);
        init_0x38_byte_struct(puVar3 + 0x2b);
        puVar3[0x39] = 0;
      }
    }
    param_1[0x203] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0xe8);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xe8), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        init_0x38_byte_struct(puVar3 + 1);
        init_0x38_byte_struct(puVar3 + 0xf);
        init_0x38_byte_struct(puVar3 + 0x1d);
        init_0x38_byte_struct(puVar3 + 0x2b);
        puVar3[0x39] = 0;
      }
    }
    param_1[0x204] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0xe8);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xe8), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        init_0x38_byte_struct(puVar3 + 1);
        init_0x38_byte_struct(puVar3 + 0xf);
        init_0x38_byte_struct(puVar3 + 0x1d);
        init_0x38_byte_struct(puVar3 + 0x2b);
        puVar3[0x39] = 0;
      }
    }
    param_1[0x205] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x60);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puStack_48 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puStack_48 = (uint32_t *)heap_alloc((void *)0x60), puStack_48 != (uint32_t *)0x0)) {
        *puStack_48 = 0;
        puStack_48[1] = 0;
        initialize_lens_update_object(puStack_48 + 2,0x50);
        puStack_48[0x16] = 0;
        puStack_48[0x17] = 0;
      }
    }
    param_1[0x206] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x60);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puStack_48 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puStack_48 = (uint32_t *)heap_alloc((void *)0x60), puStack_48 != (uint32_t *)0x0)) {
        *puStack_48 = 0;
        puStack_48[1] = 0;
        initialize_lens_update_object(puStack_48 + 2,0x50);
        puStack_48[0x16] = 0;
        puStack_48[0x17] = 0;
      }
    }
    param_1[0x207] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x60);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puStack_48 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puStack_48 = (uint32_t *)heap_alloc((void *)0x60), puStack_48 != (uint32_t *)0x0)) {
        *puStack_48 = 0;
        puStack_48[1] = 0;
        initialize_lens_update_object(puStack_48 + 2,0x50);
        puStack_48[0x16] = 0;
        puStack_48[0x17] = 0;
      }
    }
    param_1[0x208] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0x60);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puStack_48 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puStack_48 = (uint32_t *)heap_alloc((void *)0x60), puStack_48 != (uint32_t *)0x0)) {
        *puStack_48 = 0;
        puStack_48[1] = 0;
        initialize_lens_update_object(puStack_48 + 2,0x50);
        puStack_48[0x16] = 0;
        puStack_48[0x17] = 0;
      }
    }
    param_1[0x209] = puVar2;
    puVar5 = (uint16_t *)heap_alloc((void *)0x54);
    if (puVar5 == (uint16_t *)0x0) {
      puVar5 = (uint16_t *)0x0;
    }
    else {
      puStack_34 = puVar5;
      if ((puVar5 != (uint16_t *)0x0) ||
         (puStack_34 = (uint16_t *)heap_alloc((void *)0x54), puStack_34 != (uint16_t *)0x0)) {
        puVar6 = puStack_34;
        if ((puStack_34 != (uint16_t *)0x0) ||
           (puVar6 = (uint16_t *)heap_alloc((void *)0x34), puVar6 != (uint16_t *)0x0)) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          puVar6[0xf] = 0;
          puVar6[0x10] = 0;
          puVar6[0x11] = 0;
          puVar6[0x12] = 0;
          *(uint8_t *)(puVar6 + 0x13) = 0;
          *(uint8_t *)((int)puVar6 + 0x27) = 0;
          *(uint8_t *)(puVar6 + 0x14) = 0;
          *(uint8_t *)((int)puVar6 + 0x29) = 0;
          *(uint8_t *)(puVar6 + 0x15) = 0;
          *(uint8_t *)((int)puVar6 + 0x2b) = 0;
          *(uint8_t *)(puVar6 + 0x16) = 0;
          *(uint8_t *)((int)puVar6 + 0x2d) = 0;
          *(uint8_t *)(puVar6 + 0x17) = 0;
          *(uint8_t *)((int)puVar6 + 0x2f) = 0;
          *(uint8_t *)(puVar6 + 0x18) = 0;
          *(uint8_t *)((int)puVar6 + 0x31) = 0;
          *(uint8_t *)(puVar6 + 0x19) = 0;
        }
        puStack_34[0x1a] = 0;
        puStack_34[0x1b] = 0;
        *(uint32_t *)(puStack_34 + 0x1c) = 0;
        *(uint32_t *)(puStack_34 + 0x1e) = 0;
        *(uint32_t *)(puStack_34 + 0x20) = 0;
        *(uint32_t *)(puStack_34 + 0x22) = 0;
        *(uint32_t *)(puStack_34 + 0x24) = 0;
        *(uint32_t *)(puStack_34 + 0x26) = 0;
        *(uint8_t *)(puStack_34 + 0x28) = 0;
      }
    }
    param_1[0x20a] = puVar5;
    puVar2 = (uint32_t *)heap_alloc((void *)0x28);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x28), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 2;
        puVar3[1] = 0;
        *(uint8_t *)(puVar3 + 2) = 0;
        *(uint16_t *)((int)puVar3 + 10) = 0;
        *(uint16_t *)(puVar3 + 3) = 0;
        *(uint16_t *)((int)puVar3 + 0xe) = 0;
        puVar3[4] = 0;
        *(uint16_t *)(puVar3 + 5) = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
      }
    }
    param_1[0x20c] = puVar2;
    puVar2 = (uint32_t *)heap_alloc((void *)0xc);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0xc), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
    }
    param_1[0x20d] = puVar2;
    iVar4 = heap_alloc((void *)0x5c);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      cls_105fa8e4_new(iVar4);
    }
    param_1[0x20e] = iVar4;
    puVar2 = (uint32_t *)heap_alloc((void *)0x10);
    if (puVar2 == (uint32_t *)0x0) {
      puVar2 = (uint32_t *)0x0;
    }
    else {
      puVar3 = puVar2;
      if ((puVar2 != (uint32_t *)0x0) ||
         (puVar3 = (uint32_t *)heap_alloc((void *)0x10), puVar3 != (uint32_t *)0x0)) {
        *puVar3 = 0;
        *(uint16_t *)(puVar3 + 1) = 0;
        *(uint16_t *)((int)puVar3 + 6) = 0;
        puVar3[2] = 0;
        *(uint8_t *)(puVar3 + 3) = 0;
        *(uint8_t *)((int)puVar3 + 0xd) = 0;
        *(uint8_t *)((int)puVar3 + 0xe) = 1;
      }
    }
    param_1[0x20f] = puVar2;
    uVar1 = 0;
    do {
      iVar4 = uVar1 * 2;
      *(uint16_t *)((int)param_1 + iVar4 + 0x67c) = 0;
      uVar1 = uVar1 + 1 & 0xffff;
      *(uint16_t *)((int)param_1 + iVar4 + 0x686) = 0;
    } while (uVar1 < 5);
    param_1[0x183] = param_1[0x1fe] + 0x120;
    param_1[0x184] = param_1[0x1fe] + 0x3c;
    param_1[0x185] = param_1[0x20a];
    *(uint32_t *)(param_1[0x1fe] + 0xd8) = param_1[0x20e];
    *(uint32_t *)param_1[0x1fa] = param_1[0x1fb];
    *(uint32_t *)(param_1[0x1fa] + 4) = param_1[0x1fc];
    *(uint32_t **)(param_1[0x201] + 0x18) = param_1 + 0x220;
    *(uint32_t *)(param_1[0x201] + 0x20) = param_1[0x206];
    *(uint32_t *)(param_1[0x201] + 0x24) = param_1[0x207];
    *(uint32_t *)(param_1[0x201] + 0x28) = param_1[0x208];
    *(uint32_t *)(param_1[0x201] + 0x2c) = param_1[0x209];
  }
  return param_1;
}
