/* @k10d format_and_register_menu_item_103898da @ 0x103898da
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats a numeric parameter into a string and writes it to a fixed SDRAM address.
 * summary:
 *   The function initializes a local buffer, converts the input parameters into a formatted
 *   string (handling zero, null, and floating-point cases), and writes the result to SDRAM
 *   at 0x800197ab. It then calls helper functions to process the written data. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_register_menu_item_103898da(int param_1,uint param_2,void *param_3,void *param_4)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  uintptr_t sp;
  byte bVar4;
  byte bVar5;
  uint64_t uVar6;
  uint8_t uStack_9;
  
  alloc_one_byte_if_null_10409cf6(&uStack_9);
  pvVar2 = param_3;
  uVar1 = compute_pair_difference_10409f4a(&uStack_9,param_2,(uint)param_3);
  if (param_2 == 0) {
    pcVar3 = (char *)0x1055986c/*ROM*/;
  }
  else {
    bVar4 = 0;
    bVar5 = param_3 == 0;
    if ((bool)bVar5) {
      pcVar3 = (char *)0x10559874/*ROM*/;
    }
    else {
      pack_lens_fw_update_word(uVar1,0x461c3c00);
      if ((bVar4 | bVar5) == 1) {
        uVar6 = convert_signed_byte_to_unsigned(uVar1);
        pvVar2 = (void *)0x3fb99999;
        param_4 = (void *)0x9999999a;
        compute_lens_fw_block_offset_10544502((uint)((ulonglong)uVar6 >> 0x20),(void *)uVar6,0x3fb99999);
        if (bVar4 == 0) {
          pack_lens_fw_update_word(uVar1,0x41200000);
          if (bVar4 == 0) {
            pvVar2 = (void *)count_leading_zeros(uVar1);
            pcVar3 = (char *)0x10559898/*ROM*/;
          }
          else {
            pvVar2 = (void *)count_leading_zeros(uVar1);
            uVar1 = compute_float_division(uVar1,0x41200000);
            uVar1 = count_leading_zeros(uVar1);
            param_4 = (void *)(uVar1 % 10);
            pcVar3 = (char *)0x1055988c/*ROM*/;
          }
        }
        else {
          pcVar3 = (char *)0x10559884/*ROM*/;
        }
      }
      else {
        pcVar3 = (char *)0x1055987c/*ROM*/;
      }
    }
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197ab/*SDRAM*/,pcVar3,pvVar2,param_4);
  pvVar2 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar2,(byte *)0x800197ab/*SDRAM*/);
  set_struct_fields_and_flag(pvVar2,0x90,2);
  free_heap_if_flagged_10409d0a(&uStack_9,2);
  return;
}
