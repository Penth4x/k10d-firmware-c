/* @k10d init_large_struct_with_subobjects @ 0x1040c4e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1040c50c) overlaps instruction at (ram,0x1040c50a)
    */

uint32_t * init_large_struct_with_subobjects(uint32_t *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uint32_t *puStack_14;
  int iStack_10;
  int iStack_c;
  
  puStack_14 = param_1;
  if ((param_1 != (uint32_t *)0x0) ||
     (puStack_14 = (uint32_t *)heap_alloc((void *)0x638), puStack_14 != (uint32_t *)0x0)) {
    cls_105643d0_new(puStack_14);
    cls_105a2a8c_new(puStack_14 + 0x10);
    *puStack_14 = 0x1059a3b4/*ROM*/;
    puStack_14[0x11] = 0x1059a454/*ROM*/;
    puStack_14[0x12] = 0;
    puStack_14[0x13] = 0;
    puStack_14[0x14] = 200;
    *(uint8_t *)(puStack_14 + 0x15) = 1;
    *(uint16_t *)((int)puStack_14 + 0x56) = 0;
    *(uint16_t *)(puStack_14 + 0x16) = 0;
    *(uint16_t *)((int)puStack_14 + 0x5a) = 0;
    *(uint16_t *)(puStack_14 + 0x17) = 0;
    *(uint16_t *)((int)puStack_14 + 0x5e) = 0;
    puStack_14[0x5e] = 0;
    puStack_14[0x5f] = 200;
    *(uint8_t *)(puStack_14 + 0x60) = 1;
    puStack_14[0x89] = 0;
    puStack_14[0x8a] = 200;
    *(uint8_t *)(puStack_14 + 0x8b) = 1;
    puStack_14[0xb5] = 200;
    *(uint8_t *)(puStack_14 + 0xb6) = 1;
    puStack_14[0xdf] = 0;
    puStack_14[0xe0] = 200;
    *(uint8_t *)(puStack_14 + 0xe1) = 1;
    puStack_14[0x146] = 200;
    *(uint8_t *)(puStack_14 + 0x147) = 1;
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x60),(char *)0x1059a46c/*ROM*/,param_3,param_4
                  );
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x6e),(char *)0x1059a46c/*ROM*/,param_3,param_4
                  );
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x7c),(char *)0x1059a46c/*ROM*/,param_3,param_4
                  );
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x8a),(char *)0x1059a46c/*ROM*/,param_3,param_4
                  );
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x98),(char *)0x1059a46c/*ROM*/,param_3,param_4
                  );
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x46;
    } while (-1 < iVar2);
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x181),(char *)0x1059a474/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x18b),(char *)0x1059a474/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x195),(char *)0x1059a474/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x19f),(char *)0x1059a474/*ROM*/,param_3,
                   param_4);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar2);
    iVar2 = 3;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x22d),(char *)0x1059a47c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x237),(char *)0x1059a47c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x241),(char *)0x1059a47c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x24b),(char *)0x1059a47c/*ROM*/,param_3,
                   param_4);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x28;
    } while (-1 < iVar2);
    format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + 0x2d9),(char *)0x1059a484/*ROM*/,param_3,param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + 0x2e3),(char *)0x1059a484/*ROM*/,param_3,param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + 0x2ed),(char *)0x1059a484/*ROM*/,param_3,param_4);
    format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + 0x2f7),(char *)0x1059a484/*ROM*/,param_3,param_4);
    iStack_10 = 1;
    iVar1 = 0;
    do {
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x385),(char *)0x1059a48c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x3ad),(char *)0x1059a48c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x3d5),(char *)0x1059a48c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x3fd),(char *)0x1059a48c/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar1 + 0x425),(char *)0x1059a48c/*ROM*/,param_3,
                   param_4);
      iVar1 = iVar1 + 200;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
    iStack_c = 1;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar2 + 0x51d),(char *)0x1059a494/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar2 + 0x545),(char *)0x1059a494/*ROM*/,param_3,
                   param_4);
      format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar2 + 0x56d),(char *)0x1059a494/*ROM*/,param_3,
                   param_4);
      iStack_c = iStack_c + -1;
      iVar1 = iVar2 + 0x78;
    } while (-1 < iStack_c);
    format_string_to_buffer_10545140((uint8_t *)((int)puStack_14 + iVar2 + 0x595),(char *)0x1059a494/*ROM*/,param_3,param_4)
    ;
  }
  return puStack_14;
}
