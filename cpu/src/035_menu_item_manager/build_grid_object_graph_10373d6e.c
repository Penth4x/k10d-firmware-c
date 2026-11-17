/* @k10d build_grid_object_graph_10373d6e @ 0x10373d6e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a grid structure and creates a graph of nodes and edges for a 2D layout.
 * summary:
 *   The function sets up a grid object (param_1) with dimensions and cell sizes. It then
 *   iterates through the grid to create node objects (via app_obj_factory) and establishes
 *   connections between them (via graph_link_nextprev and iterate_and_remove_list_entry).
 *   The code calculates coordinates for each node based on grid indices and connects
 *   adjacent nodes, forming a mesh or graph structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10374548) overlaps instruction at (ram,0x10374546)
    */

void build_grid_object_graph_10373d6e(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
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
  void *pvVar15;
  uint32_t uVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  int iVar22;
  uint32_t *puVar23;
  int iVar24;
  int *piVar25;
  uint8_t *puVar26;
  int iVar27;
  uint8_t *puVar28;
  uintptr_t sp;
  int iStack_4cc;
  int iStack_4c8;
  uint8_t *puStack_4c4;
  uint32_t *puStack_4c0;
  int iStack_4bc;
  int iStack_4b8;
  int iStack_4ac;
  int iStack_4a8;
  uint32_t *puStack_4a0;
  uint8_t *puStack_49c;
  uint8_t *puStack_498;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  int iStack_488;
  uint32_t *puStack_480;
  int iStack_47c;
  uint8_t *puStack_478;
  int iStack_474;
  int iStack_470;
  uint32_t *puStack_46c;
  uint8_t *puStack_468;
  int iStack_464;
  int iStack_460;
  uint8_t *puStack_454;
  int aiStack_3c8 [16];
  int aiStack_388 [16];
  int aiStack_348 [4];
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  uint32_t auStack_308 [16];
  uint32_t auStack_2c8 [16];
  uint32_t auStack_288 [16];
  uint32_t auStack_248 [16];
  int aiStack_208 [4];
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int aiStack_1c8 [16];
  uint32_t auStack_188 [16];
  uint32_t auStack_148 [16];
  uint32_t auStack_108 [16];
  uint32_t auStack_c8 [16];
  uint32_t auStack_88 [16];
  uint32_t auStack_48 [16];
  
  puVar26 = &stack0xfffffff8;
  *(uint32_t *)((int)param_1 + 0x48) = 0x20;
  *(uint32_t *)((int)param_1 + 0x4c) = 0x18;
  *(uint32_t *)((int)param_1 + 0x50) = 0x80;
  *(uint32_t *)((int)param_1 + 0x54) = 0x60;
  *(uint32_t *)((int)param_1 + 0x58) = 0;
  *(uint32_t *)((int)param_1 + 0x5c) = 0;
  *(uint32_t *)((int)param_1 + 0x60) = 4;
  *(uint32_t *)((int)param_1 + 100) = 4;
  *(uint32_t *)((int)param_1 + 0x68) = 0x10;
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x24),(uint *)0x1055a504/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020000,0,0);
  pvVar2 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020001,0,0);
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar24 = 0x3020002;
    piVar25 = aiStack_1c8;
    do {
      iVar3 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar24,
                           *(int *)((int)param_1 + 0x48) +
                           *(int *)((int)param_1 + 0x50) * (iVar22 % *(int *)((int)param_1 + 100)) &
                           0xffff,*(int *)((int)param_1 + 0x4c) +
                                  *(int *)((int)param_1 + 0x54) *
                                  (iVar22 / *(int *)((int)param_1 + 100)) & 0xffff);
      piVar25[-0x80] = iVar3;
      iVar24 = iVar24 + 1;
      iVar22 = iVar22 + 1;
      piVar25 = piVar25 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iStack_48c = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar22 = 0x3020012;
    puVar23 = auStack_188;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar22,0,0);
      puVar23[-0x80] = uVar4;
      iVar22 = iVar22 + 1;
      iStack_48c = iStack_48c + 1;
      puVar23 = puVar23 + 1;
    } while (iStack_48c < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    piVar25 = aiStack_1c8;
    do {
      write_field_at_offset_0x10(piVar25[-0x70],piVar25[-0x80]);
      iVar22 = iVar22 + 1;
      piVar25 = piVar25 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar24 = 0x3020022;
    puVar23 = auStack_148;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar24,0,0);
      puVar23[-0x80] = uVar4;
      iVar24 = iVar24 + 1;
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar23 = auStack_188;
    do {
      write_field_at_offset_0x48((void *)puVar23[-0x70],puVar23[-0x80]);
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_4cc = 0x3020032;
    puVar23 = auStack_108;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_4cc,
                           *(int *)((int)param_1 + 0x48) +
                           *(int *)((int)param_1 + 0x50) * (iVar22 % *(int *)((int)param_1 + 100)) &
                           0xffff,*(int *)((int)param_1 + 0x4c) +
                                  *(int *)((int)param_1 + 0x54) *
                                  (iVar22 / *(int *)((int)param_1 + 100)) & 0xffff);
      puVar23[-0x80] = uVar4;
      puVar23 = puVar23 + 1;
      iStack_4cc = iStack_4cc + 1;
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_4ac = 0x3020042;
    puVar23 = auStack_c8;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_4ac,0,0);
      puVar23[-0x80] = uVar4;
      puVar23 = puVar23 + 1;
      iStack_4ac = iStack_4ac + 1;
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar23 = auStack_108;
    do {
      write_field_at_offset_0x10(puVar23[-0x70],puVar23[-0x80]);
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = *(int *)((int)param_1 + 0x54);
  iVar3 = *(int *)((int)param_1 + 0x5c);
  iVar24 = *(int *)((int)param_1 + 0x4c);
  iStack_488 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar27 = 0x3020052;
    puStack_4a0 = auStack_88;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar27,
                           *(int *)((int)param_1 + 0x48) +
                           *(int *)((int)param_1 + 0x50) *
                           (iStack_488 % *(int *)((int)param_1 + 100)) + 0x50U & 0xffff,
                           *(int *)((int)param_1 + 0x54) *
                           (iStack_488 / *(int *)((int)param_1 + 100)) +
                           iVar24 + (iVar22 - iVar3) / 2 + -0x18 & 0xffff);
      puStack_4a0[-0x80] = uVar4;
      iVar27 = iVar27 + 1;
      iStack_488 = iStack_488 + 1;
      puStack_4a0 = puStack_4a0 + 1;
    } while (iStack_488 < *(int *)((int)param_1 + 0x68));
  }
  iStack_460 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_464 = 0x3020062;
    puVar23 = auStack_48;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_464,0,0);
      puVar23[-0x80] = uVar4;
      puVar23 = puVar23 + 1;
      iStack_460 = iStack_460 + 1;
      iStack_464 = iStack_464 + 1;
    } while (iStack_460 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar23 = auStack_88;
    do {
      write_field_at_offset_0x10(puVar23[-0x70],puVar23[-0x80]);
      puVar23 = puVar23 + 1;
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iStack_4a8 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_474 = 0x3020072;
    puStack_454 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_474,0,0);
      *(uint32_t *)(puStack_454 + -0x200) = uVar4;
      iStack_4a8 = iStack_4a8 + 1;
      iStack_474 = iStack_474 + 1;
      puStack_454 = puStack_454 + 4;
    } while (iStack_4a8 < *(int *)((int)param_1 + 0x68));
  }
  iStack_490 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puStack_46c = auStack_48;
    puVar28 = puVar26;
    do {
      write_field_at_offset_0x48(*(void **)(puVar28 + -0x200),puStack_46c[-0x80]);
      puVar28 = puVar28 + 4;
      iStack_490 = iStack_490 + 1;
      puStack_46c = puStack_46c + 1;
    } while (iStack_490 < *(int *)((int)param_1 + 0x68));
  }
  iStack_4b8 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_47c = 0x3020082;
    puStack_478 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_47c,
                           *(int *)((int)param_1 + 0x48) +
                           *(int *)((int)param_1 + 0x50) *
                           (iStack_4b8 % *(int *)((int)param_1 + 100)) & 0xffff,
                           *(int *)((int)param_1 + 0x4c) +
                           *(int *)((int)param_1 + 0x54) *
                           (iStack_4b8 / *(int *)((int)param_1 + 100)) & 0xffff);
      *(uint32_t *)(puStack_478 + -0x1c0) = uVar4;
      call_helper_and_set_flag_104cf6c8(uVar4,8);
      iStack_4b8 = iStack_4b8 + 1;
      iStack_47c = iStack_47c + 1;
      puStack_478 = puStack_478 + 4;
    } while (iStack_4b8 < *(int *)((int)param_1 + 0x68));
  }
  iVar24 = *(int *)((int)param_1 + 0x48) + 8;
  iVar22 = *(int *)((int)param_1 + 0x4c) + 8;
  iStack_4c8 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iStack_470 = 0x3020092;
    puStack_49c = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iStack_470,
                           *(int *)((int)param_1 + 0x50) *
                           (iStack_4c8 % *(int *)((int)param_1 + 100)) + iVar24 & 0xffff,
                           *(int *)((int)param_1 + 0x54) *
                           (iStack_4c8 / *(int *)((int)param_1 + 100)) + iVar22 & 0xffff);
      *(uint32_t *)(puStack_49c + -0x180) = uVar4;
      iStack_4c8 = iStack_4c8 + 1;
      iStack_470 = iStack_470 + 1;
      puStack_49c = puStack_49c + 4;
    } while (iStack_4c8 < *(int *)((int)param_1 + 0x68));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar27 = 0x30200a2;
    puStack_4c4 = puVar26;
    while( true ) {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar27,
                           *(int *)((int)param_1 + 0x50) * (iVar3 % *(int *)((int)param_1 + 100)) +
                           iVar24 & 0xffff,
                           *(int *)((int)param_1 + 0x54) * (iVar3 / *(int *)((int)param_1 + 100)) +
                           iVar22 & 0xffff);
      *(uint32_t *)(puStack_4c4 + -0x140) = uVar4;
      puStack_4c4 = puStack_4c4 + 4;
      iVar3 = iVar3 + 1;
      if (*(int *)((int)param_1 + 0x68) <= iVar3) break;
      iVar27 = iVar27 + 1;
    }
  }
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar27 = 0x30200b2;
    puVar28 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar27,
                           *(int *)((int)param_1 + 0x50) * (iVar3 % *(int *)((int)param_1 + 100)) +
                           iVar24 & 0xffff,
                           *(int *)((int)param_1 + 0x54) * (iVar3 / *(int *)((int)param_1 + 100)) +
                           iVar22 & 0xffff);
      *(uint32_t *)(puVar28 + -0x100) = uVar4;
      iVar27 = iVar27 + 1;
      iVar3 = iVar3 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar3 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar24 = 0x30200c2;
    puVar28 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar24,0,0);
      *(uint32_t *)(puVar28 + -0xc0) = uVar4;
      iVar24 = iVar24 + 1;
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar28 + -0xc0),*(uint32_t *)(puVar28 + -0x180));
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar24 = 0x30200d2;
    puStack_498 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar24,0,0);
      *(uint32_t *)(puStack_498 + -0x80) = uVar4;
      puStack_498 = puStack_498 + 4;
      iVar22 = iVar22 + 1;
      iVar24 = iVar24 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar28 + -0x80),*(uint32_t *)(puVar28 + -0x140));
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iStack_4bc = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    iVar22 = 0x30200e2;
    puVar28 = puVar26;
    do {
      uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),iVar22,0,0);
      *(uint32_t *)(puVar28 + -0x40) = uVar4;
      iVar22 = iVar22 + 1;
      iStack_4bc = iStack_4bc + 1;
      puVar28 = puVar28 + 4;
    } while (iStack_4bc < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      write_field_at_offset_0x10(*(uint32_t *)(puVar28 + -0x40),*(uint32_t *)(puVar28 + -0x100));
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  pvVar5 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f2,(void *)0x250,(void *)0x18);
  pvVar6 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f3,0,0);
  pvVar7 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f4,0,0);
  pvVar8 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f5,0,0);
  pvVar9 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f6,(void *)0x20,(void *)0x198);
  pvVar10 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f7,(void *)0x80,(void *)0x198);
  pvVar11 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f8,(void *)200,(void *)0x198);
  pvVar12 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200f9,(void *)0x110,(void *)0x198);
  pvVar13 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200fa,(void *)0x1e8,(void *)0x198);
  pvVar14 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200fb,(void *)0x230,(void *)0x198);
  uVar4 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200fe,(void *)0x80,(void *)0xa8);
  pvVar15 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020100,0,0);
  call_helper_and_set_flag_104b7726(uVar4,0x180,1);
  iVar22 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020102,(void *)0x80,(void *)0xa8);
  iVar24 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020104,(void *)0x80,(void *)0xa8);
  uVar16 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200ff,(void *)0x80,(void *)0xd8);
  pvVar17 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020101,0,0);
  call_helper_and_set_flag_104b7726(uVar16,0x180,1);
  iVar3 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020103,(void *)0x80,(void *)0xd8);
  iVar27 = app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020105,(void *)0x80,(void *)0xd8);
  write_field_at_offset_0x48(pvVar15,uVar4);
  write_field_at_offset_0x48(pvVar17,uVar16);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar22);
  invoke_virtual_then_call_helper_10494188((int)pvVar15,iVar27);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar3);
  invoke_virtual_then_call_helper_10494188((int)pvVar17,iVar24);
  pvVar18 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200fc,(void *)0x78,(void *)0xa0);
  puVar28 = &DAT_00000078;
  pvVar20 = (void *)0xa0;
  pvVar19 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x30200fd,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  call_helper_and_set_flag_104cf6c8(pvVar19,8);
  iterate_and_remove_list_entry(pvVar18,pvVar19,puVar28,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar15,puVar28,pvVar20);
  iterate_and_remove_list_entry(pvVar18,pvVar17,puVar28,pvVar20);
  graph_link_nextprev((int)pvVar15,(int)pvVar17,0xf,pvVar20);
  graph_link_nextprev((int)pvVar17,(int)pvVar15,0x10,pvVar20);
  pvVar15 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020106,(void *)0x20,(void *)0x198);
  pvVar17 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020107,(void *)0x80,(void *)0x198);
  pvVar19 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020108,(void *)0x1b8,(void *)0x198);
  puVar28 = &DAT_00000200;
  pvVar21 = (void *)0x198;
  pvVar20 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3020109,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,puVar28,pvVar21);
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puStack_480 = auStack_148;
    puVar28 = puVar26;
    do {
      iVar24 = *(int *)(puVar28 + -0x1c0);
      invoke_virtual_then_call_helper_10494188(puStack_480[-0x80],iVar24);
      invoke_virtual_then_call_helper_10494188(*(int *)(puVar28 + -0x200),iVar24);
      puVar28 = puVar28 + 4;
      puStack_480 = puStack_480 + 1;
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iStack_494 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puStack_4c0 = auStack_148;
    puStack_468 = puVar26;
    do {
      iVar24 = puStack_4c0[-0x80];
      iVar22 = *(int *)(puStack_468 + -0x200);
      graph_link_nextprev(iVar24,iVar22,0x10,pvVar21);
      graph_link_nextprev(iVar24,iVar22,0xf,pvVar21);
      graph_link_nextprev(iVar24,iVar22,0xd,pvVar21);
      graph_link_nextprev(iVar24,iVar22,0xe,pvVar21);
      iStack_494 = iStack_494 + 1;
      puStack_468 = puStack_468 + 4;
      puStack_4c0 = puStack_4c0 + 1;
    } while (iStack_494 < *(int *)((int)param_1 + 0x68));
  }
  graph_link_nextprev(aiStack_208[0],iStack_338,0xf,pvVar21);
  graph_link_nextprev(aiStack_208[0],aiStack_348[1],0xd,pvVar21);
  graph_link_nextprev(aiStack_208[1],iStack_334,0xf,pvVar21);
  graph_link_nextprev(aiStack_208[1],aiStack_348[2],0xd,pvVar21);
  graph_link_nextprev(aiStack_208[1],aiStack_348[0],0xe,pvVar21);
  graph_link_nextprev(aiStack_208[2],iStack_330,0xf,pvVar21);
  graph_link_nextprev(aiStack_208[2],aiStack_348[3],0xd,pvVar21);
  graph_link_nextprev(aiStack_208[2],aiStack_348[1],0xe,pvVar21);
  graph_link_nextprev(aiStack_208[3],iStack_32c,0xf,pvVar21);
  graph_link_nextprev(aiStack_208[3],iStack_338,0xd,pvVar21);
  graph_link_nextprev(aiStack_208[3],aiStack_348[2],0xe,pvVar21);
  graph_link_nextprev(iStack_1f8,aiStack_348[0],0x10,pvVar21);
  graph_link_nextprev(iStack_1f8,iStack_328,0xf,pvVar21);
  graph_link_nextprev(iStack_1f8,iStack_334,0xd,pvVar21);
  graph_link_nextprev(iStack_1f8,aiStack_348[3],0xe,pvVar21);
  graph_link_nextprev(iStack_1f4,aiStack_348[1],0x10,pvVar21);
  graph_link_nextprev(iStack_1f4,iStack_324,0xf,pvVar21);
  graph_link_nextprev(iStack_1f4,iStack_330,0xd,pvVar21);
  graph_link_nextprev(iStack_1f4,iStack_338,0xe,pvVar21);
  graph_link_nextprev(iStack_1f0,aiStack_348[2],0x10,pvVar21);
  graph_link_nextprev(iStack_1f0,iStack_320,0xf,pvVar21);
  graph_link_nextprev(iStack_1f0,iStack_32c,0xd,pvVar21);
  graph_link_nextprev(iStack_1f0,iStack_334,0xe,pvVar21);
  graph_link_nextprev(iStack_1ec,aiStack_348[3],0x10,pvVar21);
  graph_link_nextprev(iStack_1ec,iStack_31c,0xf,pvVar21);
  graph_link_nextprev(iStack_1ec,iStack_328,0xd,pvVar21);
  graph_link_nextprev(iStack_1ec,iStack_330,0xe,pvVar21);
  graph_link_nextprev(iStack_1e8,iStack_338,0x10,pvVar21);
  graph_link_nextprev(iStack_1e8,iStack_318,0xf,pvVar21);
  graph_link_nextprev(iStack_1e8,iStack_324,0xd,pvVar21);
  graph_link_nextprev(iStack_1e8,iStack_32c,0xe,pvVar21);
  graph_link_nextprev(iStack_1e4,iStack_334,0x10,pvVar21);
  graph_link_nextprev(iStack_1e4,iStack_314,0xf,pvVar21);
  graph_link_nextprev(iStack_1e4,iStack_320,0xd,pvVar21);
  graph_link_nextprev(iStack_1e4,iStack_328,0xe,pvVar21);
  graph_link_nextprev(iStack_1e0,iStack_330,0x10,pvVar21);
  graph_link_nextprev(iStack_1e0,iStack_310,0xf,pvVar21);
  graph_link_nextprev(iStack_1e0,iStack_31c,0xd,pvVar21);
  graph_link_nextprev(iStack_1e0,iStack_324,0xe,pvVar21);
  graph_link_nextprev(iStack_1dc,iStack_32c,0x10,pvVar21);
  graph_link_nextprev(iStack_1dc,iStack_30c,0xf,pvVar21);
  graph_link_nextprev(iStack_1dc,iStack_318,0xd,pvVar21);
  graph_link_nextprev(iStack_1dc,iStack_320,0xe,pvVar21);
  graph_link_nextprev(iStack_1d8,iStack_328,0x10,pvVar21);
  graph_link_nextprev(iStack_1d8,iStack_314,0xd,pvVar21);
  graph_link_nextprev(iStack_1d8,iStack_31c,0xe,pvVar21);
  graph_link_nextprev(iStack_1d4,iStack_324,0x10,pvVar21);
  graph_link_nextprev(iStack_1d4,iStack_310,0xd,pvVar21);
  graph_link_nextprev(iStack_1d4,iStack_318,0xe,pvVar21);
  graph_link_nextprev(iStack_1d0,iStack_320,0x10,pvVar21);
  graph_link_nextprev(iStack_1d0,iStack_30c,0xd,pvVar21);
  graph_link_nextprev(iStack_1d0,iStack_314,0xe,pvVar21);
  graph_link_nextprev(iStack_1cc,iStack_31c,0x10,pvVar21);
  pvVar2 = (void *)0xe;
  graph_link_nextprev(iStack_1cc,iStack_310,0xe,pvVar21);
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar23 = auStack_148;
    do {
      iterate_and_remove_list_entry(pvVar1,(void *)puVar23[-0x80],pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    puVar23 = auStack_c8;
    do {
      iterate_and_remove_list_entry(pvVar1,(void *)puVar23[-0x80],pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar23 = puVar23 + 1;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar28 + -0x200),pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar28 + -0xc0),pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  puVar28 = puVar26;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar28 + -0x80),pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar28 = puVar28 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iVar22 = 0;
  if (0 < *(int *)((int)param_1 + 0x68)) {
    do {
      iterate_and_remove_list_entry(pvVar1,*(void **)(puVar26 + -0x40),pvVar2,pvVar21);
      iVar22 = iVar22 + 1;
      puVar26 = puVar26 + 4;
    } while (iVar22 < *(int *)((int)param_1 + 0x68));
  }
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar9,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar10,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar11,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar12,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar13,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar14,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar18,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar15,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar17,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar19,pvVar2,pvVar21);
  iterate_and_remove_list_entry(pvVar1,pvVar20,pvVar2,pvVar21);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}
