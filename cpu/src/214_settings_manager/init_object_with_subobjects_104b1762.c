/* @k10d init_object_with_subobjects_104b1762 @ 0x104b1762
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a large object by allocating and linking multiple sub-objects and setting
 *   up internal pointers.
 * summary:
 *   The function populates a structure (param_1) with pointers to newly created objects
 *   from various classes (cls_105d70a0, cls_105fa6fc, etc.). It calls helper functions
 *   (map_array_with_helper, alloc_two_object_array) to initialize specific fields and
 *   allocates heap memory for additional state (cls_105b7f20, cls_105b7f38, etc.). It sets
 *   up virtual method pointers and internal links between these sub-objects, returning 1 on
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_subobjects_104b1762(int *param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  byte *pbVar3;
  int iVar4;
  uint16_t uVar6;
  uint16_t uVar7;
  int *piVar5;
  int iVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  int *piVar11;
  uint8_t auStack_24 [4];
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  piVar11 = (int *)auStack_24;
  uVar2 = get_or_init_sram_block_104b0a5e();
  init_pipeline_object_array(uVar2,param_2);
  pbVar3 = (byte *)get_or_init_ram_buffer_104aba0c();
  uVar2 = get_or_init_sram_block_1052b652();
  iVar4 = cls_105d70a0_new(0);
  param_1[9] = iVar4;
  iVar4 = cls_105fa6fc_new(0);
  param_1[10] = iVar4;
  iVar4 = cls_105fa6d4_new(0);
  param_1[0xb] = iVar4;
  iVar4 = cls_105fa6ac_new(0);
  param_1[0xc] = iVar4;
  uStack_10 = 0;
  uStack_c = 1;
  iVar4 = map_array_with_helper(param_1,0,&uStack_10,2);
  *param_1 = iVar4;
  iVar4 = map_array_with_helper(param_1,1,&uStack_10,2);
  param_1[1] = iVar4;
  uVar6 = lookup_table_entry_by_key(uVar2,0,0,1);
  uVar7 = lookup_table_entry_by_key(uVar2,0,1,1);
  iVar4 = alloc_two_object_array(param_1,uVar6,uVar7);
  param_1[2] = iVar4;
  uVar6 = lookup_table_entry_by_key(uVar2,2,0,1);
  uVar7 = lookup_table_entry_by_key(uVar2,2,1,1);
  iVar4 = alloc_two_object_array(param_1,uVar6,uVar7);
  param_1[3] = iVar4;
  uVar6 = lookup_table_entry_by_key(uVar2,3,0,1);
  uVar7 = lookup_table_entry_by_key(uVar2,3,1,1);
  iVar4 = alloc_two_object_array(param_1,uVar6,uVar7);
  param_1[4] = iVar4;
  uVar6 = lookup_table_entry_by_key(uVar2,2,0,1);
  iVar4 = lookup_table_entry_by_key(uVar2,2,1,1);
  iVar4 = allocate_two_element_array(param_1,uVar6,iVar4,0x80);
  param_1[0xd] = iVar4;
  iVar4 = build_object_array_from_source(param_1,pbVar3);
  param_1[5] = iVar4;
  iVar4 = build_four_entry_parameter_table(param_1,pbVar3);
  param_1[7] = iVar4;
  iVar4 = cls_105b7f20_new(0,0x200);
  param_1[0xf] = iVar4;
  iVar4 = heap_alloc((void *)0x1c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    cls_105b7f38_new(iVar4);
  }
  param_1[0x10] = iVar4;
  iVar4 = heap_alloc((void *)0x1c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    cls_105b7f50_new(iVar4);
  }
  param_1[0x11] = iVar4;
  iVar8 = param_1[7];
  iVar9 = param_1[0xf];
  iVar10 = param_1[0x10];
  *piVar11 = iVar4;
  iVar4 = configure_parameter_array((int)param_1,iVar8,iVar9,iVar10,*piVar11);
  param_1[8] = iVar4;
  piVar5 = (int *)heap_alloc((void *)0x4c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    cls_105b7f68_new(piVar5);
  }
  param_1[0x12] = (int)piVar5;
  (**(code **)(*piVar5 + 0x14))((int)*(short *)(*piVar5 + 0x10) + (int)piVar5,0);
  piVar5 = (int *)param_1[0x12];
  iVar4 = *piVar5;
  sVar1 = *(short *)(iVar4 + 0xa8);
  uVar2 = (*(code *)0x104abed0/*ROM*/)(pbVar3);
  (**(code **)(iVar4 + 0xac))((int)piVar5 + (int)sVar1,uVar2);
  *(int *)(param_1[0x12] + 0x28) = param_1[0xf];
  *(int *)(param_1[0x12] + 0x2c) = param_1[0x10];
  *(int *)(param_1[0x12] + 0x30) = param_1[0x11];
  *(int *)(param_1[0x12] + 0x34) = param_1[8];
  if (param_1[0x12] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[0x12] + 0x1c;
  }
  (*(code *)0x104b29de/*ROM*/)(param_1[0xf],iVar4);
  if (param_1[0x12] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[0x12] + 0x18;
  }
  *(int *)(param_1[10] + 8) = iVar4;
  if (param_1[0x12] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[0x12] + 0x18;
  }
  *(int *)(param_1[0xb] + 4) = iVar4;
  return 1;
}
