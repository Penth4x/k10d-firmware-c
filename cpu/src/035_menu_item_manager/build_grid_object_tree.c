/* @k10d build_grid_object_tree @ 0x10376704
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a grid geometry struct and constructs a hierarchical tree of child objects
 *   with calculated positions.
 * summary:
 *   The function writes grid dimensions and offsets into a struct at param_1. It then
 *   iterates to create multiple child objects via app_obj_factory, calculating their
 *   positions based on the grid layout. It establishes parent-child relationships between
 *   these objects using write_field_at_offset_0x48 and write_field_at_offset_0x10, and
 *   links them into a larger tree structure using iterate_and_remove_list_entry and
 *   graph_link_nextprev. Finally, it associates the constructed tree with the main object
 *   via set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10376f98) overlaps instruction at (ram,0x10376f96)
    */

void build_grid_object_tree(cls_105586cc *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  void *pvVar16;
  uint32_t uVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  int iVar23;
  uint8_t *puVar24;
  int iVar25;
  uint8_t *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uintptr_t sp;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  uint8_t *puStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  uint8_t *puStack_1a4;
  uint8_t *puStack_1a0;
  uint8_t *puStack_19c;
  uint8_t *puStack_198;
  int iStack_194;
  uint8_t *puStack_190;
  uint8_t *puStack_18c;
  uint8_t *puStack_188;
  uint8_t *puStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  uint8_t *puStack_16c;
  uint8_t *puStack_168;
  uint8_t *puStack_164;
  uint8_t *puStack_154;
  int iStack_150;
  uint32_t auStack_f8 [4];
  uint32_t auStack_e8 [4];
  int aiStack_d8 [4];
  uint32_t auStack_c8 [4];
  uint32_t auStack_b8 [8];
  uint32_t auStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  uint32_t auStack_68 [4];
  uint32_t auStack_58 [4];
  uint32_t auStack_48 [4];
  uint32_t auStack_38 [4];
  uint32_t auStack_28 [4];
  uint32_t auStack_18 [4];
  
  puVar24 = &stack0xfffffff8;
  param_1->field_0x3c = 0x20;
  param_1->field_0x40 = 0x18;
  *(uint32_t *)&param_1->field_0x44 = 0x120;
  param_1->field_0x48 = 0xc0;
  param_1->field_0x4c = 0x20;
  param_1->field_0x50 = 0;
  param_1->field_0x54 = 2;
  param_1->field_0x58 = 2;
  param_1->field_0x5c = 4;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055b9e0/*ROM*/,param_3,param_4);
  pvVar3 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000000,(void *)(0),(void *)(0));
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000001,(void *)(0),(void *)(0));
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x3000002;
    puStack_190 = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25), (void *)(param_1->field_0x3c + *(int *)&param_1->field_0x44 * (iVar23 % (int)param_1->field_0x58) & 0xffff),(void *)(param_1->field_0x40 + param_1->field_0x48 * (iVar23 / (int)param_1->field_0x58) & 0xffff)));
      *(uint32_t *)(puStack_190 + -0xf0) = uVar5;
      puStack_190 = puStack_190 + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x3000006;
    puStack_1a4 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_1a4 + -0xe0) = uVar5;
      puStack_1a4 = puStack_1a4 + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar26 + -0xe0),*(uint32_t *)(puVar26 + -0xf0));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x300000a;
    puStack_18c = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_18c + -0xd0) = uVar5;
      puStack_18c = puStack_18c + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iStack_1b0 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar26 + -0xd0),*(uint32_t *)(puVar26 + -0xe0));
      iStack_1b0 = iStack_1b0 + 1;
      puVar26 = puVar26 + 4;
    } while (iStack_1b0 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x300000e;
    puStack_1a0 = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25), (void *)(param_1->field_0x3c + *(int *)&param_1->field_0x44 * (iVar23 % (int)param_1->field_0x58) & 0xffff),(void *)(param_1->field_0x40 + param_1->field_0x48 * (iVar23 / (int)param_1->field_0x58) & 0xffff)));
      *(uint32_t *)(puStack_1a0 + -0xc0) = uVar5;
      puStack_1a0 = puStack_1a0 + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x3000012;
    puVar26 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar26 + -0xb0) = uVar5;
      iVar25 = iVar25 + 1;
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar26 + -0xb0),*(uint32_t *)(puVar26 + -0xc0));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = *(int *)&param_1->field_0x44;
  iVar28 = param_1->field_0x4c;
  iVar25 = param_1->field_0x3c;
  iVar1 = param_1->field_0x48;
  iVar29 = param_1->field_0x50;
  iVar2 = param_1->field_0x40;
  iStack_170 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar27 = 0x3000016;
    puStack_16c = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar27), (void *)(*(int *)&param_1->field_0x44 * (iStack_170 % (int)param_1->field_0x58) + iVar25 + (iVar23 - iVar28) / 2 + -0x18 & 0xffff), (void *)(param_1->field_0x48 * (iStack_170 / (int)param_1->field_0x58) + iVar2 + (iVar1 - iVar29) / 2 + -0x18 & 0xffff)));
      *(uint32_t *)(puStack_16c + -0xa0) = uVar5;
      iVar27 = iVar27 + 1;
      iStack_170 = iStack_170 + 1;
      puStack_16c = puStack_16c + 4;
    } while (iStack_170 < (int)param_1->field_0x5c);
  }
  iStack_174 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iStack_194 = 0x300001a;
    puStack_188 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_194),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_188 + -0x90) = uVar5;
      iStack_174 = iStack_174 + 1;
      iStack_194 = iStack_194 + 1;
      puStack_188 = puStack_188 + 4;
    } while (iStack_174 < (int)param_1->field_0x5c);
  }
  iStack_178 = 0;
  puStack_1b8 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puStack_1b8 + -0x90),*(uint32_t *)(puStack_1b8 + -0xa0));
      iStack_178 = iStack_178 + 1;
      puStack_1b8 = puStack_1b8 + 4;
    } while (iStack_178 < (int)param_1->field_0x5c);
  }
  iStack_1cc = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar23 = 0x300001e;
    puStack_154 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_154 + -0x80) = uVar5;
      iVar23 = iVar23 + 1;
      iStack_1cc = iStack_1cc + 1;
      puStack_154 = puStack_154 + 4;
    } while (iStack_1cc < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x48(*(void **)(puVar26 + -0x80),*(uint32_t *)(puVar26 + -0x90));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iStack_1c4 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iStack_1b4 = 0x3000022;
    puStack_19c = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_1b4), (void *)(param_1->field_0x3c + *(int *)&param_1->field_0x44 * (iStack_1c4 % (int)param_1->field_0x58) & 0xffff),(void *)(param_1->field_0x40 + param_1->field_0x48 * (iStack_1c4 / (int)param_1->field_0x58) & 0xffff)));
      *(uint32_t *)(puStack_19c + -0x70) = uVar5;
      call_helper_and_set_flag_104cf6c8((int *)(uVar5),(uint16_t)(8));
      iStack_1c4 = iStack_1c4 + 1;
      iStack_1b4 = iStack_1b4 + 1;
      puStack_19c = puStack_19c + 4;
    } while (iStack_1c4 < (int)param_1->field_0x5c);
  }
  iVar23 = param_1->field_0x3c + 8;
  iVar25 = param_1->field_0x40 + 8;
  iStack_1c8 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iStack_150 = 0x3000026;
    puStack_198 = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_150), (void *)(*(int *)&param_1->field_0x44 * (iStack_1c8 % (int)param_1->field_0x58) + iVar23 & 0xffff), (void *)(param_1->field_0x48 * (iStack_1c8 / (int)param_1->field_0x58) + iVar25 & 0xffff)));
      *(uint32_t *)(puStack_198 + -0x60) = uVar5;
      iStack_1c8 = iStack_1c8 + 1;
      iStack_150 = iStack_150 + 1;
      puStack_198 = puStack_198 + 4;
    } while (iStack_1c8 < (int)param_1->field_0x5c);
  }
  iVar1 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar2 = 0x300002a;
    puStack_184 = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar2), (void *)(*(int *)&param_1->field_0x44 * (iVar1 % (int)param_1->field_0x58) + iVar23 & 0xffff), (void *)(param_1->field_0x48 * (iVar1 / (int)param_1->field_0x58) + iVar25 & 0xffff)));
      *(uint32_t *)(puStack_184 + -0x50) = uVar5;
      puStack_184 = puStack_184 + 4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar1 < (int)param_1->field_0x5c);
  }
  iVar1 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar2 = 0x300002e;
    puVar26 = puVar24;
    do {
      uVar5 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar2), (void *)(*(int *)&param_1->field_0x44 * (iVar1 % (int)param_1->field_0x58) + iVar23 & 0xffff), (void *)(param_1->field_0x48 * (iVar1 / (int)param_1->field_0x58) + iVar25 & 0xffff)));
      *(uint32_t *)(puVar26 + -0x40) = uVar5;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar1 < (int)param_1->field_0x5c);
  }
  iStack_17c = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar23 = 0x3000032;
    puVar26 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar23),(void *)(0),(void *)(0)));
      *(uint32_t *)(puVar26 + -0x30) = uVar5;
      iStack_17c = iStack_17c + 1;
      puVar26 = puVar26 + 4;
      iVar23 = iVar23 + 1;
    } while (iStack_17c < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar26 + -0x30),*(uint32_t *)(puVar26 + -0x60));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x3000036;
    puStack_164 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_164 + -0x20) = uVar5;
      puStack_164 = puStack_164 + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar26 + -0x20),*(uint32_t *)(puVar26 + -0x50));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    iVar25 = 0x300003a;
    puStack_168 = puVar24;
    do {
      uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar25),(void *)(0),(void *)(0)));
      *(uint32_t *)(puStack_168 + -0x10) = uVar5;
      puStack_168 = puStack_168 + 4;
      iVar23 = iVar23 + 1;
      iVar25 = iVar25 + 1;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar26 + -0x10),*(uint32_t *)(puVar26 + -0x40));
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x300003e,(void *)0x250,(void *)0x18);
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x300003f,(void *)(0),(void *)(0));
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000040,(void *)(0),(void *)(0));
  pvVar9 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000041,(void *)(0),(void *)(0));
  pvVar10 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000042,(void *)0x20,(void *)0x198);
  pvVar11 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000043,(void *)0x80,(void *)0x198);
  pvVar12 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000044,(void *)200,(void *)0x198);
  pvVar13 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000045,(void *)0x110,(void *)0x198);
  pvVar14 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000046,(void *)0x1e8,(void *)0x198);
  pvVar15 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000047,(void *)0x230,(void *)0x198);
  uVar5 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004a,(void *)0x80,(void *)0xa8));
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004c,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar5),(uint16_t)(0x180),(uint16_t)(1));
  iVar23 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004e,(void *)0x80,(void *)0xa8));
  iVar25 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000050,(void *)0x80,(void *)0xa8));
  uVar17 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004b,(void *)0x80,(void *)0xd8));
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004d,(void *)(0),(void *)(0));
  call_helper_and_set_flag_104b7726((uint32_t *)(uVar17),(uint16_t)(0x180),(uint16_t)(1));
  iVar1 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x300004f,(void *)0x80,(void *)0xd8));
  iVar2 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000051,(void *)0x80,(void *)0xd8));
  write_field_at_offset_0x48(pvVar16,uVar5);
  write_field_at_offset_0x48(pvVar18,uVar17);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar23);
  invoke_virtual_then_call_helper_10494188((int)pvVar16,iVar2);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar1);
  invoke_virtual_then_call_helper_10494188((int)pvVar18,iVar25);
  pvVar19 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000048,(void *)0x78,(void *)0xa0);
  puVar26 = &DAT_00000078;
  pvVar21 = (void *)0xa0;
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000049,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  call_helper_and_set_flag_104cf6c8(pvVar20,8);
  iterate_and_remove_list_entry(pvVar19,pvVar20,puVar26,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar16,puVar26,pvVar21);
  iterate_and_remove_list_entry(pvVar19,pvVar18,puVar26,pvVar21);
  graph_link_nextprev((int)pvVar16,(int)pvVar18,0xf,pvVar21);
  graph_link_nextprev((int)pvVar18,(int)pvVar16,0x10,pvVar21);
  pvVar16 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000052,(void *)0x20,(void *)0x198);
  pvVar18 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000053,(void *)0x80,(void *)0x198);
  pvVar20 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000054,(void *)0x1b8,(void *)0x198);
  puVar26 = &DAT_00000200;
  pvVar22 = (void *)0x198;
  pvVar21 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3000055,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry(pvVar3,pvVar4,puVar26,pvVar22);
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iVar25 = *(int *)(puVar26 + -0x70);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar26 + -0xd0),iVar25);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar26 + -0x80),iVar25);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iStack_180 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iVar25 = *(int *)(puVar26 + -0xd0);
      iVar23 = *(int *)(puVar26 + -0x80);
      graph_link_nextprev(iVar25,iVar23,0x10,pvVar22);
      graph_link_nextprev(iVar25,iVar23,0xf,pvVar22);
      graph_link_nextprev(iVar25,iVar23,0xd,pvVar22);
      graph_link_nextprev(iVar25,iVar23,0xe,pvVar22);
      iStack_180 = iStack_180 + 1;
      puVar26 = puVar26 + 4;
    } while (iStack_180 < (int)param_1->field_0x5c);
  }
  graph_link_nextprev(aiStack_88[0],aiStack_d8[2],0xf,pvVar22);
  graph_link_nextprev(aiStack_88[0],aiStack_d8[1],0xd,pvVar22);
  graph_link_nextprev(aiStack_88[1],aiStack_d8[3],0xf,pvVar22);
  graph_link_nextprev(aiStack_88[1],aiStack_d8[2],0xd,pvVar22);
  graph_link_nextprev(aiStack_88[1],aiStack_d8[0],0xe,pvVar22);
  graph_link_nextprev(aiStack_88[2],aiStack_d8[0],0x10,pvVar22);
  graph_link_nextprev(aiStack_88[2],aiStack_d8[3],0xd,pvVar22);
  graph_link_nextprev(aiStack_88[2],aiStack_d8[1],0xe,pvVar22);
  graph_link_nextprev(aiStack_88[3],aiStack_d8[1],0x10,pvVar22);
  pvVar4 = (void *)0xe;
  graph_link_nextprev(aiStack_88[3],aiStack_d8[2],0xe,pvVar22);
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar26 + -0xd0),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar26 + -0xb0),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar26 + -0x80),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar26 + -0x30),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  puVar26 = puVar24;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar26 + -0x20),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iVar23 = 0;
  if (0 < (int)param_1->field_0x5c) {
    do {
      iterate_and_remove_list_entry(pvVar3,*(void **)(puVar24 + -0x10),pvVar4,pvVar22);
      iVar23 = iVar23 + 1;
      puVar24 = puVar24 + 4;
    } while (iVar23 < (int)param_1->field_0x5c);
  }
  iterate_and_remove_list_entry(pvVar3,pvVar6,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar7,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar8,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar9,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar10,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar11,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar12,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar13,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar14,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar15,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar19,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar16,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar18,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar20,pvVar4,pvVar22);
  iterate_and_remove_list_entry(pvVar3,pvVar21,pvVar4,pvVar22);
  set_object_field_at_offset_0x10(param_1,pvVar3);
  return;
}
