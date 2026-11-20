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

cls_1059e4d0 * cls_1059e4d0_new(cls_1059e4d0 *param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  int iVar4;
  uint16_t *puVar5;
  uint16_t *puVar6;
  cls_105fa8e4 *pcVar7;
  uint32_t *puStack_4c;
  uint32_t *puStack_48;
  uint16_t *puStack_34;
  
  if ((param_1 != (cls_1059e4d0 *)0x0) ||
     (param_1 = (cls_1059e4d0 *)heap_alloc((void *)0x8d8), param_1 != (cls_1059e4d0 *)0x0)) {
    param_1->field_0x8d4 = (uintptr_t)(&test_mode_screen_vtable);
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x18 = (uintptr_t)(&DAT_1059e4d0/*ROM*/);
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x29 = 0;
    param_1->field_0x2a = 1;
    param_1->field_0x2b = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x2d = 0;
    param_1->field_0x2e = 0;
    param_1->field_0x2f = 0;
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x78 = 0;
    param_1->field_0x7c = 0;
    param_1->field_0x80 = 0x180;
    param_1->field_0x84 = 0;
    param_1->field_0x88 = 0;
    param_1->field_0x8c = 0;
    param_1->field_0x90 = 0;
    param_1->field_0x94 = 0;
    param_1->field_0x98 = 0;
    param_1->field_0x9c = 0;
    param_1->field_0xa0 = 0;
    param_1->field_0xa4 = 0;
    param_1->field_0xa8 = 0;
    param_1->field_0xac = 0;
    param_1->field_0xb0 = 0;
    param_1->field_0xb4 = 0;
    param_1->field_0xb8 = 0;
    param_1->field_0xbc = 0;
    param_1->field_0xc0 = 0;
    param_1->field_0xc4 = 0;
    param_1->field_0xc8 = 0;
    param_1->field_0xcc = 0;
    param_1->field_0xd0 = 0;
    param_1->field_0xd4 = 0;
    param_1->field_0xd8 = 0;
    param_1->field_0xdc = 0;
    param_1->field_0xe0 = 0;
    param_1->field_0xe4 = 0;
    param_1->field_0xe8 = 0;
    param_1->field_0xec = 0;
    param_1->field_0xf0 = 0;
    param_1->field_0xf4 = 0;
    param_1->field_0xf8 = 4;
    param_1->field_0xfc = 0;
    param_1->field_0xfe = 0;
    param_1->field_0x100 = 0;
    param_1->field_0x104 = 0;
    param_1->field_0x108 = 0;
    param_1->field_0x10a = 0;
    param_1->field_0x10c = 0;
    param_1->field_0x10e = 0;
    param_1->field_0x110 = 0;
    param_1->field_0x114 = 0x100;
    param_1->field_0x116 = 0x100;
    param_1->field_0x118 = 0x100;
    param_1->field_0x11a = 0x100;
    param_1->field_0x11c = 0;
    param_1->field_0x11e = 0;
    param_1->field_0x120 = 0;
    param_1->field_0x122 = 0;
    param_1->field_0x124 = 0;
    param_1->field_0x126 = 0;
    param_1->field_0x128 = 0;
    param_1->field_0x12a = 0;
    param_1->field_0x12c = 0;
    param_1->field_0x130 = 0;
    param_1->field_0x134 = 0;
    param_1->field_0x138 = 0;
    param_1->field_0x13c = 0;
    param_1->field_0x140 = 0;
    param_1->field_0x144 = 0;
    construct_large_camera_object(&param_1->field_0x148);
    param_1->field_0x678 = 0;
    param_1->field_0x67a = 0;
    param_1->field_0x690 = 0;
    param_1->field_0x692 = 3;
    param_1->field_0x694 = 0;
    param_1->field_0x695 = 1;
    param_1->field_0x698 = 0;
    param_1->field_0x69c = 0;
    param_1->field_0x6a0 = 0;
    param_1->field_0x6a4 = 0;
    param_1->field_0x6a5 = 0;
    param_1->field_0x6a6 = 0;
    param_1->field_0x6a8 = 0;
    param_1->field_0x6aa = 0;
    param_1->field_0x6ac = 0;
    param_1->field_0x6b0 = 0;
    param_1->field_0x6b4 = 0;
    param_1->field_0x6b8 = 0;
    param_1->field_0x6b9 = 0;
    param_1->field_0x6bc = 0;
    param_1->field_0x6c0 = 0;
    param_1->field_0x6c4 = 0;
    param_1->field_0x6c8 = 0;
    param_1->field_0x6cc = 1;
    param_1->field_0x6d0 = 0;
    param_1->field_0x6d4 = 0;
    param_1->field_0x6d8 = 0;
    param_1->field_0x6dc = 0;
    param_1->field_0x6de = 0;
    param_1->field_0x6e0 = 0;
    param_1->field_0x6e2 = 0;
    param_1->field_0x6e4 = 0;
    param_1->field_0x6e8 = 1;
    param_1->field_0x6ec = 0;
    param_1->field_0x6f0 = 0;
    param_1->field_0x6f4 = 0;
    param_1->field_0x6f8 = 0;
    param_1->field_0x6fa = 0;
    param_1->field_0x6fc = 0;
    param_1->field_0x6fe = 0;
    param_1->field_0x700 = 0;
    param_1->field_0x704 = 1;
    param_1->field_0x708 = 0;
    param_1->field_0x70c = 0;
    param_1->field_0x710 = 0;
    param_1->field_0x714 = 0;
    param_1->field_0x716 = 0;
    param_1->field_0x718 = 0;
    param_1->field_0x71a = 0;
    param_1->field_0x71c = 0;
    param_1->field_0x720 = 1;
    param_1->field_0x724 = 0;
    param_1->field_0x728 = 0;
    param_1->field_0x72c = 0;
    param_1->field_0x730 = 0;
    param_1->field_0x732 = 0;
    param_1->field_0x734 = 0;
    param_1->field_0x736 = 0;
    param_1->field_0x738 = 0;
    param_1->field_0x73c = 1;
    param_1->field_0x740 = 0;
    param_1->field_0x744 = 0;
    param_1->field_0x748 = 0;
    param_1->field_0x74c = 0;
    param_1->field_0x74e = 0;
    param_1->field_0x750 = 0;
    param_1->field_0x752 = 0;
    param_1->field_0x754 = 0;
    param_1->field_0x758 = 1;
    param_1->field_0x75c = 0;
    param_1->field_0x760 = 0;
    param_1->field_0x764 = 0;
    param_1->field_0x768 = 0;
    param_1->field_0x76a = 0;
    param_1->field_0x76c = 0;
    param_1->field_0x76e = 0;
    param_1->field_0x770 = 0;
    param_1->field_0x774 = 0;
    param_1->field_0x778 = 0;
    param_1->field_0x77c = 0;
    param_1->field_0x780 = 0;
    param_1->field_0x784 = 1;
    param_1->field_0x788 = 0;
    param_1->field_0x78c = 0;
    param_1->field_0x790 = 0;
    param_1->field_0x794 = 0;
    param_1->field_0x798 = 0;
    param_1->field_0x79c = 0;
    param_1->field_0x7a0 = 1;
    param_1->field_0x7a4 = 0;
    param_1->field_0x7a8 = 0;
    param_1->field_0x7ac = 0;
    param_1->field_0x7b0 = 0;
    param_1->field_0x7b4 = 0;
    param_1->field_0x7b8 = 0;
    param_1->field_0x7bc = 1;
    param_1->field_0x7c0 = 0;
    param_1->field_0x7c4 = 0;
    param_1->field_0x7c8 = 0;
    param_1->field_0x7cc = 0;
    param_1->field_0x7d0 = 0;
    param_1->field_0x7d4 = 0;
    param_1->field_0x7d8 = 1;
    param_1->field_0x7dc = 0;
    param_1->field_0x7e0 = 0;
    param_1->field_0x7e4 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7e8 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7ec = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7f0 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7f4 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7f8 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x7fc = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x800 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x804 = 0;
    param_1->field_0x808 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x80c = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x810 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x814 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x818 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x81c = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x820 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x824 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x828 = (uintptr_t)((uint16_t *)0x0);
    param_1->field_0x82c = 0;
    param_1->field_0x830 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x834 = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x838 = 0;
    param_1->field_0x83c = (uintptr_t)((uint32_t *)0x0);
    param_1->field_0x840 = 0;
    param_1->field_0x842 = 0;
    param_1->field_0x844 = 0;
    param_1->field_0x846 = 0;
    param_1->field_0x848 = 0x280;
    param_1->field_0x84a = 0x1e0;
    param_1->field_0x84c = 0xa0;
    param_1->field_0x84e = 0x78;
    param_1->field_0x850 = 0x280;
    param_1->field_0x852 = 0x1e0;
    param_1->field_0x854 = 0x8000;
    param_1->field_0x858 = 0xa000;
    param_1->field_0x85c = 0x1800;
    param_1->field_0x860 = 0x2000;
    param_1->field_0x864 = 0x150000;
    param_1->field_0x868 = 0x170000;
    param_1->field_0x86c = 0xe100;
    param_1->field_0x870 = 0;
    param_1->field_0x874 = 0;
    param_1->field_0x878 = 0;
    param_1->field_0x87c = 0;
    init_timing_parameter_block(&param_1->field_0x880);
    param_1->field_0x8c4 = 0;
    param_1->field_0x8c5 = 0;
    param_1->field_0x8c8 = 0;
    param_1->field_0x8cc = 0x100;
    param_1->field_0x8ce = 0x100;
    param_1->field_0x8d0 = 0x100;
    param_1->field_0x8d2 = 0x100;
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
    param_1->field_0x7e4 = (uintptr_t)(puVar2);
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
    param_1->field_0x7e8 = (uintptr_t)(puVar2);
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
    param_1->field_0x7ec = (uintptr_t)(puVar2);
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
    param_1->field_0x7f0 = (uintptr_t)(puVar2);
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
    param_1->field_0x7f4 = (uintptr_t)(puVar2);
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
    param_1->field_0x7f8 = (uintptr_t)(puVar2);
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
    param_1->field_0x7fc = (uintptr_t)(puVar2);
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
    param_1->field_0x800 = (uintptr_t)(puVar2);
    iVar4 = heap_alloc((void *)0x30);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      zero_initialize_0x30_struct((uint32_t *)(iVar4));
    }
    param_1->field_0x804 = iVar4;
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
    param_1->field_0x808 = (uintptr_t)(puVar2);
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
    param_1->field_0x80c = (uintptr_t)(puVar2);
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
    param_1->field_0x810 = (uintptr_t)(puVar2);
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
    param_1->field_0x814 = (uintptr_t)(puVar2);
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
    param_1->field_0x818 = (uintptr_t)(puVar2);
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
    param_1->field_0x81c = (uintptr_t)(puVar2);
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
    param_1->field_0x820 = (uintptr_t)(puVar2);
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
    param_1->field_0x824 = (uintptr_t)(puVar2);
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
    param_1->field_0x828 = (uintptr_t)(puVar5);
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
    param_1->field_0x830 = (uintptr_t)(puVar2);
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
    param_1->field_0x834 = (uintptr_t)(puVar2);
    pcVar7 = (cls_105fa8e4 *)heap_alloc((void *)0x5c);
    if (pcVar7 == (cls_105fa8e4 *)0x0) {
      pcVar7 = (cls_105fa8e4 *)0x0;
    }
    else {
      cls_105fa8e4_new(pcVar7);
    }
    param_1->field_0x838 = (int)pcVar7;
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
    param_1->field_0x83c = (uintptr_t)(puVar2);
    uVar1 = 0;
    do {
      iVar4 = uVar1 * 2;
      *(uint16_t *)(&param_1->field_0x67c + iVar4) = 0;
      uVar1 = uVar1 + 1 & 0xffff;
      *(uint16_t *)(&param_1->field_0x686 + iVar4) = 0;
    } while (uVar1 < 5);
    param_1->field_0x60c = (int)(param_1->field_0x7f8 + 0x48);
    param_1->field_0x610 = (int)(param_1->field_0x7f8 + 0xf);
    param_1->field_0x614 = param_1->field_0x828;
    ((uint32_t *)(param_1->field_0x7f8))[0x36] = param_1->field_0x838;
    *(uint32_t *)(param_1->field_0x7e8) = param_1->field_0x7ec;
    ((uint32_t *)(param_1->field_0x7e8))[1] = param_1->field_0x7f0;
    *(uint32_t **)(param_1->field_0x804 + 0x18) = &param_1->field_0x880;
    *(uint32_t **)(param_1->field_0x804 + 0x20) = (uint32_t *)((uintptr_t)(param_1->field_0x818));
    *(uint32_t **)(param_1->field_0x804 + 0x24) = (uint32_t *)((uintptr_t)(param_1->field_0x81c));
    *(uint32_t **)(param_1->field_0x804 + 0x28) = (uint32_t *)((uintptr_t)(param_1->field_0x820));
    *(uint32_t **)(param_1->field_0x804 + 0x2c) = (uint32_t *)((uintptr_t)(param_1->field_0x824));
  }
  return param_1;
}
