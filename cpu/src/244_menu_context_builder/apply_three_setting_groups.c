/* @k10d apply_three_setting_groups @ 0x104d36e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 244_menu_context_builder (unit names are model-proposed)
 * purpose:
 *   Reads three parameter groups from a source object and writes them to the settings block
 *   via setting_set.
 * summary:
 *   The function creates a temporary object, populates it from param_1, and extracts three
 *   sets of byte values (param_2, param_3, param_4) using helper functions. It then writes
 *   these values into the settings block pointed to by *(param_1 + 0x14) using setting_set,
 *   with indices offset by a calculated base value (iVar1 * 0x80). The specific indices
 *   suggest writing to multiple related settings (e.g., 4,7,10 for the first group).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t apply_three_setting_groups(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t local_6c [12];
  int iStack_50;
  cls_105a6d8c acStack_30 [7];
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  piVar7 = (int *)local_6c;
  cls_105a6d8c_new(acStack_30);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_30);
  iVar1 = extract_field_from_struct_1045ff0e(acStack_30,0x2b);
  iVar2 = extract_field_from_struct_1045ff0e(acStack_30,0);
  uVar3 = extract_field_from_struct_1045ff0e(acStack_30,3);
  uVar3 = uVar3 & 0xff;
  uVar4 = extract_field_from_struct_1045ff0e(acStack_30,0x29);
  uVar4 = uVar4 & 0xff;
  uVar5 = get_or_init_heap_block();
  bStack_11 = 0;
  iStack_50 = 0xff;
  bStack_f = 0;
  bStack_10 = 0;
  if (0 < (int)param_2) {
    iStack_50 = map_keycode_to_index(uVar5,param_2 & 0xffff);
    *piVar7 = (int)&bStack_11;
    piVar7[1] = (int)&bStack_f;
    piVar7[2] = (int)&bStack_10;
    lookup_three_byte_table_entry_1045a78c(uVar5,iStack_50,uVar4,uVar3,(uint8_t *)*piVar7,(uint8_t *)piVar7[1],
                 (uint8_t *)piVar7[2]);
  }
  bStack_e = 0;
  bStack_c = 0;
  bStack_d = 0;
  if (0 < (int)param_3) {
    iVar6 = map_keycode_to_index(uVar5,param_3 & 0xffff);
    *piVar7 = (int)&bStack_e;
    piVar7[1] = (int)&bStack_c;
    piVar7[2] = (int)&bStack_d;
    lookup_three_byte_table_entry_1045a814(uVar5,iVar6,uVar4,uVar3,(uint8_t *)*piVar7,(uint8_t *)piVar7[1],
                 (uint8_t *)piVar7[2]);
  }
  bStack_b = 0;
  bStack_9 = 0;
  bStack_a = 0;
  if (0 < (int)param_4) {
    iVar6 = map_keycode_to_index(uVar5,param_4 & 0xffff);
    *piVar7 = (int)&bStack_b;
    piVar7[1] = (int)&bStack_9;
    piVar7[2] = (int)&bStack_a;
    lookup_three_byte_table_entry_1045a78c(uVar5,iVar6,uVar4,uVar3,(uint8_t *)*piVar7,(uint8_t *)piVar7[1],
                 (uint8_t *)piVar7[2]);
  }
  if (iVar1 < 1) {
    if (iVar2 == 0xf) {
      if (0 < (int)param_2) {
        setting_set(*(int *)(param_1 + 0x14),0x69,iStack_50);
      }
    }
    else {
      setting_set(*(int *)(param_1 + 0x14),4,(uint)bStack_11);
      setting_set(*(int *)(param_1 + 0x14),7,(uint)bStack_10);
      setting_set(*(int *)(param_1 + 0x14),10,(uint)bStack_f);
    }
    if (0 < (int)param_3) {
      setting_set(*(int *)(param_1 + 0x14),5,(uint)bStack_e);
      setting_set(*(int *)(param_1 + 0x14),8,(uint)bStack_d);
      setting_set(*(int *)(param_1 + 0x14),0xb,(uint)bStack_c);
    }
    if (0 < (int)param_4) {
      setting_set(*(int *)(param_1 + 0x14),6,(uint)bStack_b);
      setting_set(*(int *)(param_1 + 0x14),9,(uint)bStack_a);
      setting_set(*(int *)(param_1 + 0x14),0xc,(uint)bStack_9);
    }
  }
  else {
    iVar1 = (iVar1 + -1) * 0x80;
    if (iVar2 == 0xf) {
      if (0 < (int)param_2) {
        setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x179,iStack_50);
      }
    }
    else {
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 300,(uint)bStack_11);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x12f,(uint)bStack_10);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x132,(uint)bStack_f);
    }
    if (0 < (int)param_3) {
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x12d,(uint)bStack_e);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x130,(uint)bStack_d);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x133,(uint)bStack_c);
    }
    if (0 < (int)param_4) {
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x12e,(uint)bStack_b);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x131,(uint)bStack_a);
      setting_set(*(int *)(param_1 + 0x14),iVar1 + 0x134,(uint)bStack_9);
    }
  }
  cls_105a6d8c_delete(acStack_30,2);
  return 0;
}
