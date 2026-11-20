/* @k10d build_viewfinder_overlay_grid @ 0x1037fcb8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 3x3 grid of UI overlay objects with calculated positions and links them
 *   into a display hierarchy.
 * summary:
 *   The function writes grid dimensions (0x40, 0xc0, etc.) to a struct at param_1. It then
 *   calls app_obj_factory repeatedly to create object handles for a 3x3 grid, calculating
 *   X/Y coordinates based on the stored dimensions and offsets. These handles are grouped
 *   into rows and columns, linked via write_field_at_offset_0x10 and
 *   write_field_at_offset_0x48, and finally registered with a parent container (pvVar1)
 *   using iterate_and_remove_list_entry. The specific coordinate math (dividing by 3, using
 *   modulo) strongly suggests a grid layout for a viewfinder overlay (e.g., focus points or
 *   exposure zones).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1037ff6a) overlaps instruction at (ram,0x1037ff68)
    */

void build_viewfinder_overlay_grid(cls_10558e74 *param_1,uint32_t param_2,void *param_3,void *param_4)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uintptr_t sp;
  int iStack_29c;
  int iStack_298;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_274;
  int iStack_270;
  int iStack_200;
  int iStack_1fc;
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
  int iStack_1a4;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  uint32_t auStack_140 [6];
  uint32_t auStack_128 [6];
  uint32_t auStack_110 [6];
  uint32_t auStack_f8 [6];
  int aiStack_e0 [6];
  uint32_t auStack_c8 [6];
  uint32_t auStack_b0 [6];
  uint32_t auStack_98 [6];
  uint32_t auStack_80 [6];
  int aiStack_68 [6];
  uint32_t auStack_50 [6];
  uint32_t auStack_38 [6];
  int aiStack_20 [6];
  
  param_1->field_0x30 = 0x40;
  *(uint32_t *)&param_1->field_0x34 = 0x40;
  *(uint32_t *)&param_1->field_0x38 = 0xc0;
  *(uint32_t *)&param_1->field_0x3c = 0xc0;
  param_1->field_0x48 = 0x80;
  param_1->field_0x4c = 0x60;
  iterate_range_and_call_match((char*)(param_1) ->field_0x24,(uint *)0x1055d920/*ROM*/,param_3,param_4);
  pvVar1 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080000,(void *)(0),(void *)(0));
  pvVar2 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080001,(void *)(0),(void *)(0));
  iVar11 = 0;
  iStack_180 = 1;
  iVar14 = 0x3080002;
  iStack_288 = 0;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * (iVar11 % 3)) - 8U & 0xffff),(void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * (iVar11 / 3)) - 0x20U & 0xffff)));
    *(uint32_t *)((int)auStack_140 + iStack_288) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 1), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 1) % 3)) - 8U & 0xffff), (void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 1) / 3)) - 0x20U & 0xffff)));
    *(uint32_t *)((int)auStack_140 + iStack_288 + 4) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 2), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 2) % 3)) - 8U & 0xffff), (void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 2) / 3)) - 0x20U & 0xffff)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)auStack_140 + iStack_288 + 8) = uVar3;
    iVar14 = iVar14 + 3;
    iStack_288 = iStack_288 + 0xc;
    iStack_180 = iStack_180 + -1;
  } while (-1 < iStack_180);
  iStack_18c = 1;
  iVar14 = 0;
  iVar11 = 0x3080008;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_128 + iVar14) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_128 + iVar14 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 2),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_128 + iVar14 + 8) = uVar3;
    iVar11 = iVar11 + 3;
    iVar14 = iVar14 + 0xc;
    iStack_18c = iStack_18c + -1;
  } while (-1 < iStack_18c);
  iVar11 = 0;
  iVar14 = 1;
  do {
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_128 + iVar11), *(uint32_t *)((int)auStack_140 + iVar11));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_128 + iVar11 + 4), *(uint32_t *)((int)auStack_140 + iVar11 + 4));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_128 + iVar11 + 8), *(uint32_t *)((int)auStack_140 + iVar11 + 8));
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iVar11 = 0;
  iStack_188 = 1;
  iStack_29c = 0;
  iVar14 = 0x308000e;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * (iVar11 % 3) & 0xffff), (void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * (iVar11 / 3) & 0xffff)));
    *(uint32_t *)((int)auStack_110 + iStack_29c) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 1), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 1) % 3) & 0xffff),(void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 1) / 3) & 0xffff)));
    *(uint32_t *)((int)auStack_110 + iStack_29c + 4) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 2), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 2) % 3) & 0xffff),(void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 2) / 3) & 0xffff)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)auStack_110 + iStack_29c + 8) = uVar3;
    iVar14 = iVar14 + 3;
    iStack_29c = iStack_29c + 0xc;
    iStack_188 = iStack_188 + -1;
  } while (-1 < iStack_188);
  iStack_1a4 = 1;
  iVar14 = 0;
  iVar11 = 0x3080014;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_f8 + iVar14) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_f8 + iVar14 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 2),(void *)(0),(void *)(0)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)auStack_f8 + iVar14 + 8) = uVar3;
    iVar14 = iVar14 + 0xc;
    iStack_1a4 = iStack_1a4 + -1;
  } while (-1 < iStack_1a4);
  iStack_184 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_f8 + iVar11), *(uint32_t *)((int)auStack_110 + iVar11));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_f8 + iVar11 + 4), *(uint32_t *)((int)auStack_110 + iVar11 + 4));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_f8 + iVar11 + 8), *(uint32_t *)((int)auStack_110 + iVar11 + 8));
    iVar11 = iVar11 + 0xc;
    iStack_184 = iStack_184 + -1;
  } while (-1 < iStack_184);
  iStack_17c = 1;
  iStack_284 = 0;
  iStack_28c = 0x308001a;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_28c),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_e0 + iStack_284) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_28c + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_e0 + iStack_284 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_28c + 2),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_e0 + iStack_284 + 8) = uVar3;
    iStack_28c = iStack_28c + 3;
    iStack_284 = iStack_284 + 0xc;
    iStack_17c = iStack_17c + -1;
  } while (-1 < iStack_17c);
  iStack_1f4 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x48(*(void **)((int)aiStack_e0 + iVar11),*(uint32_t *)((int)auStack_f8 + iVar11));
    write_field_at_offset_0x48(*(void **)((int)aiStack_e0 + iVar11 + 4), *(uint32_t *)((int)auStack_f8 + iVar11 + 4));
    write_field_at_offset_0x48(*(void **)((int)aiStack_e0 + iVar11 + 8), *(uint32_t *)((int)auStack_f8 + iVar11 + 8));
    iVar11 = iVar11 + 0xc;
    iStack_1f4 = iStack_1f4 + -1;
  } while (-1 < iStack_1f4);
  iStack_290 = 0;
  iStack_1f0 = 1;
  iStack_274 = 0;
  iStack_270 = 0x3080020;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_270), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * (iStack_290 % 3) & 0xffff),(void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * (iStack_290 / 3) & 0xffff)));
    *(uint32_t *)((int)auStack_c8 + iStack_274) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_270 + 1), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iStack_290 + 1) % 3) & 0xffff),(void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iStack_290 + 1) / 3) & 0xffff)));
    *(uint32_t *)((int)auStack_c8 + iStack_274 + 4) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_270 + 2), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iStack_290 + 2) % 3) & 0xffff),(void *)(*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iStack_290 + 2) / 3) & 0xffff)));
    *(uint32_t *)((int)auStack_c8 + iStack_274 + 8) = uVar3;
    iStack_290 = iStack_290 + 3;
    iStack_270 = iStack_270 + 3;
    iStack_274 = iStack_274 + 0xc;
    iStack_1f0 = iStack_1f0 + -1;
  } while (-1 < iStack_1f0);
  iStack_1ec = 1;
  iStack_298 = 0;
  iVar11 = 0x3080026;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_b0 + iStack_298) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_b0 + iStack_298 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 2),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_b0 + iStack_298 + 8) = uVar3;
    iVar11 = iVar11 + 3;
    iStack_298 = iStack_298 + 0xc;
    iStack_1ec = iStack_1ec + -1;
  } while (-1 < iStack_1ec);
  iVar14 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_b0 + iVar11),*(uint32_t *)((int)auStack_c8 + iVar11) );
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_b0 + iVar11 + 4), *(uint32_t *)((int)auStack_c8 + iVar11 + 4));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_b0 + iVar11 + 8), *(uint32_t *)((int)auStack_c8 + iVar11 + 8));
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iVar11 = param_1->field_0x30 + (int)param_1->field_0x48 / 2 + -0x18;
  iVar14 = *(int *)&param_1->field_0x34 + (int)param_1->field_0x4c / 2 + -0x18;
  iVar12 = 0;
  iStack_1e8 = 1;
  iVar13 = 0;
  iStack_280 = 0x308002c;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_280), (void *)(*(int *)&param_1->field_0x38 * (iVar12 % 3) + iVar11 & 0xffff), (void *)(*(int *)&param_1->field_0x3c * (iVar12 / 3) + iVar14 & 0xffff)));
    *(uint32_t *)((int)auStack_98 + iVar13) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_280 + 1), (void *)(*(int *)&param_1->field_0x38 * ((iVar12 + 1) % 3) + iVar11 & 0xffff), (void *)(*(int *)&param_1->field_0x3c * ((iVar12 + 1) / 3) + iVar14 & 0xffff)));
    *(uint32_t *)((int)auStack_98 + iVar13 + 4) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iStack_280 + 2), (void *)(*(int *)&param_1->field_0x38 * ((iVar12 + 2) % 3) + iVar11 & 0xffff), (void *)(*(int *)&param_1->field_0x3c * ((iVar12 + 2) / 3) + iVar14 & 0xffff)));
    *(uint32_t *)((int)auStack_98 + iVar13 + 8) = uVar3;
    iVar12 = iVar12 + 3;
    iStack_280 = iStack_280 + 3;
    iVar13 = iVar13 + 0xc;
    iStack_1e8 = iStack_1e8 + -1;
  } while (-1 < iStack_1e8);
  iStack_1e4 = 1;
  iVar14 = 0;
  iVar11 = 0x3080032;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_80 + iVar14) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_80 + iVar14 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 2),(void *)(0),(void *)(0)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)auStack_80 + iVar14 + 8) = uVar3;
    iVar14 = iVar14 + 0xc;
    iStack_1e4 = iStack_1e4 + -1;
  } while (-1 < iStack_1e4);
  iStack_1e0 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_80 + iVar11),*(uint32_t *)((int)auStack_98 + iVar11) );
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_80 + iVar11 + 4), *(uint32_t *)((int)auStack_98 + iVar11 + 4));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_80 + iVar11 + 8), *(uint32_t *)((int)auStack_98 + iVar11 + 8));
    iVar11 = iVar11 + 0xc;
    iStack_1e0 = iStack_1e0 + -1;
  } while (-1 < iStack_1e0);
  iStack_1dc = 1;
  iVar14 = 0;
  iVar11 = 0x3080038;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_68 + iVar14) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_68 + iVar14 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar11 + 2),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)aiStack_68 + iVar14 + 8) = uVar3;
    iVar11 = iVar11 + 3;
    iVar14 = iVar14 + 0xc;
    iStack_1dc = iStack_1dc + -1;
  } while (-1 < iStack_1dc);
  iStack_1d8 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x48(*(void **)((int)aiStack_68 + iVar11),*(uint32_t *)((int)auStack_80 + iVar11));
    write_field_at_offset_0x48(*(void **)((int)aiStack_68 + iVar11 + 4), *(uint32_t *)((int)auStack_80 + iVar11 + 4));
    write_field_at_offset_0x48(*(void **)((int)aiStack_68 + iVar11 + 8), *(uint32_t *)((int)auStack_80 + iVar11 + 8));
    iVar11 = iVar11 + 0xc;
    iStack_1d8 = iStack_1d8 + -1;
  } while (-1 < iStack_1d8);
  iVar11 = 0;
  iStack_1d4 = 1;
  iVar12 = 0;
  iVar14 = 0x308003e;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * (iVar11 % 3) & 0xffff), (void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * (iVar11 / 3) ) - 0x18U & 0xffff)));
    *(uint32_t *)((int)auStack_50 + iVar12) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 1), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 1) % 3) & 0xffff),(void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 1) / 3)) - 0x18U & 0xffff)));
    *(uint32_t *)((int)auStack_50 + iVar12 + 4) = uVar3;
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 2), (void *)(param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 2) % 3) & 0xffff),(void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 2) / 3)) - 0x18U & 0xffff)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)auStack_50 + iVar12 + 8) = uVar3;
    iVar14 = iVar14 + 3;
    iVar12 = iVar12 + 0xc;
    iStack_1d4 = iStack_1d4 + -1;
  } while (-1 < iStack_1d4);
  iVar12 = 1;
  iVar11 = 0;
  iVar14 = 0x3080044;
  do {
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_38 + iVar11) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 1),(void *)(0),(void *)(0)));
    *(uint32_t *)((int)auStack_38 + iVar11 + 4) = uVar3;
    uVar3 = (uintptr_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar14 + 2),(void *)(0),(void *)(0)));
    iVar14 = iVar14 + 3;
    *(uint32_t *)((int)auStack_38 + iVar11 + 8) = uVar3;
    iVar12 = iVar12 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar12);
  iStack_200 = 1;
  iVar11 = 0;
  do {
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_38 + iVar11),*(uint32_t *)((int)auStack_50 + iVar11) );
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_38 + iVar11 + 4), *(uint32_t *)((int)auStack_50 + iVar11 + 4));
    write_field_at_offset_0x10(*(uint32_t *)((int)auStack_38 + iVar11 + 8), *(uint32_t *)((int)auStack_50 + iVar11 + 8));
    iVar11 = iVar11 + 0xc;
    iStack_200 = iStack_200 + -1;
  } while (-1 < iStack_200);
  iVar11 = 0;
  iStack_1d0 = 1;
  iVar14 = 0;
  iVar12 = 0x308004a;
  do {
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar12), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * (iVar11 % 3)) - 0x10U & 0xffff),(void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * (iVar11 / 3)) - 0x28U & 0xffff)));
    *(uint32_t *)((int)aiStack_20 + iVar14) = uVar3;
    call_helper_and_set_flag_104cf6c8((int *)(uVar3),(uint16_t)(8));
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar12 + 1), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 1) % 3)) - 0x10U & 0xffff), (void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 1) / 3)) - 0x28U & 0xffff)));
    *(uint32_t *)((int)aiStack_20 + iVar14 + 4) = uVar3;
    call_helper_and_set_flag_104cf6c8((int *)(uVar3),(uint16_t)(8));
    uVar3 = (uint32_t)(app_obj_factory((int *)(param_1->field_0x24),(void *)(iVar12 + 2), (void *)((param_1->field_0x30 + *(int *)&param_1->field_0x38 * ((iVar11 + 2) % 3)) - 0x10U & 0xffff), (void *)((*(int *)&param_1->field_0x34 + *(int *)&param_1->field_0x3c * ((iVar11 + 2) / 3)) - 0x28U & 0xffff)));
    iVar11 = iVar11 + 3;
    *(uint32_t *)((int)aiStack_20 + iVar14 + 8) = uVar3;
    call_helper_and_set_flag_104cf6c8((int *)(uVar3),(uint16_t)(8));
    iVar12 = iVar12 + 3;
    iVar14 = iVar14 + 0xc;
    iStack_1d0 = iStack_1d0 + -1;
  } while (-1 < iStack_1d0);
  pvVar4 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080050,(void *)0x260,(void *)0x18);
  pvVar5 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080051,(void *)(0),(void *)(0));
  pvVar6 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080052,(void *)(0),(void *)(0));
  pvVar7 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080053,(void *)(0),(void *)(0));
  pvVar9 = (void *)0x1a0;
  pvVar10 = (void *)0x198;
  pvVar8 = (void *)app_obj_factory((int *)(param_1->field_0x24),(void *)0x3080056,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar1,pvVar2,pvVar9,pvVar10);
  iStack_1cc = 1;
  iVar11 = 0;
  do {
    iVar14 = *(int *)((int)aiStack_20 + iVar11);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_e0 + iVar11),iVar14);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_68 + iVar11),iVar14);
    iVar14 = *(int *)((int)aiStack_20 + iVar11 + 4);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_e0 + iVar11 + 4),iVar14);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_68 + iVar11 + 4),iVar14);
    iVar14 = *(int *)((int)aiStack_20 + iVar11 + 8);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_e0 + iVar11 + 8),iVar14);
    invoke_virtual_then_call_helper_10494188(*(int *)((int)aiStack_68 + iVar11 + 8),iVar14);
    iVar11 = iVar11 + 0xc;
    iStack_1cc = iStack_1cc + -1;
  } while (-1 < iStack_1cc);
  iStack_1fc = 1;
  iVar11 = 0;
  do {
    iVar12 = *(int *)((int)aiStack_e0 + iVar11);
    iVar14 = *(int *)((int)aiStack_68 + iVar11);
    graph_link_nextprev(iVar12,iVar14,0x10,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xf,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xd,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xe,pvVar10);
    iVar12 = *(int *)((int)aiStack_e0 + iVar11 + 4);
    iVar14 = *(int *)((int)aiStack_68 + iVar11 + 4);
    graph_link_nextprev(iVar12,iVar14,0x10,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xf,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xd,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xe,pvVar10);
    iVar12 = *(int *)((int)aiStack_e0 + iVar11 + 8);
    iVar14 = *(int *)((int)aiStack_68 + iVar11 + 8);
    iVar11 = iVar11 + 0xc;
    graph_link_nextprev(iVar12,iVar14,0x10,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xf,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xd,pvVar10);
    graph_link_nextprev(iVar12,iVar14,0xe,pvVar10);
    iStack_1fc = iStack_1fc + -1;
  } while (-1 < iStack_1fc);
  graph_link_nextprev(aiStack_68[0],aiStack_e0[3],0xf,pvVar10);
  graph_link_nextprev(aiStack_68[0],aiStack_e0[1],0xd,pvVar10);
  graph_link_nextprev(aiStack_68[1],aiStack_e0[4],0xf,pvVar10);
  graph_link_nextprev(aiStack_68[1],aiStack_e0[2],0xd,pvVar10);
  graph_link_nextprev(aiStack_68[1],aiStack_e0[0],0xe,pvVar10);
  graph_link_nextprev(aiStack_68[2],aiStack_e0[5],0xf,pvVar10);
  graph_link_nextprev(aiStack_68[2],aiStack_e0[3],0xd,pvVar10);
  graph_link_nextprev(aiStack_68[2],aiStack_e0[1],0xe,pvVar10);
  graph_link_nextprev(aiStack_68[3],aiStack_e0[0],0x10,pvVar10);
  graph_link_nextprev(aiStack_68[3],aiStack_e0[4],0xd,pvVar10);
  graph_link_nextprev(aiStack_68[3],aiStack_e0[2],0xe,pvVar10);
  graph_link_nextprev(aiStack_68[4],aiStack_e0[1],0x10,pvVar10);
  graph_link_nextprev(aiStack_68[4],aiStack_e0[5],0xd,pvVar10);
  graph_link_nextprev(aiStack_68[4],aiStack_e0[3],0xe,pvVar10);
  graph_link_nextprev(aiStack_68[5],aiStack_e0[2],0x10,pvVar10);
  pvVar2 = (void *)0xe;
  graph_link_nextprev(aiStack_68[5],aiStack_e0[4],0xe,pvVar10);
  iVar14 = 1;
  iVar11 = 0;
  do {
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_128 + iVar11),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_128 + iVar11 + 4),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_128 + iVar11 + 8),pvVar2,pvVar10);
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iVar14 = 1;
  iVar11 = 0;
  do {
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_e0 + iVar11),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_e0 + iVar11 + 4),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_e0 + iVar11 + 8),pvVar2,pvVar10);
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iStack_1f8 = 1;
  iVar11 = 0;
  do {
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_b0 + iVar11),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_b0 + iVar11 + 4),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_b0 + iVar11 + 8),pvVar2,pvVar10);
    iVar11 = iVar11 + 0xc;
    iStack_1f8 = iStack_1f8 + -1;
  } while (-1 < iStack_1f8);
  iVar14 = 1;
  iVar11 = 0;
  do {
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_68 + iVar11),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_68 + iVar11 + 4),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)aiStack_68 + iVar11 + 8),pvVar2,pvVar10);
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iVar14 = 1;
  iVar11 = 0;
  do {
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_38 + iVar11),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_38 + iVar11 + 4),pvVar2,pvVar10);
    iterate_and_remove_list_entry(pvVar1,*(void **)((int)auStack_38 + iVar11 + 8),pvVar2,pvVar10);
    iVar14 = iVar14 + -1;
    iVar11 = iVar11 + 0xc;
  } while (-1 < iVar14);
  iterate_and_remove_list_entry(pvVar1,pvVar4,pvVar2,pvVar10);
  iterate_and_remove_list_entry(pvVar1,pvVar5,pvVar2,pvVar10);
  iterate_and_remove_list_entry(pvVar1,pvVar6,pvVar2,pvVar10);
  iterate_and_remove_list_entry(pvVar1,pvVar7,pvVar2,pvVar10);
  iterate_and_remove_list_entry(pvVar1,pvVar8,pvVar2,pvVar10);
  set_object_field_at_offset_0x10(param_1,pvVar1);
  return;
}