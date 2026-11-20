/* @k10d cls_10565040_new @ 0x103a57ec
 * name: verified (structural evidence: heap_alloc(0x13c) when NULL; stores vtable 0x10565040; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10565040 (vtable 0x10565040, 0x13c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x13c) when NULL; stores vtable 0x10565040; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105643d0 * cls_10565040_new(cls_10565040 *param_1)

{
  if ((param_1 != (cls_10565040 *)0x0) ||
     (param_1 = (cls_10565040 *)heap_alloc((void *)0x13c), (cls_105643d0 *)param_1 != (cls_105643d0 *)0x0))
  {
    cls_105643d0_new((cls_105643d0 *)param_1);
    ((cls_105643d0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x10565040/*ROM*/);
    ((cls_105643d0 *)param_1)->field40_0x40 = 0;
    ((cls_105643d0 *)param_1)->field41_0x41 = '\0';
    ((cls_105643d0 *)param_1)->field42_0x42 = 0;
    ((cls_105643d0 *)param_1)->field43_0x43 = 0;
    ((cls_105643d0 *)param_1)->field44_0x44 = 0;
    ((cls_105643d0 *)param_1)->field45_0x45 = 0;
    ((cls_105643d0 *)param_1)->field46_0x46 = 0;
    ((cls_105643d0 *)param_1)->field48_0x48 = 0;
    ((cls_105643d0 *)param_1)->field49_0x49 = 0;
    ((cls_105643d0 *)param_1)->field50_0x4a = 0;
    ((cls_105643d0 *)param_1)->field51_0x4b = 0;
    ((cls_105643d0 *)param_1)->field52_0x4c = '\0';
    ((cls_105643d0 *)param_1)->field53_0x4d = 0;
    ((cls_105643d0 *)param_1)->field54_0x4e = 0;
    ((cls_105643d0 *)param_1)->field55_0x4f = 0;
    ((cls_105643d0 *)param_1)->field56_0x50 = 0;
    ((cls_105643d0 *)param_1)->field57_0x54 = 0;
    ((cls_105643d0 *)param_1)->field58_0x56 = 0;
    ((cls_105643d0 *)param_1)->field59_0x57 = '\0';
    *(uint32_t *)&((cls_105643d0 *)param_1)->field_0x58 = 0;
    ((cls_105643d0 *)param_1)->field64_0x5c = 0;
    ((cls_105643d0 *)param_1)->field65_0x5e = 0;
    ((cls_105643d0 *)param_1)->field66_0x60 = 0;
    ((cls_105643d0 *)param_1)->field67_0x62 = 0;
    ((cls_105643d0 *)param_1)->field68_0x64 = 0;
    ((cls_105643d0 *)param_1)->field69_0x66 = 0;
    ((cls_105643d0 *)param_1)->field70_0x68 = 0;
    ((cls_105643d0 *)param_1)->field71_0x6a = 0;
    ((cls_105643d0 *)param_1)->field72_0x6c = 0;
    ((cls_105643d0 *)param_1)->field73_0x6e = 0;
    ((cls_105643d0 *)param_1)->field74_0x70 = 0;
    ((cls_105643d0 *)param_1)->field75_0x72 = 0;
    ((cls_105643d0 *)param_1)->field76_0x74 = 0;
    ((cls_105643d0 *)param_1)->field77_0x75 = 0;
    ((cls_105643d0 *)param_1)->field78_0x76 = 0;
    ((cls_105643d0 *)param_1)->field79_0x78 = 0;
    ((cls_105643d0 *)param_1)->field80_0x7a = 0;
    ((cls_105643d0 *)param_1)->field81_0x7c = 0;
    ((cls_105643d0 *)param_1)->field82_0x7e = 0;
    ((cls_105643d0 *)param_1)->field83_0x80 = 0;
    ((cls_105643d0 *)param_1)->field84_0x82 = 0;
    ((cls_105643d0 *)param_1)->field85_0x84 = 0;
    ((cls_105643d0 *)param_1)->field86_0x85 = 0;
    ((cls_105643d0 *)param_1)->field87_0x86 = 0;
    ((cls_105643d0 *)param_1)->field88_0x87 = 0;
    ((cls_105643d0 *)param_1)->field89_0x88 = 0;
    ((cls_105643d0 *)param_1)->field90_0x89 = 0;
    ((cls_105643d0 *)param_1)->field91_0x8a = 0;
    ((cls_105643d0 *)param_1)->field92_0x8b = 0;
    ((cls_105643d0 *)param_1)->field93_0x8c = 0;
    ((cls_105643d0 *)param_1)->field94_0x8d = 0;
    ((cls_105643d0 *)param_1)->field95_0x8e = 0;
    ((cls_105643d0 *)param_1)->field96_0x8f = 0;
    ((cls_105643d0 *)param_1)->field97_0x90 = 0;
    ((cls_105643d0 *)param_1)->field98_0x94 = 0;
    ((cls_105643d0 *)param_1)->field99_0x95 = 0;
    ((cls_105643d0 *)param_1)->field100_0x96 = 0;
    ((cls_105643d0 *)param_1)->field101_0x97 = 0;
    ((cls_105643d0 *)param_1)->field102_0x98 = 0;
    ((cls_105643d0 *)param_1)->field103_0x99 = 0;
    ((cls_105643d0 *)param_1)->field104_0x9a = 0;
    ((cls_105643d0 *)param_1)->field105_0x9b = 0;
    ((cls_105643d0 *)param_1)->field106_0x9c = 0;
    ((cls_105643d0 *)param_1)->field107_0x9d = 0;
    ((cls_105643d0 *)param_1)->field108_0x9e = 0;
    ((cls_105643d0 *)param_1)->field109_0x9f = 0;
    ((cls_105643d0 *)param_1)->field110_0xa0 = 0;
    ((cls_105643d0 *)param_1)->field111_0xa1 = 0;
    ((cls_105643d0 *)param_1)->field112_0xa2 = 0;
    ((cls_105643d0 *)param_1)->field113_0xa3 = 0;
    ((cls_105643d0 *)param_1)->field114_0xa4 = 0;
    ((cls_105643d0 *)param_1)->field115_0xa8 = 0;
    ((cls_105643d0 *)param_1)->field116_0xac = 0;
    ((cls_105643d0 *)param_1)->field117_0xb0 = 0;
    ((cls_105643d0 *)param_1)->field118_0xb4 = 0;
    ((cls_105643d0 *)param_1)->field119_0xb8 = 0;
    ((cls_105643d0 *)param_1)->field120_0xbc = 0;
    ((cls_105643d0 *)param_1)->field121_0xc0 = 0;
    ((cls_105643d0 *)param_1)->field122_0xc4 = 0;
    ((cls_105643d0 *)param_1)->field123_0xc8 = 0;
    ((cls_105643d0 *)param_1)->field124_0xcc = 0;
    ((cls_105643d0 *)param_1)->field125_0xcd = 0;
    ((cls_105643d0 *)param_1)->field126_0xce = 0;
    ((cls_105643d0 *)param_1)->field127_0xcf = 0;
    ((cls_105643d0 *)param_1)->field128_0xd0 = 0;
    ((cls_105643d0 *)param_1)->field129_0xd1 = 0;
    ((cls_105643d0 *)param_1)->field130_0xd2 = 0;
    ((cls_105643d0 *)param_1)->field131_0xd3 = 0;
    ((cls_105643d0 *)param_1)->field132_0xd4 = 0;
    ((cls_105643d0 *)param_1)->field133_0xd5 = 0;
    ((cls_105643d0 *)param_1)->field134_0xd6 = 0;
    ((cls_105643d0 *)param_1)->field135_0xd7 = 0;
    ((cls_105643d0 *)param_1)->field136_0xd8 = 0;
    ((cls_105643d0 *)param_1)->field137_0xd9 = 0;
    ((cls_105643d0 *)param_1)->field138_0xda = 0;
    ((cls_105643d0 *)param_1)->field139_0xdb = 0;
    ((cls_105643d0 *)param_1)->field140_0xdc = 0;
    ((cls_105643d0 *)param_1)->field141_0xdd = 0;
    ((cls_105643d0 *)param_1)->field142_0xde = 0;
    ((cls_105643d0 *)param_1)->field143_0xdf = 0;
    ((cls_105643d0 *)param_1)->field144_0xe0 = 0;
    ((cls_105643d0 *)param_1)->field145_0xe1 = 0;
    ((cls_105643d0 *)param_1)->field146_0xe2 = 0;
    ((cls_105643d0 *)param_1)->field147_0xe3 = 0;
    ((cls_105643d0 *)param_1)->field148_0xe4 = 0;
    ((cls_105643d0 *)param_1)->field149_0xe5 = 0;
    ((cls_105643d0 *)param_1)->field150_0xe6 = 0;
    ((cls_105643d0 *)param_1)->field151_0xe7 = 0;
    ((cls_105643d0 *)param_1)->field152_0xe8 = 0;
    ((cls_105643d0 *)param_1)->field153_0xe9 = 0;
    ((cls_105643d0 *)param_1)->field154_0xea = 0;
    ((cls_105643d0 *)param_1)->field155_0xeb = 0;
    ((cls_105643d0 *)param_1)->field156_0xec = 0;
    ((cls_105643d0 *)param_1)->field157_0xed = 0;
    ((cls_105643d0 *)param_1)->field158_0xee = 0;
    ((cls_105643d0 *)param_1)->field159_0xef = 0;
    initialize_lens_update_object(&((cls_105643d0 *)param_1)->field160_0xf0,0x10);
    initialize_lens_update_object(&((cls_105643d0 *)param_1)->field176_0x100,0x10);
    ((cls_105643d0 *)param_1)->field192_0x110 = 0;
    ((cls_105643d0 *)param_1)->field193_0x112 = 0;
    ((cls_105643d0 *)param_1)->field194_0x114 = 0x100;
    ((cls_105643d0 *)param_1)->field195_0x116 = 0;
    ((cls_105643d0 *)param_1)->field196_0x118 = 0;
    ((cls_105643d0 *)param_1)->field197_0x119 = 0;
    ((cls_105643d0 *)param_1)->field198_0x11a = 0;
    ((cls_105643d0 *)param_1)->field199_0x11c = 1;
    ((cls_105643d0 *)param_1)->field200_0x120 = 1;
    ((cls_105643d0 *)param_1)->field201_0x124 = 0;
    ((cls_105643d0 *)param_1)->field202_0x128 = 0;
    ((cls_105643d0 *)param_1)->field203_0x12c = 0;
    ((cls_105643d0 *)param_1)->field204_0x130 = 0;
    ((cls_105643d0 *)param_1)->field205_0x132 = 0;
    ((cls_105643d0 *)param_1)->field206_0x134 = 0;
    ((cls_105643d0 *)param_1)->field207_0x136 = 0;
    ((cls_105643d0 *)param_1)->field208_0x138 = 0;
  }
  return (cls_105643d0 *)param_1;
}
