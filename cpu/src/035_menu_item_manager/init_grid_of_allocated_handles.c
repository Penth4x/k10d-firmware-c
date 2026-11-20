/* @k10d init_grid_of_allocated_handles @ 0x103866c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 3x3 grid of handles by allocating them with computed offsets and linking
 *   them into a parent structure.
 * summary:
 *   The function writes fixed geometry parameters (width, height, offsets, grid dimensions)
 *   into a struct at param_1. It then iterates 9 times to allocate handles via
 *   app_obj_factory, calculating x/y positions based on the grid layout. It links these
 *   handles using write_field_at_offset_0x10 and write_field_at_offset_0x48, and configures
 *   additional properties via invoke_virtual_then_call_helper_10494188 and
 *   graph_link_nextprev. Finally, it registers the handles with a parent object using
 *   iterate_and_remove_list_entry and calls set_object_field_at_offset_0x10 to finalize the
 *   setup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10386ce4) overlaps instruction at (ram,0x10386ce2)
    */

void init_grid_of_allocated_handles(cls_10559448 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iStack_1e4;
  int iStack_1e0;
  uint8_t *puStack_1dc;
  uint8_t *puStack_1d0;
  uint8_t *puStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  uint8_t *puStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  uint8_t *puStack_1ac;
  uint8_t *puStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_18c;
  uint32_t auStack_14c [9];
  uint32_t auStack_128 [9];
  int aiStack_104 [4];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  uint32_t auStack_e0 [9];
  uint32_t auStack_bc [18];
  uint32_t auStack_74 [9];
  int aiStack_50 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c [9];
  
  puVar20 = &stack0xfffffff8;
  param_1->field_0x68 = 0x20;
  param_1->field_0x6c = 0x18;
  param_1->field_0x70 = 0xc0;
  param_1->field_0x74 = 0x80;
  param_1->field_0x78 = 0x20;
  param_1->field_0x7c = 0;
  param_1->field_0x80 = 3;
  *(uint32_t *)&param_1->field_0x84 = 3;
  param_1->field_0x88 = 9;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055f220/*ROM*/,param_3,param_4);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0000,(void *)(0),(void *)(0));
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0001,(void *)(0),(void *)(0));
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_1b8 = 0x30c0002;
    puVar17 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1b8), (void *)(param_1->field_0x68 + param_1->field_0x70 * (iVar16 % *(int *)&param_1->field_0x84) & 0xffff), (void *)(param_1->field_0x6c + param_1->field_0x74 * (iVar16 / *(int *)&param_1->field_0x84) & 0xffff)));
      *(uint32_t *)(puVar17 + -0x144) = uVar5;
      puVar17 = puVar17 + 4;
      iStack_1b8 = iStack_1b8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    iVar18 = 0x30c000b;
    puVar17 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0x120) = uVar5;
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar17 + -0x120),*(uint32_t *)(puVar17 + -0x144));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_1b4 = 0x30c0014;
    puVar17 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1b4),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0xfc) = uVar5;
      puVar17 = puVar17 + 4;
      iStack_1b4 = iStack_1b4 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar17 + -0xfc),*(uint32_t *)(puVar17 + -0x120));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    iVar18 = 0x30c001d;
    puStack_1d0 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18), (void *)(param_1->field_0x68 + param_1->field_0x70 * (iVar16 % *(int *)&param_1->field_0x84) & 0xffff), (void *)(param_1->field_0x6c + param_1->field_0x74 * (iVar16 / *(int *)&param_1->field_0x84) & 0xffff)));
      *(uint32_t *)(puStack_1d0 + -0xd8) = uVar5;
      puStack_1d0 = puStack_1d0 + 4;
      iVar16 = iVar16 + 1;
      iVar18 = iVar18 + 1;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    iVar18 = 0x30c0026;
    puVar17 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar18),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar17 + -0xb4) = uVar5;
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar17 + -0xb4),*(uint32_t *)(puVar17 + -0xd8));
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = param_1->field_0x70;
  iVar21 = param_1->field_0x78;
  iVar18 = param_1->field_0x68;
  iVar1 = param_1->field_0x74;
  iVar22 = param_1->field_0x7c;
  iVar2 = param_1->field_0x6c;
  iVar19 = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_198 = 0x30c002f;
    puStack_1cc = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_198), (void *)(param_1->field_0x70 * (iVar19 % *(int *)&param_1->field_0x84) + iVar18 + (iVar16 - iVar21) / 2 + -0x18 & 0xffff), (void *)(param_1->field_0x74 * (iVar19 / *(int *)&param_1->field_0x84) + iVar2 + (iVar1 - iVar22) / 2 + -0x18 & 0xffff)));
      *(uint32_t *)(puStack_1cc + -0x90) = uVar5;
      iStack_198 = iStack_198 + 1;
      iVar19 = iVar19 + 1;
      puStack_1cc = puStack_1cc + 4;
    } while (iVar19 < (int)param_1->field_0x88);
  }
  iStack_1c0 = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_1a0 = 0x30c0038;
    puStack_1dc = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1a0),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_1dc + -0x6c) = uVar5;
      iStack_1c0 = iStack_1c0 + 1;
      iStack_1a0 = iStack_1a0 + 1;
      puStack_1dc = puStack_1dc + 4;
    } while (iStack_1c0 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  puStack_1ac = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puStack_1ac + -0x6c),*(uint32_t *)(puStack_1ac + -0x90));
      iVar16 = iVar16 + 1;
      puStack_1ac = puStack_1ac + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iStack_19c = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_1e0 = 0x30c0041;
    puStack_1a4 = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1e0),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_1a4 + -0x48) = uVar5;
      iStack_19c = iStack_19c + 1;
      iStack_1e0 = iStack_1e0 + 1;
      puStack_1a4 = puStack_1a4 + 4;
    } while (iStack_19c < (int)param_1->field_0x88);
  }
  iStack_18c = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar17 + -0x48),*(uint32_t *)(puVar17 + -0x6c));
      iStack_18c = iStack_18c + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_18c < (int)param_1->field_0x88);
  }
  iStack_1e4 = 0;
  if (0 < (int)param_1->field_0x88) {
    iStack_1c8 = 0x30c004a;
    puStack_1bc = puVar20;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1c8), (void *)(param_1->field_0x68 + param_1->field_0x70 * (iStack_1e4 % *(int *)&param_1->field_0x84) & 0xffff),(void *)(param_1->field_0x6c + param_1->field_0x74 * (iStack_1e4 / *(int *)&param_1->field_0x84) & 0xffff)));
      *(uint32_t *)(puStack_1bc + -0x24) = uVar5;
      call_helper_and_set_flag_104cf6c8((int *)(uVar5),(uint16_t)(8));
      iStack_1e4 = iStack_1e4 + 1;
      iStack_1c8 = iStack_1c8 + 1;
      puStack_1bc = puStack_1bc + 4;
    } while (iStack_1e4 < (int)param_1->field_0x88);
  }
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0053,(void *)0x250,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0054,(void *)(0),(void *)(0));
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0055,(void *)(0),(void *)(0));
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0056,(void *)(0),(void *)(0));
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0057,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0058,(void *)0x68,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c0059,(void *)0x1a0,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c005a,(void *)0x1e8,(void *)0x198);
  puVar17 = &DAT_00000200;
  pvVar15 = (void *)0x198;
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x30c005b,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar3,pvVar4,puVar17,pvVar15);
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      iVar18 = *(int *)(puVar17 + -0x24);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar17 + -0xfc),iVar18);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar17 + -0x48),iVar18);
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iStack_1c4 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      iVar18 = *(int *)(puVar17 + -0xfc);
      iVar16 = *(int *)(puVar17 + -0x48);
      graph_link_nextprev(iVar18,iVar16,0x10,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xf,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xd,pvVar15);
      graph_link_nextprev(iVar18,iVar16,0xe,pvVar15);
      iStack_1c4 = iStack_1c4 + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_1c4 < (int)param_1->field_0x88);
  }
  graph_link_nextprev(aiStack_50[0],aiStack_104[3],0xf,pvVar15);
  graph_link_nextprev(aiStack_50[0],aiStack_104[1],0xd,pvVar15);
  graph_link_nextprev(aiStack_50[1],iStack_f4,0xf,pvVar15);
  graph_link_nextprev(aiStack_50[1],aiStack_104[2],0xd,pvVar15);
  graph_link_nextprev(aiStack_50[1],aiStack_104[0],0xe,pvVar15);
  graph_link_nextprev(aiStack_50[2],iStack_f0,0xf,pvVar15);
  graph_link_nextprev(aiStack_50[2],aiStack_104[3],0xd,pvVar15);
  graph_link_nextprev(aiStack_50[2],aiStack_104[1],0xe,pvVar15);
  graph_link_nextprev(aiStack_50[3],aiStack_104[0],0x10,pvVar15);
  graph_link_nextprev(aiStack_50[3],iStack_ec,0xf,pvVar15);
  graph_link_nextprev(aiStack_50[3],iStack_f4,0xd,pvVar15);
  graph_link_nextprev(aiStack_50[3],aiStack_104[2],0xe,pvVar15);
  graph_link_nextprev(iStack_40,aiStack_104[1],0x10,pvVar15);
  graph_link_nextprev(iStack_40,iStack_e8,0xf,pvVar15);
  graph_link_nextprev(iStack_40,iStack_f0,0xd,pvVar15);
  graph_link_nextprev(iStack_40,aiStack_104[3],0xe,pvVar15);
  graph_link_nextprev(iStack_3c,aiStack_104[2],0x10,pvVar15);
  graph_link_nextprev(iStack_3c,iStack_e4,0xf,pvVar15);
  graph_link_nextprev(iStack_3c,iStack_ec,0xd,pvVar15);
  graph_link_nextprev(iStack_3c,iStack_f4,0xe,pvVar15);
  graph_link_nextprev(iStack_38,aiStack_104[3],0x10,pvVar15);
  graph_link_nextprev(iStack_38,iStack_e8,0xd,pvVar15);
  graph_link_nextprev(iStack_38,iStack_f0,0xe,pvVar15);
  graph_link_nextprev(iStack_34,iStack_f4,0x10,pvVar15);
  graph_link_nextprev(iStack_34,iStack_e4,0xd,pvVar15);
  graph_link_nextprev(iStack_34,iStack_ec,0xe,pvVar15);
  graph_link_nextprev(iStack_30,iStack_f0,0x10,pvVar15);
  pvVar4 = (void *)0xe;
  graph_link_nextprev(iStack_30,iStack_e8,0xe,pvVar15);
  iStack_1b0 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar17 + -0xfc),pvVar4,pvVar15);
      iStack_1b0 = iStack_1b0 + 1;
      puVar17 = puVar17 + 4;
    } while (iStack_1b0 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  puVar17 = puVar20;
  if (0 < (int)param_1->field_0x88) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar17 + -0xb4),pvVar4,pvVar15);
      iVar16 = iVar16 + 1;
      puVar17 = puVar17 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
  }
  iVar16 = 0;
  if (0 < (int)param_1->field_0x88) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar20 + -0x48),pvVar4,pvVar15);
      iVar16 = iVar16 + 1;
      puVar20 = puVar20 + 4;
    } while (iVar16 < (int)param_1->field_0x88);
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
