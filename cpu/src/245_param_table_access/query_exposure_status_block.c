/* @k10d query_exposure_status_block @ 0x104d4d1a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Populates a 28-word status structure with current exposure, metering, and lens state
 *   values.
 * summary:
 *   The function reads a large set of status codes (0x128-0x17c) from a state object via a
 *   virtual call at 0x1051db2e. It uses setting_get to retrieve configuration values (0xb2,
 *   0xb3) to conditionally select specific status codes or transform values using helper
 *   functions like map_mode_index_to_code_1045b524 and
 *   lookup_two_byte_table_entry_1045a690. The results are written sequentially into the
 *   array pointed to by param_4, with the count of valid entries set in param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d4d48) overlaps instruction at (ram,0x104d4d46)
    */

uint32_t query_exposure_status_block(int param_1,int param_2,uint32_t *param_3,int *param_4)

{
  void *puVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uStack_28;
  int iStack_18;
  int iStack_14;
  
  uVar2 = get_or_init_heap_block();
  iVar3 = get_or_create_singleton_object_10485138();
  if (param_2 < 1) {
    *param_3 = 0;
    return 0x83;
  }
  uVar9 = *(uint32_t *)(iVar3 + 0x24);
  param_2 = param_2 + -1;
  iVar3 = setting_get(*(int *)(param_1 + 0x14),0xb2);
  uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x174,param_2);
  iVar5 = map_mode_index_to_code_1045b524(uVar2,uVar4);
  *param_4 = iVar5;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x129,param_2);
  param_4[1] = iVar6;
  if (iVar3 == 0) {
    uVar4 = 0x12a;
  }
  else {
    uVar4 = 299;
  }
  uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar4,param_2);
  uVar4 = map_index_to_code_value(uVar2,uVar4);
  iVar6 = lookup_exposure_compensation_table(uVar2,iVar3,uVar4);
  param_4[2] = iVar6;
  param_4[3] = 0x100;
  uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x178,param_2);
  iVar6 = lookup_two_byte_table_entry_1045a89c(uVar2,iVar3,uVar4);
  param_4[4] = iVar6;
  param_4[5] = 10;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x17a,param_2);
  param_4[6] = iVar6;
  uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x17b,param_2);
  iVar6 = map_index_to_offset_1045a954(uVar2,1,uVar4);
  param_4[7] = iVar6;
  param_4[8] = 10;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x17c,param_2);
  param_4[9] = iVar6;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x128,param_2);
  param_4[10] = iVar6;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x16b,param_2);
  param_4[0xb] = iVar6;
  if (iVar6 == 1) {
    uVar4 = 0x16c;
  }
  else if (iVar6 == 2) {
    uVar4 = 0x16d;
  }
  else if (iVar6 == 3) {
    uVar4 = 0x16e;
  }
  else {
    uVar4 = 0x16f;
  }
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar4,param_2);
  param_4[0xc] = iVar6;
  iVar6 = setting_get(*(int *)(param_1 + 0x14),0xb3);
  if (iVar5 == 2) {
    iVar7 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x179,param_2);
    iVar5 = 1;
  }
  else {
    if (iVar6 == 0) {
      uVar4 = 300;
    }
    else if (iVar3 == 0) {
      uVar4 = 0x132;
    }
    else {
      uVar4 = 0x12f;
    }
    uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar4,param_2);
    iVar7 = read_byte_from_rodata_table(uVar2,uVar4);
    iVar5 = iVar6;
    if (iVar7 == 0xff) {
      iVar5 = 0;
      goto code_r0x104d4f32;
    }
  }
  iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,iVar7,iVar5,iVar3);
code_r0x104d4f32:
  param_4[0xd] = iVar5;
  if (iVar6 == 0) {
    uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x12d,param_2);
    uStack_28 = read_byte_from_rodata_table(uVar2,uVar4);
    uVar4 = 0x12e;
  }
  else if (iVar3 == 0) {
    uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x133);
    uStack_28 = read_byte_from_rodata_table(uVar2,uVar4);
    uVar4 = 0x134;
  }
  else {
    uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x130,param_2);
    uStack_28 = read_byte_from_rodata_table(uVar2,uVar4);
    uVar4 = 0x131;
  }
  uVar4 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar4,param_2);
  uVar4 = read_byte_from_rodata_table(uVar2,uVar4);
  iVar5 = lookup_two_byte_table_entry_1045a690(uVar2,uStack_28,iVar6,iVar3);
  param_4[0xe] = iVar5;
  iVar3 = lookup_two_byte_table_entry_1045a690(uVar2,uVar4,iVar6,iVar3);
  param_4[0xf] = iVar3;
  iVar6 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x135,param_2);
  param_4[0x10] = iVar6;
  uVar4 = 0x83;
  iVar5 = 0;
  iVar3 = 0;
  puVar1 = &DAT_105b9d04/*ROM*/;
  do {
    if (*(int *)(puVar1 + 0xb4) == iVar6) {
      iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,*(uint32_t *)(&DAT_105b9dbc/*ROM*/ + iVar5 * 0xc),param_2);
      param_4[0x11] = iVar3;
      iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,*(uint32_t *)(&DAT_105b9dc0/*ROM*/ + iVar5 * 0xc),param_2);
      param_4[0x12] = iVar3;
      uVar4 = 0;
      break;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0xc;
    puVar1 = puVar1 + 0xc;
  } while (iVar3 < 0xb4);
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x161,param_2);
  param_4[0x13] = iVar3;
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x162,param_2);
  param_4[0x14] = iVar3;
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x163,param_2);
  param_4[0x15] = iVar3;
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x164,param_2);
  param_4[0x16] = iVar3;
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x160,param_2);
  param_4[0x17] = iVar3;
  if (iVar3 == 0) {
    iStack_14 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x168);
    iStack_18 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x169,param_2);
    uVar8 = 0x16a;
  }
  else {
    iStack_14 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x165,param_2);
    iStack_18 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x166,param_2);
    uVar8 = 0x167;
  }
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar8,param_2);
  param_4[0x18] = iStack_14;
  param_4[0x19] = iStack_18;
  param_4[0x1a] = iVar3;
  iVar3 = (*(code *)0x1051db2e/*ROM*/)(uVar9,0x138,param_2);
  if (iVar3 == 0xd) {
    uVar8 = 0x156;
  }
  else if (iVar3 == 0xe) {
    uVar8 = 0x159;
  }
  else {
    uVar8 = 0x153;
  }
  uVar9 = (*(code *)0x1051db2e/*ROM*/)(uVar9,uVar8,param_2);
  iVar3 = read_two_byte_table_entry_1045b5f2(uVar2,uVar9);
  param_4[0x1b] = iVar3;
  *param_3 = 0x1c;
  return uVar4;
}
