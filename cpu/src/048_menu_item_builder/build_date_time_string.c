/* @k10d build_date_time_string @ 0x103ad34e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 048_menu_item_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_date_time_string(void *param_1)

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
    pcVar8 = (char *)0x10565834/*ROM*/;
    *puVar11 = (uint)pvVar4;
LAB_103ad44c:
    format_string_to_buffer_10545140(abStack_27,pcVar8,pvVar2,pvVar3);
    pvVar9 = pvVar2;
    pvVar10 = pvVar3;
  }
  else {
    if (iVar1 == 1) {
      pcVar8 = (char *)0x10565844/*ROM*/;
      *puVar11 = (uint)pvVar2;
      pvVar2 = pvVar3;
      pvVar3 = pvVar4;
      goto LAB_103ad44c;
    }
    if (iVar1 == 2) {
      pcVar8 = (char *)0x10565854/*ROM*/;
      *puVar11 = (uint)pvVar2;
      pvVar2 = pvVar4;
      goto LAB_103ad44c;
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
    pcVar8 = (char *)0x10565874/*ROM*/;
  }
  else {
    if (iVar5 != 1) goto LAB_103ad55c;
    iVar5 = (*(code *)0x1045c816/*ROM*/)(auStack_10);
    if (iVar5 == 0) {
      iVar5 = (*(code *)0x1045c816/*ROM*/)(auStack_10);
      if (iVar5 == 0) {
        format_string_to_buffer_10545140(abStack_27 + 0x14,(char *)0x10565884/*ROM*/,pvVar9,pvVar10);
      }
    }
    else {
      format_string_to_buffer_10545140(abStack_27 + 0x14,(char *)0x10565880/*ROM*/,pvVar9,pvVar10);
    }
    pcVar8 = (char *)0x10565888/*ROM*/;
    *puVar11 = (uint)(abStack_27 + 0x14);
    pvVar2 = (void *)(uVar6 & 0xff);
  }
  format_string_to_buffer_10545140(abStack_27 + 0xb,pcVar8,pvVar2,(void *)(uint)bVar7);
LAB_103ad55c:
  pvVar2 = (void *)menu_item_register(iVar1);
  glyph_draw(pvVar2,abStack_27 + 0xb);
  iVar1 = menu_item_register(iVar1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
