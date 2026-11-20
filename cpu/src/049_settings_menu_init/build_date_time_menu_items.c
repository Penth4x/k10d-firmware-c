/* @k10d build_date_time_menu_items @ 0x103b1898
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Builds a formatted date and time string from a date/time object and appends it to a
 *   buffer.
 * summary:
 *   The function initializes a date/time object (alloc_and_init_small_struct_1045c524) and
 *   retrieves its components (year, month, day, hour, minute, second) via helper functions.
 *   It formats these values into a string buffer (abStack_27) using a helper
 *   (format_string_to_buffer_10545140) with format strings like "00/00/00" and "00:00:00".
 *   The resulting string is appended to a buffer obtained from menu_item_register, and the
 *   date/time object is cleaned up (free_heap_if_flag_set_1045c56c).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_date_time_menu_items(void *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  uintptr_t sp;
  uint *puVar11;
  uint8_t auStackY_60 [3];
  byte abStack_27 [23];
  uint16_t auStack_10 [4];
  byte bVar7;
  
  puVar11 = (uint *)auStackY_60;
  pvVar9 = (void *)0x1;
  pvVar10 = (void *)0x1;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
  iVar1 = get_or_create_singleton_object_1046d20c();
  collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),auStack_10);
  abStack_27[0] = 0x30;
  abStack_27[1] = 0x30;
  abStack_27[2] = 0x30;
  abStack_27[3] = 0x30;
  abStack_27[4] = 0x2f;
  abStack_27[5] = 0x30;
  abStack_27[6] = 0x30;
  abStack_27[7] = 0x2f;
  abStack_27[8] = 0x30;
  abStack_27[9] = 0x30;
  abStack_27[10] = 0;
  pvVar2 = (void *)read_first_word_1045c66c(auStack_10);
  bVar7 = read_byte_at_offset_two(auStack_10);
  pvVar3 = (void *)(uint)bVar7;
  bVar7 = read_byte_at_offset_three(auStack_10);
  pvVar4 = (void *)(uint)bVar7;
  iVar1 = get_setting_0xa3(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 0) {
    pcVar8 = (char *)0x10565e54/*ROM*/;
    *puVar11 = (uint)pvVar4;
LAB_103b1996:
    format_string_to_buffer_10545140(abStack_27,pcVar8,pvVar2,pvVar3);
    pvVar9 = pvVar2;
    pvVar10 = pvVar3;
  }
  else {
    if (iVar1 == 1) {
      pcVar8 = (char *)0x10565e64/*ROM*/;
      *puVar11 = (uint)pvVar2;
      pvVar2 = pvVar3;
      pvVar3 = pvVar4;
      goto LAB_103b1996;
    }
    if (iVar1 == 2) {
      pcVar8 = (char *)0x10565e74/*ROM*/;
      *puVar11 = (uint)pvVar2;
      pvVar2 = pvVar4;
      goto LAB_103b1996;
    }
  }
  iVar1 = (int)param_1 + 8;
  pvVar2 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar2,abStack_27);
  abStack_27[0xb] = 0x30;
  abStack_27[0xc] = 0x30;
  abStack_27[0xd] = 0x3a;
  abStack_27[0xe] = 0x30;
  abStack_27[0x10] = 0x20;
  abStack_27[0x11] = 0x41;
  abStack_27[0xf] = 0x30;
  abStack_27[0x12] = 0x4d;
  abStack_27[0x13] = 0;
  abStack_27[0x14] = 0x30;
  abStack_27[0x15] = 0x30;
  abStack_27[0x16] = 0;
  bVar7 = read_byte_at_offset_5(auStack_10);
  pvVar2 = (void *)(uint)bVar7;
  iVar5 = (*(code *)0x1045c808/*ROM*/)(auStack_10);
  if (iVar5 == 0) {
    uVar6 = 0xc;
  }
  else {
    uVar6 = (*(code *)0x1045c808/*ROM*/)(auStack_10);
  }
  bVar7 = read_byte_at_offset_six(auStack_10);
  iVar5 = get_setting_0xa4(*(int *)((int)param_1 + 0x28));
  if (iVar5 == 0) {
    pcVar8 = (char *)0x10565e94/*ROM*/;
  }
  else {
    if (iVar5 != 1) goto LAB_103b1aa6;
    iVar5 = (*(code *)0x1045c816/*ROM*/)(auStack_10);
    if (iVar5 == 0) {
      iVar5 = (*(code *)0x1045c816/*ROM*/)(auStack_10);
      if (iVar5 == 0) {
        format_string_to_buffer_10545140(abStack_27 + 0x14,(char *)0x10565ea4/*ROM*/,pvVar9,pvVar10);
      }
    }
    else {
      format_string_to_buffer_10545140(abStack_27 + 0x14,(char *)0x10565ea0/*ROM*/,pvVar9,pvVar10);
    }
    pcVar8 = (char *)0x10565ea8/*ROM*/;
    *puVar11 = (uint)(abStack_27 + 0x14);
    pvVar2 = (void *)(uVar6 & 0xff);
  }
  format_string_to_buffer_10545140(abStack_27 + 0xb,pcVar8,pvVar2,(void *)(uint)bVar7);
LAB_103b1aa6:
  pvVar2 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar2,abStack_27 + 0xb);
  iVar1 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
