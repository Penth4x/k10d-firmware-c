/* @k10d create_grid_of_child_objects @ 0x1038371e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Creates a 4x4 grid of child objects at calculated coordinates and links them into a
 *   parent container.
 * summary:
 *   The function initializes a struct with grid dimensions (4x4) and offsets, then iterates
 *   to create 16 child objects using app_obj_factory at computed X/Y positions. It links
 *   these objects using write_field_at_offset_0x48 and write_field_at_offset_0x10, and
 *   attaches them to a parent object via iterate_and_remove_list_entry. The code also
 *   creates additional objects with specific sizes and links them, suggesting a structured
 *   layout of UI elements or display components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_grid_of_child_objects(cls_105590b8 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint32_t uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  int iVar16;
  int *piVar17;
  uint8_t *puVar18;
  uint8_t *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uintptr_t sp;
  int iStack_2f4;
  int iStack_2f0;
  uint8_t *puStack_2e4;
  uint8_t *puStack_2e0;
  uint8_t *puStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  uint8_t *puStack_2d0;
  uint8_t *puStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int iStack_2b8;
  uint8_t *puStack_2b0;
  int iStack_2ac;
  uint8_t *puStack_2a8;
  int iStack_29c;
  int aiStack_248 [16];
  uint32_t auStack_208 [16];
  int aiStack_1c8 [4];
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  uint32_t auStack_188 [16];
  uint32_t auStack_148 [16];
  uint32_t auStack_108 [16];
  uint32_t auStack_c8 [16];
  int aiStack_88 [4];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [16];
  
  puVar18 = &stack0xfffffff8;
  param_1->field_0x88 = 0x20;
  param_1->field_0x8c = 0x18;
  param_1->field_0x90 = 0x80;
  param_1->field_0x94 = 0x60;
  param_1->field_0x98 = 0;
  param_1->field_0x9c = 0;
  param_1->field_0xa0 = 4;
  param_1->field_0xa4 = 4;
  param_1->field_0xa8 = 0x10;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055e1b8/*ROM*/,param_3,param_4);
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0000,(void *)(0),(void *)(0));
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0001,(void *)(0),(void *)(0));
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iVar20 = 0x30d0002;
    piVar17 = aiStack_48;
    do {
      iVar4 = (int)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar20), (void *)(param_1->field_0x88 + param_1->field_0x90 * (iVar16 % (int)param_1->field_0xa4) & 0xffff), (void *)(param_1->field_0x8c + param_1->field_0x94 * (iVar16 / (int)param_1->field_0xa4) & 0xffff)));
      piVar17[-0x80] = iVar4;
      iVar20 = iVar20 + 1;
      iVar16 = iVar16 + 1;
      piVar17 = piVar17 + 1;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iVar20 = 0x30d0012;
    puStack_2e4 = puVar18;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar20),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_2e4 + -0x200) = uVar5;
      puStack_2e4 = puStack_2e4 + 4;
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 1;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iStack_2bc = 0;
  if (0 < (int)param_1->field_0xa8) {
    piVar17 = aiStack_48;
    puStack_2d0 = puVar18;
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puStack_2d0 + -0x200),piVar17[-0x80]);
      piVar17 = piVar17 + 1;
      iStack_2bc = iStack_2bc + 1;
      puStack_2d0 = puStack_2d0 + 4;
    } while (iStack_2bc < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iVar20 = 0x30d0022;
    puStack_2a8 = puVar18;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar20),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_2a8 + -0x1c0) = uVar5;
      puStack_2a8 = puStack_2a8 + 4;
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 1;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar19 + -0x1c0),*(uint32_t *)(puVar19 + -0x200));
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iVar20 = 0x30d0032;
    puStack_2b0 = puVar18;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar20), (void *)(param_1->field_0x88 + param_1->field_0x90 * (iVar16 % (int)param_1->field_0xa4) & 0xffff), (void *)(param_1->field_0x8c + param_1->field_0x94 * (iVar16 / (int)param_1->field_0xa4) & 0xffff)));
      *(uint32_t *)(puStack_2b0 + -0x180) = uVar5;
      puStack_2b0 = puStack_2b0 + 4;
      iVar16 = iVar16 + 1;
      iVar20 = iVar20 + 1;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iVar20 = 0x30d0042;
    puVar19 = puVar18;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar20),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar19 + -0x140) = uVar5;
      iVar20 = iVar20 + 1;
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar19 + -0x140),*(uint32_t *)(puVar19 + -0x180));
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = param_1->field_0x90;
  iVar21 = param_1->field_0x98;
  iVar20 = param_1->field_0x88;
  iVar4 = param_1->field_0x94;
  iVar22 = param_1->field_0x9c;
  iVar1 = param_1->field_0x8c;
  iStack_2b8 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iStack_2c8 = 0x30d0052;
    puStack_2e0 = puVar18;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2c8), (void *)(param_1->field_0x90 * (iStack_2b8 % (int)param_1->field_0xa4) + iVar20 + (iVar16 - iVar21) / 2 + -0x18 & 0xffff), (void *)(param_1->field_0x94 * (iStack_2b8 / (int)param_1->field_0xa4) + iVar1 + (iVar4 - iVar22) / 2 + -0x18 & 0xffff)));
      *(uint32_t *)(puStack_2e0 + -0x100) = uVar5;
      iStack_2b8 = iStack_2b8 + 1;
      iStack_2c8 = iStack_2c8 + 1;
      puStack_2e0 = puStack_2e0 + 4;
    } while (iStack_2b8 < (int)param_1->field_0xa8);
  }
  iStack_2c0 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iStack_2d8 = 0x30d0062;
    puVar19 = puVar18;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2d8),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar19 + -0xc0) = uVar5;
      puVar19 = puVar19 + 4;
      iStack_2c0 = iStack_2c0 + 1;
      iStack_2d8 = iStack_2d8 + 1;
    } while (iStack_2c0 < (int)param_1->field_0xa8);
  }
  iStack_2f0 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar19 + -0xc0),*(uint32_t *)(puVar19 + -0x100));
      iStack_2f0 = iStack_2f0 + 1;
      puVar19 = puVar19 + 4;
    } while (iStack_2f0 < (int)param_1->field_0xa8);
  }
  iStack_29c = 0;
  if (0 < (int)param_1->field_0xa8) {
    iStack_2c4 = 0x30d0072;
    puStack_2dc = puVar18;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2c4),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_2dc + -0x80) = uVar5;
      iStack_29c = iStack_29c + 1;
      iStack_2c4 = iStack_2c4 + 1;
      puStack_2dc = puStack_2dc + 4;
    } while (iStack_29c < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar19 + -0x80),*(uint32_t *)(puVar19 + -0xc0));
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iStack_2f4 = 0;
  if (0 < (int)param_1->field_0xa8) {
    iStack_2d4 = 0x30d0082;
    puStack_2cc = puVar18;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_2d4), (void *)(param_1->field_0x88 + param_1->field_0x90 * (iStack_2f4 % (int)param_1->field_0xa4) & 0xffff), (void *)(param_1->field_0x8c + param_1->field_0x94 * (iStack_2f4 / (int)param_1->field_0xa4) & 0xffff)));
      *(uint32_t *)(puStack_2cc + -0x40) = uVar5;
      call_helper_and_set_flag_104cf6c8((int *)(uVar5),(uint16_t)(8));
      iStack_2f4 = iStack_2f4 + 1;
      iStack_2d4 = iStack_2d4 + 1;
      puStack_2cc = puStack_2cc + 4;
    } while (iStack_2f4 < (int)param_1->field_0xa8);
  }
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0092,(void *)0x250,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0093,(void *)(0),(void *)(0));
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0094,(void *)(0),(void *)(0));
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0095,(void *)(0),(void *)(0));
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0096,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0097,(void *)0x68,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0098,(void *)0x1a0,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d0099,(void *)0x1e8,(void *)0x198);
  puVar19 = &DAT_00000200;
  pvVar15 = (void *)0x198;
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30d009a,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar2,pvVar3,puVar19,pvVar15);
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iVar20 = *(int *)(puVar19 + -0x40);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar19 + -0x1c0),iVar20);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar19 + -0x80),iVar20);
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iStack_2ac = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iVar20 = *(int *)(puVar19 + -0x1c0);
      iVar16 = *(int *)(puVar19 + -0x80);
      graph_link_nextprev(iVar20,iVar16,0x10,pvVar15);
      graph_link_nextprev(iVar20,iVar16,0xf,pvVar15);
      graph_link_nextprev(iVar20,iVar16,0xd,pvVar15);
      graph_link_nextprev(iVar20,iVar16,0xe,pvVar15);
      iStack_2ac = iStack_2ac + 1;
      puVar19 = puVar19 + 4;
    } while (iStack_2ac < (int)param_1->field_0xa8);
  }
  graph_link_nextprev(aiStack_88[0],iStack_1b8,0xf,pvVar15);
  graph_link_nextprev(aiStack_88[0],aiStack_1c8[1],0xd,pvVar15);
  graph_link_nextprev(aiStack_88[1],iStack_1b4,0xf,pvVar15);
  graph_link_nextprev(aiStack_88[1],aiStack_1c8[2],0xd,pvVar15);
  graph_link_nextprev(aiStack_88[1],aiStack_1c8[0],0xe,pvVar15);
  graph_link_nextprev(aiStack_88[2],iStack_1b0,0xf,pvVar15);
  graph_link_nextprev(aiStack_88[2],aiStack_1c8[3],0xd,pvVar15);
  graph_link_nextprev(aiStack_88[2],aiStack_1c8[1],0xe,pvVar15);
  graph_link_nextprev(aiStack_88[3],iStack_1ac,0xf,pvVar15);
  graph_link_nextprev(aiStack_88[3],iStack_1b8,0xd,pvVar15);
  graph_link_nextprev(aiStack_88[3],aiStack_1c8[2],0xe,pvVar15);
  graph_link_nextprev(iStack_78,aiStack_1c8[0],0x10,pvVar15);
  graph_link_nextprev(iStack_78,iStack_1a8,0xf,pvVar15);
  graph_link_nextprev(iStack_78,iStack_1b4,0xd,pvVar15);
  graph_link_nextprev(iStack_78,aiStack_1c8[3],0xe,pvVar15);
  graph_link_nextprev(iStack_74,aiStack_1c8[1],0x10,pvVar15);
  graph_link_nextprev(iStack_74,iStack_1a4,0xf,pvVar15);
  graph_link_nextprev(iStack_74,iStack_1b0,0xd,pvVar15);
  graph_link_nextprev(iStack_74,iStack_1b8,0xe,pvVar15);
  graph_link_nextprev(iStack_70,aiStack_1c8[2],0x10,pvVar15);
  graph_link_nextprev(iStack_70,iStack_1a0,0xf,pvVar15);
  graph_link_nextprev(iStack_70,iStack_1ac,0xd,pvVar15);
  graph_link_nextprev(iStack_70,iStack_1b4,0xe,pvVar15);
  graph_link_nextprev(iStack_6c,aiStack_1c8[3],0x10,pvVar15);
  graph_link_nextprev(iStack_6c,iStack_19c,0xf,pvVar15);
  graph_link_nextprev(iStack_6c,iStack_1a8,0xd,pvVar15);
  graph_link_nextprev(iStack_6c,iStack_1b0,0xe,pvVar15);
  graph_link_nextprev(iStack_68,iStack_1b8,0x10,pvVar15);
  graph_link_nextprev(iStack_68,iStack_198,0xf,pvVar15);
  graph_link_nextprev(iStack_68,iStack_1a4,0xd,pvVar15);
  graph_link_nextprev(iStack_68,iStack_1ac,0xe,pvVar15);
  graph_link_nextprev(iStack_64,iStack_1b4,0x10,pvVar15);
  graph_link_nextprev(iStack_64,iStack_194,0xf,pvVar15);
  graph_link_nextprev(iStack_64,iStack_1a0,0xd,pvVar15);
  graph_link_nextprev(iStack_64,iStack_1a8,0xe,pvVar15);
  graph_link_nextprev(iStack_60,iStack_1b0,0x10,pvVar15);
  graph_link_nextprev(iStack_60,iStack_190,0xf,pvVar15);
  graph_link_nextprev(iStack_60,iStack_19c,0xd,pvVar15);
  graph_link_nextprev(iStack_60,iStack_1a4,0xe,pvVar15);
  graph_link_nextprev(iStack_5c,iStack_1ac,0x10,pvVar15);
  graph_link_nextprev(iStack_5c,iStack_18c,0xf,pvVar15);
  graph_link_nextprev(iStack_5c,iStack_198,0xd,pvVar15);
  graph_link_nextprev(iStack_5c,iStack_1a0,0xe,pvVar15);
  graph_link_nextprev(iStack_58,iStack_1a8,0x10,pvVar15);
  graph_link_nextprev(iStack_58,iStack_194,0xd,pvVar15);
  graph_link_nextprev(iStack_58,iStack_19c,0xe,pvVar15);
  graph_link_nextprev(iStack_54,iStack_1a4,0x10,pvVar15);
  graph_link_nextprev(iStack_54,iStack_190,0xd,pvVar15);
  graph_link_nextprev(iStack_54,iStack_198,0xe,pvVar15);
  graph_link_nextprev(iStack_50,iStack_1a0,0x10,pvVar15);
  graph_link_nextprev(iStack_50,iStack_18c,0xd,pvVar15);
  graph_link_nextprev(iStack_50,iStack_194,0xe,pvVar15);
  graph_link_nextprev(iStack_4c,iStack_19c,0x10,pvVar15);
  pvVar3 = (void *)0xe;
  graph_link_nextprev(iStack_4c,iStack_190,0xe,pvVar15);
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iterate_and_remove_list_entry(pvVar2,*(void **)(puVar19 + -0x1c0),pvVar3,pvVar15);
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  puVar19 = puVar18;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iterate_and_remove_list_entry(pvVar2,*(void **)(puVar19 + -0x140),pvVar3,pvVar15);
      iVar16 = iVar16 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0xa8) {
    do {
      iterate_and_remove_list_entry(pvVar2,*(void **)(puVar18 + -0x80),pvVar3,pvVar15);
      iVar16 = iVar16 + 1;
      puVar18 = puVar18 + 4;
    } while (iVar16 < (int)param_1->field_0xa8);
  }
  iterate_and_remove_list_entry(pvVar2,pvVar6,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar7,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar8,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar9,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar10,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar11,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar12,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar13,pvVar3,pvVar15);
  iterate_and_remove_list_entry(pvVar2,pvVar14,pvVar3,pvVar15);
  set_object_field_at_offset_0x10(param_1,pvVar2);
  return;
}
