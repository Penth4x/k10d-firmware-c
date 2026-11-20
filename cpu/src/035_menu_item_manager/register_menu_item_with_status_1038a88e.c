/* @k10d register_menu_item_with_status_1038a88e @ 0x1038a88e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of four string pointers based on computed flags and writes the string plus
 *   data to a fixed memory location.
 * summary:
 *   The function initializes a local object via alloc_one_byte_if_null_10409cf6 and
 *   processes parameters 3 and 4 using compute_pair_difference_10409fb6. It selects one of
 *   four string pointers (0x10559938, 0x10559940, 0x10559948, 0x10559950) based on the
 *   results and calls format_string_to_buffer_10545140 to write the selected string and
 *   associated data to the memory address 0x800197c8. If param_2 is 2, it performs
 *   additional virtual calls and updates via glyph_draw and set_struct_fields_and_flag
 *   before cleaning up the local object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_status_1038a88e(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uintptr_t sp;
  char cVar8;
  char cVar9;
  uint64_t uVar10;
  uint8_t uStack_9;
  
  uVar4 = param_4;
  iVar1 = menu_item_register(param_1);
  pvVar2 = (void *)menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,0);
  alloc_one_byte_if_null_10409cf6(&uStack_9);
  uVar3 = compute_pair_difference_10409fb6(&uStack_9,param_3,param_4);
  cVar8 = '\0';
  cVar9 = param_3 == 0;
  if ((bool)cVar9) {
    pcVar5 = (char *)0x10559938/*ROM*/;
    uVar10 = CONCAT44(param_4,uVar4);
  }
  else {
    uVar10 = convert_signed_byte_to_unsigned(uVar3);
    uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar6 = 0x4023cccc;
    uVar7 = 0xcccccccd;
    compute_lens_fw_block_offset_10544502(uVar4,(void *)uVar10,0x4023cccc);
    if (cVar8 == '\x01') {
      uVar6 = 0xc023cccc;
      uVar7 = 0xcccccccd;
      compute_lens_fw_block_offset_10544502(uVar4,(void *)uVar10,0xc023cccc);
      if (cVar8 == '\0' && cVar9 == '\0') {
        pcVar5 = (char *)0x10559950/*ROM*/;
      }
      else {
        pcVar5 = (char *)0x10559948/*ROM*/;
        uVar10 = CONCAT44(uVar6,uVar7);
      }
    }
    else {
      pcVar5 = (char *)0x10559940/*ROM*/;
      uVar10 = CONCAT44(uVar6,uVar7);
    }
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197c8/*SDRAM*/,pcVar5,(void *)((ulonglong)uVar10 >> 0x20),(void *)uVar10);
  if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
              ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
    glyph_draw(pvVar2,(byte *)0x800197c8/*SDRAM*/);
    set_struct_fields_and_flag(pvVar2,0x60,2);
  }
  free_heap_if_flagged_10409d0a(&uStack_9,2);
  return;
}
