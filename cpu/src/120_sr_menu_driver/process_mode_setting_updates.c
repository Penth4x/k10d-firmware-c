/* @k10d process_mode_setting_updates @ 0x10434410
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Reads or writes camera setting values into a mode object and persists them via
 *   setting_set.
 * summary:
 *   The function branches on param_2. If zero, it instantiates a cls_105a6d8c object,
 *   queries virtual slots 2 and 3 for specific indices, and writes a 5-byte status block
 *   into param_1 at offset 0x51. If non-zero, it reads byte triplets from param_1 offsets
 *   0x51 and 0x56, processes them via lookup_three_byte_table_entry_1045a78c, and calls
 *   setting_set to persist the results to indices 4, 7, 10, 300, 319, and 314. It clears
 *   the source flags after processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_mode_setting_updates(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint32_t uVar9;
  uint8_t *puVar10;
  uintptr_t sp;
  int *piVar11;
  uint8_t local_54 [12];
  cls_105a6d8c acStack_28 [7];
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  piVar11 = (int *)local_54;
  if (param_2 == 0) {
    cls_105a6d8c_new(acStack_28);
    copy_status_block_bytes(*(int *)(param_1 + 0x30),acStack_28);
    uVar4 = extract_field_from_struct_1045ff0e(acStack_28,0);
    uVar4 = uVar4 & 0xff;
    if (((uVar4 != 0xf) && (uVar4 != 0xd)) && (uVar4 != 0xe)) {
      uVar4 = extract_field_from_struct_1045ff0e(acStack_28,0x2b);
      uVar5 = extract_field_from_struct_1045ff0e(acStack_28,0xb);
      iVar6 = extract_field_from_struct_1045ff0e(acStack_28,3);
      iVar7 = extract_field_from_struct_1045ff0e(acStack_28,0x29);
      iVar8 = check_field_bit_or_string(acStack_28,0x2a);
      if (iVar8 == 0) {
        uVar5 = uVar5 & 0xff;
      }
      else {
        uVar5 = 0xff;
      }
      puVar10 = (uint8_t *)(param_1 + 0x51 + (uVar4 & 0xff) * 5);
      puVar10[1] = (char)uVar5;
      puVar10[2] = (char)iVar6;
      puVar10[3] = (char)iVar7;
      *puVar10 = 1;
      bStack_c = 0;
      iVar6 = read_byte_from_table_104bb17c(*(uint32_t *)(param_1 + 0x28),uVar4 & 0xff,&bStack_c);
      if ((iVar6 != 0) && (bStack_c != uVar5)) {
        puVar10[4] = 1;
      }
    }
    cls_105a6d8c_delete(acStack_28,2);
  }
  else {
    bStack_b = 0;
    bStack_a = 0;
    bStack_9 = 0;
    uVar9 = get_or_init_heap_block();
    if ((*(char *)(param_1 + 0x51) != '\0') && (*(char *)(param_1 + 0x55) != '\0')) {
      bVar1 = *(byte *)(param_1 + 0x52);
      if (bVar1 == 0xff) {
        bStack_b = 0;
        bStack_a = 0;
        bStack_9 = 0;
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x53);
        bVar3 = *(byte *)(param_1 + 0x54);
        *piVar11 = (int)&bStack_b;
        piVar11[1] = (int)&bStack_9;
        piVar11[2] = (int)&bStack_a;
        lookup_three_byte_table_entry_1045a78c(uVar9,(uint)bVar1,(uint)bVar3,(uint)bVar2,(uint8_t *)*piVar11,
                     (uint8_t *)piVar11[1],(uint8_t *)piVar11[2]);
      }
      setting_set(*(int *)(param_1 + 0xc),4,(uint)bStack_b);
      setting_set(*(int *)(param_1 + 0xc),7,(uint)bStack_a);
      setting_set(*(int *)(param_1 + 0xc),10,(uint)bStack_9);
      *(uint8_t *)(param_1 + 0x55) = 0;
    }
    if ((*(char *)(param_1 + 0x56) != '\0') && (*(char *)(param_1 + 0x5a) != '\0')) {
      if (*(char *)(param_1 + 0x57) == -1) {
        bStack_b = 0;
        bStack_a = 0;
        bStack_9 = 0;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x57);
        bVar2 = *(byte *)(param_1 + 0x58);
        bVar3 = *(byte *)(param_1 + 0x59);
        *piVar11 = (int)&bStack_b;
        piVar11[1] = (int)&bStack_9;
        piVar11[2] = (int)&bStack_a;
        lookup_three_byte_table_entry_1045a78c(uVar9,(uint)bVar1,(uint)bVar3,(uint)bVar2,(uint8_t *)*piVar11,
                     (uint8_t *)piVar11[1],(uint8_t *)piVar11[2]);
      }
      setting_set(*(int *)(param_1 + 0xc),300,(uint)bStack_b);
      setting_set(*(int *)(param_1 + 0xc),0x12f,(uint)bStack_a);
      setting_set(*(int *)(param_1 + 0xc),0x132,(uint)bStack_9);
      *(uint8_t *)(param_1 + 0x5a) = 0;
    }
  }
  return;
}
