/* @k10d write_exposure_settings_block @ 0x104d46f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Writes a large block of exposure and metering settings from a parameter array into the
 *   per-mode settings sub-block.
 * summary:
 *   The function validates the parameter count, calculates a base offset for the current
 *   mode's settings sub-block (param_1 + 0x14), and performs numerous setting_set calls to
 *   store values from param_2. It processes specific fields like metering modes, EV
 *   offsets, and ISO-related values, using helper functions
 *   (compute_complement_of_helper_result, find_exposure_value_index, etc.) to compute
 *   derived settings. It also handles conditional logic for specific metering modes (e.g.,
 *   0xc, 0xd, 0xe) and updates a lookup table-based setting. Finally, it may trigger a
 *   callback (write_per_entry_buffer_blocks) if a specific condition is met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_exposure_settings_block(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint uVar8;
  int iVar9;
  uint32_t uVar10;
  uint uVar11;
  void *puVar12;
  int iVar13;
  uintptr_t sp;
  int *piVar14;
  uint8_t local_78 [12];
  int iStack_54;
  int iVar15;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  piVar14 = (int *)local_78;
  uVar6 = get_or_init_heap_block();
  if (*param_2 < 1) {
    return 0x83;
  }
  iVar1 = *param_2 + -1;
  uVar2 = param_2[1];
  iVar3 = *(int *)(param_1 + 0x14);
  iVar13 = iVar1 * 0x80;
  uVar7 = map_index_to_code_1045b55e(uVar6,uVar2 & 0xff);
  setting_set(iVar3,iVar13 + 0x174,uVar7);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x129,param_2[2] & 0xff);
  uVar8 = setting_get(*(int *)(param_1 + 0x14),0xb2);
  iVar9 = setting_get(*(int *)(param_1 + 0x14),0xb3);
  uVar7 = compute_complement_of_helper_result(uVar6,(int)(short)param_2[3],(int)(short)param_2[4],uVar8);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar10 = map_event_code_to_value(uVar6,uVar7);
  setting_set(iVar3,iVar13 + 0x12a,uVar10);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar7 = map_mode_code_to_index_1045b126(uVar6,uVar7);
  setting_set(iVar3,iVar13 + 299,uVar7);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar11 = find_exposure_value_index(uVar6,(short)param_2[5],(int)(short)param_2[6],uVar8);
  setting_set(iVar3,iVar13 + 0x178,uVar11);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x17a,param_2[7] & 0xff);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar7 = quantize_exposure_value(uVar6,param_2[8] & 0xffff,param_2[9] & 0xffff,uVar8);
  setting_set(iVar3,iVar13 + 0x17b,uVar7);
  if ((param_2[7] & 0xffU) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = param_2[10] & 0xff;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x17c,uVar11);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x128,param_2[0xb] & 0xff);
  uVar11 = param_2[0xc] & 0xff;
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x16b,uVar11);
  if (uVar11 == 1) {
    iVar3 = 0x16c;
  }
  else if (uVar11 == 2) {
    iVar3 = 0x16d;
  }
  else if (uVar11 == 3) {
    iVar3 = 0x16e;
  }
  else {
    if (uVar11 != 4) goto LAB_104d4914;
    iVar3 = 0x16f;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar3 + iVar13,param_2[0xd] & 0xff);
LAB_104d4914:
  iStack_54 = 0xff;
  bStack_11 = 0;
  bStack_10 = 0;
  bStack_f = 0;
  uVar11 = param_2[0xe];
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  if (uVar11 != 0) {
    iStack_54 = map_keycode_to_index(uVar6,uVar11 & 0xffff);
    *piVar14 = (int)&bStack_11;
    piVar14[1] = (int)&bStack_f;
    piVar14[2] = (int)&bStack_10;
    lookup_three_byte_table_entry_1045a78c(uVar6,iStack_54,iVar9,uVar8,(uint8_t *)*piVar14,(uint8_t *)piVar14[1],
                 (uint8_t *)piVar14[2]);
  }
  bStack_e = 0;
  bStack_c = 0;
  bStack_d = 0;
  if (uVar4 != 0) {
    iVar3 = map_keycode_to_index(uVar6,uVar4 & 0xffff);
    *piVar14 = (int)&bStack_e;
    piVar14[1] = (int)&bStack_c;
    piVar14[2] = (int)&bStack_d;
    lookup_three_byte_table_entry_1045a814(uVar6,iVar3,iVar9,uVar8,(uint8_t *)*piVar14,(uint8_t *)piVar14[1],
                 (uint8_t *)piVar14[2]);
  }
  bStack_b = 0;
  bStack_9 = 0;
  bStack_a = 0;
  if (uVar5 != 0) {
    iVar3 = map_keycode_to_index(uVar6,uVar5 & 0xffff);
    *piVar14 = (int)&bStack_b;
    piVar14[1] = (int)&bStack_9;
    piVar14[2] = (int)&bStack_a;
    lookup_three_byte_table_entry_1045a78c(uVar6,iVar3,iVar9,uVar8,(uint8_t *)*piVar14,(uint8_t *)piVar14[1],
                 (uint8_t *)piVar14[2]);
  }
  if ((uVar2 & 0xff) == 2) {
    if (uVar11 != 0) {
      setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x179,iStack_54);
    }
  }
  else {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 300,(uint)bStack_11);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x12f,(uint)bStack_10);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x132,(uint)bStack_f);
  }
  if (uVar4 != 0) {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x12d,(uint)bStack_e);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x130,(uint)bStack_d);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x133,(uint)bStack_c);
  }
  if (uVar5 != 0) {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x12e,(uint)bStack_b);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x131,(uint)bStack_a);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x134,(uint)bStack_9);
  }
  uVar2 = param_2[0x11] & 0xff;
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x135,uVar2);
  if (((uVar2 == 0xc) || (uVar2 == 0xd)) || (uVar2 == 0xe)) {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x138,uVar2);
  }
  else if (((uVar2 == 4) || (uVar2 == 5)) || (uVar2 == 6)) {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x136,uVar2);
  }
  iVar15 = 0x83;
  iVar3 = 0;
  iVar9 = 0;
  puVar12 = &DAT_105b9d04/*ROM*/;
  do {
    if (*(uint *)(puVar12 + 0xb4) == uVar2) {
      setting_set(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9dbc/*ROM*/ + iVar3 * 0xc) + iVar13,
                   param_2[0x12] & 0xff);
      setting_set(*(int *)(param_1 + 0x14),*(int *)(&DAT_105b9dc0/*ROM*/ + iVar3 * 0xc) + iVar13,
                   param_2[0x13] & 0xff);
      iVar15 = 0;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 0xc;
    puVar12 = puVar12 + 0xc;
  } while (iVar9 < 0xb4);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x161,param_2[0x14] & 0xff);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x162,param_2[0x15] & 0xff);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x163,param_2[0x16] & 0xff);
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x164,param_2[0x17] & 0xff);
  uVar2 = param_2[0x18];
  setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x160,uVar2 & 0xff);
  uVar8 = param_2[0x1a];
  uVar11 = param_2[0x1b];
  if ((uVar2 & 0xff) == 0) {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x168,param_2[0x19] & 0xffU);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x169,uVar8 & 0xff);
    iVar3 = 0x16a;
  }
  else {
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x165,param_2[0x19] & 0xffU);
    setting_set(*(int *)(param_1 + 0x14),iVar13 + 0x166,uVar8 & 0xff);
    iVar3 = 0x167;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar3 + iVar13,uVar11 & 0xff);
  uVar6 = find_index_in_sorted_table(uVar6,param_2[0x1c] & 0xffff);
  iVar3 = setting_get(*(int *)(param_1 + 0x14),iVar13 + 0x138);
  if (iVar3 == 0xd) {
    iVar3 = 0x156;
  }
  else if (iVar3 == 0xe) {
    iVar3 = 0x159;
  }
  else {
    iVar3 = 0x153;
  }
  setting_set(*(int *)(param_1 + 0x14),iVar3 + iVar13,uVar6);
  if (iVar15 == 0) {
    iVar3 = get_or_create_singleton_object_10485138();
    write_per_entry_buffer_blocks(*(uint32_t *)(iVar3 + 0x24),iVar1);
  }
  return iVar15;
}
