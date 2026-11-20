/* @k10d init_large_struct_with_subobjects @ 0x1040c4e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040c50c) overlaps instruction at (ram,0x1040c50a)
    */

cls_105643d0 * init_large_struct_with_subobjects(cls_105643d0 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  cls_105643d0 *pcStack_14;
  int iStack_10;
  int iStack_c;
  
  pcStack_14 = param_1;
  if ((param_1 != (cls_105643d0 *)0x0) ||
     (pcStack_14 = (cls_105643d0 *)heap_alloc((void *)0x638), pcStack_14 != (cls_105643d0 *)0x0)) {
    cls_105643d0_new(pcStack_14);
    cls_105a2a8c_new((cls_105a2a8c *)&pcStack_14->field40_0x40);
    pcStack_14->field_0x0 = (uintptr_t)((void *)0x1059a3b4/*ROM*/);
    pcStack_14->field44_0x44 = 0x10;
    pcStack_14->field45_0x45 = 0x59;
    pcStack_14->field46_0x46 = 0xa4;
    pcStack_14->field47_0x47 = 0x54;
    pcStack_14->field48_0x48 = 0;
    pcStack_14->field49_0x49 = 0;
    pcStack_14->field50_0x4a = 0;
    pcStack_14->field51_0x4b = 0;
    pcStack_14->field52_0x4c = '\0';
    pcStack_14->field53_0x4d = 0;
    pcStack_14->field54_0x4e = 0;
    pcStack_14->field55_0x4f = 0;
    pcStack_14->field56_0x50 = 200;
    *(uint8_t *)&pcStack_14->field57_0x54 = 1;
    pcStack_14->field58_0x56 = 0;
    pcStack_14->field59_0x57 = '\0';
    *(uint16_t *)&pcStack_14->field_0x58 = 0;
    pcStack_14->field62_0x5a = 0;
    pcStack_14->field63_0x5b = 0;
    pcStack_14->field64_0x5c = 0;
    pcStack_14->field65_0x5e = 0;
    *(uint32_t *)((int)&pcStack_14[1].field_0x3c + 2) = 0;
    pcStack_14[1].field42_0x42 = 0;
    pcStack_14[1].field43_0x43 = 0;
    pcStack_14[1].field44_0x44 = 0;
    pcStack_14[1].field45_0x45 = 200;
    pcStack_14[1].field46_0x46 = 1;
    pcStack_14[1].field154_0xea = 0;
    pcStack_14[1].field155_0xeb = 0;
    pcStack_14[1].field156_0xec = 0;
    pcStack_14[1].field157_0xed = 0;
    pcStack_14[1].field158_0xee = 0;
    pcStack_14[1].field159_0xef = 0;
    pcStack_14[1].field160_0xf0 = 0;
    ((uint8_t *)&pcStack_14[1].field160_0xf0)[1] = 200;
    ((uint8_t *)&pcStack_14[1].field160_0xf0)[2] = 1;
    pcStack_14[2].field66_0x60 = 0;
    pcStack_14[2].field67_0x62 = 200;
    *(uint8_t *)&pcStack_14[2].field68_0x64 = 1;
    *(uint32_t *)&pcStack_14[2].field_0x108 = 0;
    *(uint32_t *)&pcStack_14[2].field_0x10c = 200;
    *(uint8_t *)&pcStack_14[2].field192_0x110 = 1;
    pcStack_14[4].field_0x30 = 200;
    *(uint8_t *)&pcStack_14[4].field_0x34 = 1;
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14->field66_0x60 + iVar1),(char *)0x1059a46c/*ROM*/,param_3
                   ,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14->field73_0x6e + iVar1),(char *)0x1059a46c/*ROM*/,param_3
                   ,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14->field81_0x7c + iVar1),(char *)0x1059a46c/*ROM*/,param_3
                   ,param_4);
      format_string_to_buffer_10545140(&pcStack_14->field91_0x8a + iVar1,(char *)0x1059a46c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14->field102_0x98 + iVar1,(char *)0x1059a46c/*ROM*/,param_3,param_4);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x46;
    } while (-1 < iVar2);
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140(&pcStack_14[1].field47_0x47 + iVar1,(char *)0x1059a474/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[1].field56_0x50 + iVar1 + 1),(char *)0x1059a474/*ROM*/,
                   param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[1].field63_0x5b + iVar1,(char *)0x1059a474/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[1].field68_0x64 + iVar1 + 1),(char *)0x1059a474/*ROM*/,
                   param_3,param_4);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar2);
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140(((uint8_t *)&pcStack_14[1].field160_0xf0 + 3) + iVar1,(char *)0x1059a47c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[1].field_0xfd + iVar1,(char *)0x1059a47c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[1].field_0x107 + iVar1,(char *)0x1059a47c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[1].field192_0x110 + iVar1 + 1),(char *)0x1059a47c/*ROM*/
                   ,param_3,param_4);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar2);
    format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field68_0x64 + 1),(char *)0x1059a484/*ROM*/,param_3,
                 param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field73_0x6e + 1),(char *)0x1059a484/*ROM*/,param_3,
                 param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field79_0x78 + 1),(char *)0x1059a484/*ROM*/,param_3,
                 param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field84_0x82 + 1),(char *)0x1059a484/*ROM*/,param_3,
                 param_4);
    iStack_10 = 1;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field192_0x110 + iVar1 + 1),(char *)0x1059a48c/*ROM*/
                   ,param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[2].field208_0x138 + iVar1 + 1),(char *)0x1059a48c/*ROM*/
                   ,param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[3].field_0x27 + iVar1,(char *)0x1059a48c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[3].field55_0x4f + iVar1,(char *)0x1059a48c/*ROM*/,param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[3].field78_0x76 + iVar1 + 1),(char *)0x1059a48c/*ROM*/,
                   param_3,param_4);
      iVar1 = iVar1 + 200;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
    iStack_c = 1;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[4].field_0x34 + iVar2 + 1),(char *)0x1059a494/*ROM*/,
                   param_3,param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[4].field64_0x5c + iVar2 + 1),(char *)0x1059a494/*ROM*/,
                   param_3,param_4);
      format_string_to_buffer_10545140(&pcStack_14[4].field86_0x85 + iVar2,(char *)0x1059a494/*ROM*/,param_3,param_4);
      iStack_c = iStack_c + -1;
      iVar1 = iVar2 + 0x78;
    } while (-1 < iStack_c);
    format_string_to_buffer_10545140((uint8_t *)((int)&pcStack_14[4].field116_0xac + iVar2 + 1),(char *)0x1059a494/*ROM*/,
                 param_3,param_4);
  }
  return pcStack_14;
}
