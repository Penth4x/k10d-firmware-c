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

cls_1059d9d0 * cls_1059d9d0_new(cls_1059d9d0 *param_1)

{
  cls_1059d9d0 *pcVar1;
  
  if ((param_1 != (cls_1059d9d0 *)0x0) ||
     (param_1 = (cls_1059d9d0 *)heap_alloc((void *)0xc0), param_1 != (cls_1059d9d0 *)0x0)) {
    pcVar1 = param_1;
    if ((param_1 != (cls_1059d9d0 *)0x0) ||
       (pcVar1 = (cls_1059d9d0 *)heap_alloc((void *)4), pcVar1 != (cls_1059d9d0 *)0x0)) {
      pcVar1->field_0x0 = 0x1059d740/*ROM*/;
    }
    param_1->field_0x0 = 0x1059d9d0/*ROM*/;
    param_1->field_0x4 = 0xf60;
    param_1->field_0x6 = 0xa40;
    param_1->field_0x8 = 0xf20;
    param_1->field_0xa = 0xa20;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 1;
    param_1->field_0x11 = 0;
    param_1->field_0x12 = 1;
    param_1->field_0x13 = 0;
    param_1->field_0x14 = 2;
    param_1->field_0x18 = 0x160;
    param_1->field_0x1a = 0xc4;
    param_1->field_0x1c = 0xcc;
    param_1->field_0x1e = 0x6b;
    param_1->field_0x20 = 0xa40;
    param_1->field_0x22 = 0x3d0;
    param_1->field_0x24 = 0x16e0;
    param_1->field_0x26 = 0x7b0;
    param_1->field_0x28 = 0x2b0;
    param_1->field_0x2c = 0x500;
    param_1->field_0x30 = 1;
    param_1->field_0x32 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x36 = 0xa40;
    param_1->field_0x38 = 0x3d0;
    param_1->field_0x3a = 2;
    param_1->field_0x3c = 1;
    param_1->field_0x40 = 0x80000000/*SDRAM*/;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0x80000000/*SDRAM*/;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0x40000000;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0x40000000;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0x80000000/*SDRAM*/;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 1;
    param_1->field_0x6c = 1;
    param_1->field_0x70 = 0;
    param_1->field_0x71 = 0;
    param_1->field_0x72 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x76 = 1;
    param_1->field_0x78 = 0;
    param_1->field_0x7a = 0;
    param_1->field_0x7c = 0;
    param_1->field_0x7e = 0;
    param_1->field_0x80 = 0x4a;
    param_1->field_0x82 = 0x28;
    param_1->field_0x84 = 0x6e;
    param_1->field_0x86 = 0x24;
    param_1->field_0x88 = 0x20;
    param_1->field_0x8a = 0x40;
    param_1->field_0x8c = 0x6e;
    param_1->field_0x8e = 0x24;
    param_1->field_0x90 = 0x6e;
    param_1->field_0x92 = 0x24;
    param_1->field_0x94 = 0xb9a;
    param_1->field_0x96 = 0;
    param_1->field_0x98 = 0xcc;
    param_1->field_0x9a = 0x6b;
    param_1->field_0x9c = 0xe;
    param_1->field_0x9e = 0x3d0;
    param_1->field_0xa0 = 0x4a;
    param_1->field_0xa2 = 0x3d0;
    param_1->field_0xa4 = 0xc;
    param_1->field_0xa6 = 8;
    param_1->field_0xa8 = 0xf40;
    param_1->field_0xaa = 0xa40;
    param_1->field_0xac = 1;
    param_1->field_0xae = 0x160;
    param_1->field_0xb0 = 0;
    param_1->field_0xb2 = 0xcc;
    param_1->field_0xb4 = 0x6b;
    param_1->field_0xb6 = 0xa48;
    param_1->field_0xb8 = 0x3d0;
    param_1->field_0xba = 1;
    param_1->field_0xbc = 0x3c;
    param_1->field_0xbe = 0x14;
  }
  return param_1;
}
