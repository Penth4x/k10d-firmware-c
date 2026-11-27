/* @k10d init_grid_of_subobjects @ 0x1038538e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a grid of sub-objects by allocating them with computed offsets and linking
 *   them into a parent structure.
 * summary:
 *   The function writes grid dimensions (width, height, stride, count) into the object at
 *   param_1. It then iterates based on the count (param_1+0x6c) to allocate multiple sub-
 *   objects via app_obj_factory, calculating their positions using the grid dimensions. It
 *   links these sub-objects using write_field_at_offset_0x10 and
 *   write_field_at_offset_0x48, and finally registers them with a parent object (pvVar3)
 *   via iterate_and_remove_list_entry. The specific offset calculations and grid layout
 *   suggest a structured initialization of a collection of related objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10385990) overlaps instruction at (ram,0x1038598e)
    */

void init_grid_of_subobjects(cls_105592e8 *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
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
  uint8_t *puVar17;
  int iVar18;
  int iVar19;
  uint8_t *puVar20;
  int iVar21;
  int iVar22;
  uintptr_t sp;
  int iStack_11c;
  int iStack_118;
  uint8_t *puStack_114;
  uint8_t *puStack_108;
  uint8_t *puStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  uint8_t *puStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  uint8_t *puStack_e4;
  uint8_t *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_c4;
  uint32_t auStack_98 [4];
  uint32_t auStack_88 [4];
  int aiStack_78 [4];
  uint32_t auStack_68 [4];
  uint32_t auStack_58 [8];
  uint32_t auStack_38 [4];
  int aiStack_28 [4];
  int aiStack_18 [4];
  
  puVar20 = &stack0xfffffff8;
  param_1->field_0x4c = 0x20;
  param_1->field_0x50 = 0x18;
  param_1->field_0x54 = 0x120;
  *(uint32_t *)&param_1->field_0x58 = 0xc0;
  param_1->field_0x5c = 0x20;
  param_1->field_0x60 = 0;
  param_1->field_0x64 = 2;
  param_1->field_0x68 = 2;
  param_1->field_0x6c = 4;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055ee60/*ROM*/,param_3,param_4);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0000,(void *)(0),(void *)(0));
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0001,(void *)(0),(void *)(0));
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_f0 = 0x30b0002;
    puVar17 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_f0), (void *)(param_1->field_0x4c + param_1->field_0x54 * (iVar16 % (int)param_1->field_0x68) & 0xffff), (void *)(param_1->field_0x50 + *(int *)&param_1->field_0x58 * (iVar16 / (int)param_1->field_0x68) & 0xffff)));
      *(uint32_t *)(puVar17 + -0x90) = uVar5;
      puVar17 = puVar17 + 4;
      iStack_f0 = iStack_f0 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iVar18 = 0x30b0006;
    puVar17 = puVar20;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0x80) = uVar5;
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar17 + -0x80),*(uint32_t *)(puVar17 + -0x90));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_ec = 0x30b000a;
    puVar17 = puVar20;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_ec),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0x70) = uVar5;
      puVar17 = puVar17 + 4;
      iStack_ec = iStack_ec + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar17 + -0x70),*(uint32_t *)(puVar17 + -0x80));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iVar18 = 0x30b000e;
    puStack_108 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18), (void *)(param_1->field_0x4c + param_1->field_0x54 * (iVar16 % (int)param_1->field_0x68) & 0xffff), (void *)(param_1->field_0x50 + *(int *)&param_1->field_0x58 * (iVar16 / (int)param_1->field_0x68) & 0xffff)));
      *(uint32_t *)(puStack_108 + -0x60) = uVar5;
      puStack_108 = puStack_108 + 4;
      iVar16 = iVar16 + 1;
      iVar18 = iVar18 + 1;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iVar18 = 0x30b0012;
    puVar17 = puVar20;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0x50) = uVar5;
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar17 + -0x50),*(uint32_t *)(puVar17 + -0x60));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = param_1->field_0x54;
  iVar21 = param_1->field_0x5c;
  iVar18 = param_1->field_0x4c;
  iVar1 = *(int *)&param_1->field_0x58;
  iVar22 = param_1->field_0x60;
  iVar2 = param_1->field_0x50;
  iVar19 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_d0 = 0x30b0016;
    puStack_104 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_d0), (void *)(param_1->field_0x54 * (iVar19 % (int)param_1->field_0x68) + iVar18 + (iVar16 - iVar21) / 2 + -0x18 & 0xffff), (void *)(*(int *)&param_1->field_0x58 * (iVar19 / (int)param_1->field_0x68) + iVar2 + (iVar1 - iVar22) / 2 + -0x18 & 0xffff)));
      *(uint32_t *)(puStack_104 + -0x40) = uVar5;
      iStack_d0 = iStack_d0 + 1;
      iVar19 = iVar19 + 1;
      puStack_104 = puStack_104 + 4;
    } while (iVar19 < (int)param_1->field_0x6c);
  }
  iStack_f8 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_d8 = 0x30b001a;
    puStack_114 = puVar20;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_d8),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_114 + -0x30) = uVar5;
      iStack_f8 = iStack_f8 + 1;
      iStack_d8 = iStack_d8 + 1;
      puStack_114 = puStack_114 + 4;
    } while (iStack_f8 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  puStack_e4 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puStack_e4 + -0x30),*(uint32_t *)(puStack_e4 + -0x40));
      iVar16 = iVar16 + 1;
      puStack_e4 = puStack_e4 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iStack_d4 = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_118 = 0x30b001e;
    puStack_dc = puVar20;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_118),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_dc + -0x20) = uVar5;
      iStack_d4 = iStack_d4 + 1;
      iStack_118 = iStack_118 + 1;
      puStack_dc = puStack_dc + 4;
    } while (iStack_d4 < (int)param_1->field_0x6c);
  }
  iStack_c4 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar17 + -0x20),*(uint32_t *)(puVar17 + -0x30));
      iStack_c4 = iStack_c4 + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_c4 < (int)param_1->field_0x6c);
  }
  iStack_11c = 0;
  if (0 < (int)param_1->field_0x6c) {
    iStack_100 = 0x30b0022;
    puStack_f4 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_100), (void *)(param_1->field_0x4c + param_1->field_0x54 * (iStack_11c % (int)param_1->field_0x68) & 0xffff), (void *)(param_1->field_0x50 + *(int *)&param_1->field_0x58 * (iStack_11c / (int)param_1->field_0x68) & 0xffff)));
      *(uint32_t *)(puStack_f4 + -0x10) = uVar5;
      call_helper_and_set_flag_104cf6c8((int *)(uVar5),(uint16_t)(8));
      iStack_11c = iStack_11c + 1;
      iStack_100 = iStack_100 + 1;
      puStack_f4 = puStack_f4 + 4;
    } while (iStack_11c < (int)param_1->field_0x6c);
  }
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0026,(void *)0x250,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0027,(void *)(0),(void *)(0));
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0028,(void *)(0),(void *)(0));
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b0029,(void *)(0),(void *)(0));
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b002a,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b002b,(void *)0x68,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b002c,(void *)0x1a0,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b002d,(void *)0x1e8,(void *)0x198);
  puVar17 = &DAT_00000200;
  pvVar15 = (void *)0x198;
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30b002e,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar3,pvVar4,puVar17,pvVar15);
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iVar18 = *(int *)(puVar17 + -0x10);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar17 + -0x70),iVar18);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar17 + -0x20),iVar18);
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iStack_fc = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iVar18 = *(int *)(puVar17 + -0x70);
      iVar16 = *(int *)(puVar17 + -0x20);
      graph_link_nextprev(iVar18,iVar16,0x10,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xf,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xd,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xe,pvVar15);
      iStack_fc = iStack_fc + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_fc < (int)param_1->field_0x6c);
  }
  graph_link_nextprev(aiStack_28[0],aiStack_78[2],0xf,pvVar15);
  graph_link_nextprev(aiStack_28[0],aiStack_78[1],0xd,pvVar15);
  graph_link_nextprev(aiStack_28[1],aiStack_78[3],0xf,pvVar15);
  graph_link_nextprev(aiStack_28[1],aiStack_78[2],0xd,pvVar15);
  graph_link_nextprev(aiStack_28[1],aiStack_78[0],0xe,pvVar15);
  graph_link_nextprev(aiStack_28[2],aiStack_78[0],0x10,pvVar15);
  graph_link_nextprev(aiStack_28[2],aiStack_78[3],0xd,pvVar15);
  graph_link_nextprev(aiStack_28[2],aiStack_78[1],0xe,pvVar15);
  graph_link_nextprev(aiStack_28[3],aiStack_78[1],0x10,pvVar15);
  pvVar4 = (void *)0xe;
  graph_link_nextprev(aiStack_28[3],aiStack_78[2],0xe,pvVar15);
  iStack_e8 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar17 + -0x70),pvVar4,pvVar15);
      iStack_e8 = iStack_e8 + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_e8 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar17 + -0x50),pvVar4,pvVar15);
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar20 + -0x20),pvVar4,pvVar15);
      iVar16 = iVar16 + 1;
      puVar20 = puVar20 + 4;
    } while (iVar16 < (int)param_1->field_0x6c);
  }
  iterate_and_remove_list_entry(pvVar3,pvVar6,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar7,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar8,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar9,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar10,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar11,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar12,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar13,pvVar4,pvVar15);
  iterate_and_remove_list_entry(pvVar3,pvVar14,pvVar4,pvVar15);
  set_object_field_at_offset_0x10(param_1,pvVar3);
  return;
}
