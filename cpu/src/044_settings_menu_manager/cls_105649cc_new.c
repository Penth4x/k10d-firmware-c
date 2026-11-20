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

cls_105643d0 * cls_105649cc_new(cls_105649cc *param_1)

{
  if ((param_1 != (cls_105649cc *)0x0) ||
     (param_1 = (cls_105649cc *)heap_alloc((void *)0x11c), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0))
  {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x105649cc/*ROM*/);
    ((cls_105643d0 *)param_1)->field40_0x40 = 0;
    ((cls_105643d0 *)param_1)->field41_0x41 = '\0';
    ((cls_105643d0 *)param_1)->field42_0x42 = 0;
    ((cls_105643d0 *)param_1)->field43_0x43 = 0;
    ((cls_105643d0 *)param_1)->field44_0x44 = 0;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0;
    ((cls_105643d0 *)param_1)->field47_0x47 = 0;
    ((cls_105643d0 *)param_1)->field48_0x48 = 0;
    ((cls_105643d0 *)param_1)->field49_0x49 = 0;
    ((cls_105643d0 *)param_1)->field50_0x4a = 0;
    ((cls_105643d0 *)param_1)->field51_0x4b = 0;
    ((cls_105643d0 *)param_1)->field52_0x4c = '\0';
    ((cls_105643d0 *)param_1)->field53_0x4d = 0;
    ((cls_105643d0 *)param_1)->field54_0x4e = 0;
    ((cls_105643d0 *)param_1)->field196_0x118 = 0;
    ((cls_105643d0 *)param_1)->field197_0x119 = 0;
    *(uint16_t *)&((cls_105643d0 *)param_1)->field56_0x50 = 0;
    *(uint16_t *)((int)&((cls_105643d0 *)param_1)->field56_0x50 + 2) = 0x18;
    ((cls_105643d0 *)param_1)->field57_0x54 = 0x1a;
    ((cls_105643d0 *)param_1)->field58_0x56 = 0;
    ((cls_105643d0 *)param_1)->field59_0x57 = '\x1b';
    *(uint16_t *)&((cls_105643d0 *)param_1)->field_0x58 = 0x1c;
    ((cls_105643d0 *)param_1)->field62_0x5a = 0;
    ((cls_105643d0 *)param_1)->field63_0x5b = 0x1e;
    ((cls_105643d0 *)param_1)->field64_0x5c = 0x20;
    ((cls_105643d0 *)param_1)->field65_0x5e = 0x21;
    ((cls_105643d0 *)param_1)->field66_0x60 = 0x22;
    ((cls_105643d0 *)param_1)->field67_0x62 = 0x24;
    ((cls_105643d0 *)param_1)->field68_0x64 = 0x26;
    ((cls_105643d0 *)param_1)->field69_0x66 = 0x27;
    ((cls_105643d0 *)param_1)->field70_0x68 = 0x28;
    ((cls_105643d0 *)param_1)->field71_0x6a = 0x2a;
    ((cls_105643d0 *)param_1)->field72_0x6c = 0x2c;
    ((cls_105643d0 *)param_1)->field73_0x6e = 0x2d;
    ((cls_105643d0 *)param_1)->field74_0x70 = 0x2e;
    ((cls_105643d0 *)param_1)->field75_0x72 = 0x30;
    ((cls_105643d0 *)param_1)->field76_0x74 = 0;
    ((cls_105643d0 *)param_1)->field77_0x75 = 0x32;
    ((cls_105643d0 *)param_1)->field78_0x76 = 0x33;
    ((cls_105643d0 *)param_1)->field79_0x78 = 0x34;
    ((cls_105643d0 *)param_1)->field80_0x7a = 0x36;
    ((cls_105643d0 *)param_1)->field81_0x7c = 0x38;
    ((cls_105643d0 *)param_1)->field82_0x7e = 0x39;
    ((cls_105643d0 *)param_1)->field83_0x80 = 0x3a;
    ((cls_105643d0 *)param_1)->field84_0x82 = 0x3c;
    *(uint8_t *)&((cls_105643d0 *)param_1)->field118_0xb4 = 0;
    ((cls_105643d0 *)param_1)->field124_0xcc = 1;
    ((cls_105643d0 *)param_1)->field126_0xce = 2;
    ((cls_105643d0 *)param_1)->field127_0xcf = 3;
    ((cls_105643d0 *)param_1)->field128_0xd0 = 4;
    ((cls_105643d0 *)param_1)->field130_0xd2 = 5;
    ((cls_105643d0 *)param_1)->field132_0xd4 = 6;
    ((cls_105643d0 *)param_1)->field133_0xd5 = 7;
    ((cls_105643d0 *)param_1)->field134_0xd6 = 8;
    ((cls_105643d0 *)param_1)->field136_0xd8 = 9;
    ((cls_105643d0 *)param_1)->field138_0xda = 10;
    ((cls_105643d0 *)param_1)->field139_0xdb = 0xb;
    ((cls_105643d0 *)param_1)->field140_0xdc = 0xc;
    ((cls_105643d0 *)param_1)->field142_0xde = 0xd;
    ((cls_105643d0 *)param_1)->field144_0xe0 = 0xe;
    ((cls_105643d0 *)param_1)->field145_0xe1 = 0xf;
    ((cls_105643d0 *)param_1)->field146_0xe2 = 0x10;
    ((cls_105643d0 *)param_1)->field148_0xe4 = 0x11;
    ((cls_105643d0 *)param_1)->field150_0xe6 = 0x12;
    ((cls_105643d0 *)param_1)->field151_0xe7 = 0x13;
    ((cls_105643d0 *)param_1)->field152_0xe8 = 0x14;
    ((cls_105643d0 *)param_1)->field154_0xea = 0x15;
    ((cls_105643d0 *)param_1)->field156_0xec = 0x16;
    ((cls_105643d0 *)param_1)->field157_0xed = 0x17;
    ((cls_105643d0 *)param_1)->field158_0xee = 0x18;
    ((cls_105643d0 *)param_1)->field160_0xf0 = 0x19;
  }
  return (cls_105643d0 *)param_1;
}
