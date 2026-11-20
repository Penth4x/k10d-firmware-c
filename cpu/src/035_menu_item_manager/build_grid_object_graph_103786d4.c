/* @k10d build_grid_object_graph_103786d4 @ 0x103786d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10378f7a) overlaps instruction at (ram,0x10378f78)
    */

void build_grid_object_graph_103786d4(cls_10558830 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  uint32_t uVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  int iVar21;
  uint8_t *puVar22;
  int iVar23;
  int iVar24;
  uint8_t *puVar25;
  int iVar26;
  uint8_t *puVar27;
  int iVar28;
  uintptr_t sp;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2d4;
  uint8_t *puStack_2cc;
  uint8_t *puStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  uint8_t *puStack_2bc;
  uint8_t *puStack_2b8;
  uint8_t *puStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  uint8_t *puStack_2a0;
  uint8_t *puStack_29c;
  uint8_t *puStack_298;
  int iStack_28c;
  uint32_t auStack_224 [9];
  uint32_t auStack_200 [9];
  int aiStack_1dc [4];
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  uint32_t auStack_1b8 [9];
  uint32_t auStack_194 [18];
  uint32_t auStack_14c [9];
  int aiStack_128 [4];
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int aiStack_104 [9];
  uint32_t auStack_e0 [9];
  uint32_t auStack_bc [9];
  uint32_t auStack_98 [9];
  uint32_t auStack_74 [9];
  uint32_t auStack_50 [9];
  uint32_t auStack_2c [2];
  uint8_t auStack_24 [28];
  
  puVar27 = &stack0xfffffff8;
  *(uint32_t *)&param_1->field_0x44 = 0x20;
  param_1->field_0x48 = 0x18;
  param_1->field_0x4c = 0xc0;
  param_1->field_0x50 = 0x80;
  param_1->field_0x54 = 0x20;
  param_1->field_0x58 = 0;
  param_1->field_0x5c = 3;
  param_1->field_0x60 = 3;
  param_1->field_0x64 = 9;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055c0ac/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010001,(void *)(0),(void *)(0));
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar23 = 0x3010002;
    puVar25 = auStack_24;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23), (void *)(*(int *)&param_1->field_0x44 + param_1->field_0x4c * (iVar21 % (int)param_1->field_0x60) & 0xffff), (void *)(param_1->field_0x48 + param_1->field_0x50 * (iVar21 / (int)param_1->field_0x60) & 0xffff)));
      *(uint32_t *)(puVar25 + -0x200) = uVar3;
      iVar23 = iVar23 + 1;
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iStack_2f0 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar21 = 0x301000b;
    puVar25 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar21),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar25 + -0x1f8) = uVar3;
      iVar21 = iVar21 + 1;
      iStack_2f0 = iStack_2f0 + 1;
      puVar25 = puVar25 + 4;
    } while (iStack_2f0 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    puVar22 = auStack_24;
    puVar25 = puVar27;
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar25 + -0x1f8),*(uint32_t *)(puVar22 + -0x200));
      puVar25 = puVar25 + 4;
      iVar21 = iVar21 + 1;
      puVar22 = puVar22 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar23 = 0x3010014;
    puVar25 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar25 + -0x1d4) = uVar3;
      iVar23 = iVar23 + 1;
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar25 + -0x1d4),*(uint32_t *)(puVar25 + -0x1f8));
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar23 = 0x301001d;
    puVar25 = puVar27;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23), (void *)(*(int *)&param_1->field_0x44 + param_1->field_0x4c * (iVar21 % (int)param_1->field_0x60) & 0xffff), (void *)(param_1->field_0x48 + param_1->field_0x50 * (iVar21 / (int)param_1->field_0x60) & 0xffff)));
      *(uint32_t *)(puVar25 + -0x1b0) = uVar3;
      iVar23 = iVar23 + 1;
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar23 = 0x3010026;
    puStack_2bc = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_2bc + -0x18c) = uVar3;
      puStack_2bc = puStack_2bc + 4;
      iVar21 = iVar21 + 1;
      iVar23 = iVar23 + 1;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar25 + -0x18c),*(uint32_t *)(puVar25 + -0x1b0));
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = param_1->field_0x50;
  iVar28 = param_1->field_0x58;
  iVar23 = param_1->field_0x48;
  iVar24 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar26 = 0x301002f;
    puStack_2cc = puVar27;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar26), (void *)(*(int *)&param_1->field_0x44 + param_1->field_0x4c * (iVar24 % (int)param_1->field_0x60) + 0x50U & 0xffff),(void *)(param_1->field_0x50 * (iVar24 / (int)param_1->field_0x60) + iVar23 + (iVar21 - iVar28) / 2 + -0x18 & 0xffff)));
      *(uint32_t *)(puStack_2cc + -0x168) = uVar3;
      iVar26 = iVar26 + 1;
      puStack_2cc = puStack_2cc + 4;
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)param_1->field_0x64);
  }
  iStack_2a4 = 0;
  if (0 < (int)param_1->field_0x64) {
    iStack_2c4 = 0x3010038;
    puStack_298 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2c4),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_298 + -0x144) = uVar3;
      iStack_2a4 = iStack_2a4 + 1;
      iStack_2c4 = iStack_2c4 + 1;
      puStack_298 = puStack_298 + 4;
    } while (iStack_2a4 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puStack_2a0 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puStack_2a0 + -0x144),*(uint32_t *)(puStack_2a0 + -0x168));
      iVar21 = iVar21 + 1;
      puStack_2a0 = puStack_2a0 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iStack_2a8 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar21 = 0x3010041;
    puStack_29c = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar21),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_29c + -0x120) = uVar3;
      iVar21 = iVar21 + 1;
      iStack_2a8 = iStack_2a8 + 1;
      puStack_29c = puStack_29c + 4;
    } while (iStack_2a8 < (int)param_1->field_0x64);
  }
  iStack_2ac = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar25 + -0x120),*(uint32_t *)(puVar25 + -0x144));
      iStack_2ac = iStack_2ac + 1;
      puVar25 = puVar25 + 4;
    } while (iStack_2ac < (int)param_1->field_0x64);
  }
  iStack_2e8 = 0;
  if (0 < (int)param_1->field_0x64) {
    iStack_2ec = 0x301004a;
    puStack_2b8 = puVar27;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2ec), (void *)(*(int *)&param_1->field_0x44 + param_1->field_0x4c * (iStack_2e8 % (int)param_1->field_0x60) & 0xffff), (void *)(param_1->field_0x48 + param_1->field_0x50 * (iStack_2e8 / (int)param_1->field_0x60) & 0xffff)));
      *(uint32_t *)(puStack_2b8 + -0xfc) = uVar3;
      call_helper_and_set_flag_104cf6c8((int *)(uVar3),(uint16_t)(8));
      iStack_2e8 = iStack_2e8 + 1;
      iStack_2ec = iStack_2ec + 1;
      puStack_2b8 = puStack_2b8 + 4;
    } while (iStack_2e8 < (int)param_1->field_0x64);
  }
  iVar21 = *(int *)&param_1->field_0x44 + 8;
  iVar23 = param_1->field_0x48 + 8;
  iStack_2d4 = 0;
  if (0 < (int)param_1->field_0x64) {
    iStack_28c = 0x3010053;
    puStack_2c8 = puVar27;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_28c), (void *)(param_1->field_0x4c * (iStack_2d4 % (int)param_1->field_0x60) + iVar21 & 0xffff),(void *)(param_1->field_0x50 * (iStack_2d4 / (int)param_1->field_0x60) + iVar23 & 0xffff)));
      *(uint32_t *)(puStack_2c8 + -0xd8) = uVar3;
      iStack_2d4 = iStack_2d4 + 1;
      iStack_28c = iStack_28c + 1;
      puStack_2c8 = puStack_2c8 + 4;
    } while (iStack_2d4 < (int)param_1->field_0x64);
  }
  iVar24 = 0;
  if (0 < (int)param_1->field_0x64) {
    iStack_2f4 = 0x301005c;
    puVar25 = puVar27;
    do {
      iVar26 = iVar24 % (int)param_1->field_0x60;
      iVar28 = iVar24 / (int)param_1->field_0x60;
      iVar24 = iVar24 + 1;
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2f4), (void *)(param_1->field_0x4c * iVar26 + iVar21 & 0xffff), (void *)(param_1->field_0x50 * iVar28 + iVar23 & 0xffff)));
      *(uint32_t *)(puVar25 + -0xb4) = uVar3;
      puVar25 = puVar25 + 4;
      iStack_2f4 = iStack_2f4 + 1;
    } while (iVar24 < (int)param_1->field_0x64);
  }
  iVar24 = 0;
  if (0 < (int)param_1->field_0x64) {
    iStack_2fc = 0x3010065;
    puStack_2b4 = puVar27;
    do {
      uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2fc), (void *)(param_1->field_0x4c * (iVar24 % (int)param_1->field_0x60) + iVar21 & 0xffff),(void *)(param_1->field_0x50 * (iVar24 / (int)param_1->field_0x60) + iVar23 & 0xffff)));
      *(uint32_t *)(puStack_2b4 + -0x90) = uVar3;
      iVar24 = iVar24 + 1;
      iStack_2fc = iStack_2fc + 1;
      puStack_2b4 = puStack_2b4 + 4;
    } while (iVar24 < (int)param_1->field_0x64);
  }
  iStack_2f8 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar21 = 0x301006e;
    puVar25 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar21),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar25 + -0x6c) = uVar3;
      iVar21 = iVar21 + 1;
      iStack_2f8 = iStack_2f8 + 1;
      puVar25 = puVar25 + 4;
    } while (iStack_2f8 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar25 + -0x6c),*(uint32_t *)(puVar25 + -0xd8));
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iStack_2c0 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar21 = 0x3010077;
    puVar25 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar21),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar25 + -0x48) = uVar3;
      iVar21 = iVar21 + 1;
      iStack_2c0 = iStack_2c0 + 1;
      puVar25 = puVar25 + 4;
    } while (iStack_2c0 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar25 + -0x48),*(uint32_t *)(puVar25 + -0xb4));
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    iVar23 = 0x3010080;
    puVar25 = puVar27;
    do {
      uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar25 + -0x24) = uVar3;
      iVar23 = iVar23 + 1;
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar25 + -0x24),*(uint32_t *)(puVar25 + -0x90));
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010089,(void *)0x250,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008a,(void *)(0),(void *)(0));
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008b,(void *)(0),(void *)(0));
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008c,(void *)(0),(void *)(0));
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008d,(void *)0x20,(void *)0x198);
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008e,(void *)0x80,(void *)0x198);
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301008f,(void *)200,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010090,(void *)0x110,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010091,(void *)0x1e8,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010092,(void *)0x230,(void *)0x198);
  uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010095,(void *)0x80,(void *)0xa8));
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010097,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar3),(uint16_t)(0x180),(uint16_t)(1));
  iVar21 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010099,(void *)0x80,(void *)0xa8));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009b,(void *)0x80,(void *)0xa8));
  uVar15 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010096,(void *)0x80,(void *)0xd8));
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010098,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar15),(uint16_t)(0x180),(uint16_t)(1));
  iVar24 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009a,(void *)0x80,(void *)0xd8));
  iVar28 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009c,(void *)0x80,(void *)0xd8));
  write_field_at_offset_0x48(pvVar14,uVar3);
  write_field_at_offset_0x48(pvVar16,uVar15);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar21);
  invoke_virtual_then_call_helper_10494188((int)pvVar14,iVar28);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar24);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar23);
  pvVar17 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010093,(void *)0x78,(void *)0xa0);
  puVar25 = &DAT_00000078;
  pvVar19 = (void *)0xa0;
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3010094,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  call_helper_and_set_flag_104cf6c8(pvVar18,8);
  iterate_and_remove_list_entry(pvVar17,pvVar18,puVar25,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar14,puVar25,pvVar19);
  iterate_and_remove_list_entry(pvVar17,pvVar16,puVar25,pvVar19);
  graph_link_nextprev((int)pvVar14,(int)pvVar16,0xf,pvVar19);
  graph_link_nextprev((int)pvVar16,(int)pvVar14,0x10,pvVar19);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009d,(void *)0x20,(void *)0x198);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009e,(void *)0x80,(void *)0x198);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x301009f,(void *)0x1b8,(void *)0x198);
  puVar25 = &DAT_00000200;
  pvVar20 = (void *)0x198;
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30100a0,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar25,pvVar20);
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar23 = *(int *)(puVar25 + -0xfc);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar25 + -0x1d4),iVar23);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar25 + -0x120),iVar23);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iStack_2b0 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iVar23 = *(int *)(puVar25 + -0x1d4);
      iVar21 = *(int *)(puVar25 + -0x120);
      graph_link_nextprev(iVar23,iVar21,0x10,pvVar20);
      graph_link_nextprev(iVar23,iVar21,0xf,pvVar20);
      graph_link_nextprev(iVar23,iVar21,0xd,pvVar20);
      graph_link_nextprev(iVar23,iVar21,0xe,pvVar20);
      iStack_2b0 = iStack_2b0 + 1;
      puVar25 = puVar25 + 4;
    } while (iStack_2b0 < (int)param_1->field_0x64);
  }
  graph_link_nextprev(aiStack_128[0],aiStack_1dc[3],0xf,pvVar20);
  graph_link_nextprev(aiStack_128[0],aiStack_1dc[1],0xd,pvVar20);
  graph_link_nextprev(aiStack_128[1],iStack_1cc,0xf,pvVar20);
  graph_link_nextprev(aiStack_128[1],aiStack_1dc[2],0xd,pvVar20);
  graph_link_nextprev(aiStack_128[1],aiStack_1dc[0],0xe,pvVar20);
  graph_link_nextprev(aiStack_128[2],iStack_1c8,0xf,pvVar20);
  graph_link_nextprev(aiStack_128[2],aiStack_1dc[3],0xd,pvVar20);
  graph_link_nextprev(aiStack_128[2],aiStack_1dc[1],0xe,pvVar20);
  graph_link_nextprev(aiStack_128[3],aiStack_1dc[0],0x10,pvVar20);
  graph_link_nextprev(aiStack_128[3],iStack_1c4,0xf,pvVar20);
  graph_link_nextprev(aiStack_128[3],iStack_1cc,0xd,pvVar20);
  graph_link_nextprev(aiStack_128[3],aiStack_1dc[2],0xe,pvVar20);
  graph_link_nextprev(iStack_118,aiStack_1dc[1],0x10,pvVar20);
  graph_link_nextprev(iStack_118,iStack_1c0,0xf,pvVar20);
  graph_link_nextprev(iStack_118,iStack_1c8,0xd,pvVar20);
  graph_link_nextprev(iStack_118,aiStack_1dc[3],0xe,pvVar20);
  graph_link_nextprev(iStack_114,aiStack_1dc[2],0x10,pvVar20);
  graph_link_nextprev(iStack_114,iStack_1bc,0xf,pvVar20);
  graph_link_nextprev(iStack_114,iStack_1c4,0xd,pvVar20);
  graph_link_nextprev(iStack_114,iStack_1cc,0xe,pvVar20);
  graph_link_nextprev(iStack_110,aiStack_1dc[3],0x10,pvVar20);
  graph_link_nextprev(iStack_110,iStack_1c0,0xd,pvVar20);
  graph_link_nextprev(iStack_110,iStack_1c8,0xe,pvVar20);
  graph_link_nextprev(iStack_10c,iStack_1cc,0x10,pvVar20);
  graph_link_nextprev(iStack_10c,iStack_1bc,0xd,pvVar20);
  graph_link_nextprev(iStack_10c,iStack_1c4,0xe,pvVar20);
  graph_link_nextprev(iStack_108,iStack_1c8,0x10,pvVar20);
  pvVar2 = (void *)0xe;
  graph_link_nextprev(iStack_108,iStack_1c0,0xe,pvVar20);
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar25 + -0x1d4),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar25 + -0x18c),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar25 + -0x120),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar25 + -0x6c),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  puVar25 = puVar27;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar25 + -0x48),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar25 = puVar25 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iVar21 = 0;
  if (0 < (int)param_1->field_0x64) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar27 + -0x24),pvVar2,pvVar20);
      iVar21 = iVar21 + 1;
      puVar27 = puVar27 + 4;
    } while (iVar21 < (int)param_1->field_0x64);
  }
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar16,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar2,pvVar20);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar2,pvVar20);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
