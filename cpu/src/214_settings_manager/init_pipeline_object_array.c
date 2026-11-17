/* @k10d init_pipeline_object_array @ 0x104b0a96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a pipeline object by allocating and populating multiple internal arrays via
 *   helper functions.
 * summary:
 *   The function allocates several heap blocks and populates them by calling a series of
 *   helper functions (build_object_array_from_table, build_class_array_from_ram_table,
 *   build_event_list_from_arrays_104b125a, build_event_list_from_arrays_104b12f2,
 *   create_object_with_five_params, create_object_with_helper) with parameters derived from
 *   param_1 and param_2. It stores the results of these calls into an array of pointers
 *   within the object pointed to by param_1. The loop count is determined by a flag in
 *   memory (cRam105f9c00) which sets the iteration count to either 2 or 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_pipeline_object_array(uint32_t *param_1,int param_2)

{
  uint32_t *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t uVar7;
  uint8_t *puVar8;
  uint32_t *puVar9;
  uint8_t uVar12;
  uint32_t uVar10;
  int iVar11;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uintptr_t sp;
  int *piVar16;
  uint8_t auStack_dc [20];
  int iStack_b8;
  int iStack_b4;
  uint uStack_ac;
  uint32_t auStack_74 [4];
  uint32_t auStack_64 [4];
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t auStack_44 [4];
  uint32_t auStack_34 [8];
  ushort auStack_14 [4];
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  uint8_t uStack_9;
  
  piVar16 = (int *)auStack_dc;
  uVar7 = get_or_init_sram_block_1052b652();
  puVar8 = (uint8_t *)heap_alloc_2(2);
  puVar9 = (uint32_t *)heap_alloc_2(8);
  uVar12 = read_first_byte_104b0a4e(**(uint32_t **)(param_2 + 4));
  *puVar8 = uVar12;
  uVar10 = get_field_at_offset_8_104b0a58(**(uint32_t **)(param_2 + 4));
  *puVar9 = uVar10;
  uVar12 = read_first_byte_104b0a4e(*(uint32_t *)(*(int *)(param_2 + 4) + 8));
  puVar8[1] = uVar12;
  uVar10 = get_field_at_offset_8_104b0a58(*(uint32_t *)(*(int *)(param_2 + 4) + 8));
  puVar9[1] = uVar10;
  *piVar16 = (int)puVar8;
  piVar16[1] = (int)puVar9;
  uVar10 = build_nested_object_array(param_1,1,2,(uint16_t *)0x105b7e44/*ROM*/,(uint8_t *)*piVar16,
                        (uint32_t *)piVar16[1]);
  *param_1 = uVar10;
  heap_free_2((int)puVar9);
  heap_free_2((int)puVar8);
  uVar10 = build_object_array_from_table(param_1,uVar7,0);
  param_1[1] = uVar10;
  uVar10 = build_object_array_from_table(param_1,uVar7,1);
  param_1[2] = uVar10;
  puVar9 = (uint32_t *)heap_alloc_2(8);
  param_1[3] = puVar9;
  uVar10 = build_class_array_from_ram_table(param_1,uVar7,0);
  *puVar9 = uVar10;
  iVar13 = param_1[3];
  uVar10 = build_class_array_from_ram_table(param_1,uVar7,1);
  *(uint32_t *)(iVar13 + 4) = uVar10;
  auStack_74[0] = *(uint32_t *)param_1[3];
  auStack_74[1] = ((uint32_t *)param_1[3])[1];
  auStack_64[0] = param_1[1];
  auStack_64[2] = param_1[2];
  uStack_54 = 0;
  uStack_50 = 1;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_ac = 4;
  auStack_74[2] = auStack_74[0];
  auStack_74[3] = auStack_74[1];
  auStack_64[1] = auStack_64[0];
  auStack_64[3] = auStack_64[2];
  iVar13 = heap_alloc_2(0x10);
  iVar11 = heap_alloc_2(0x10);
  uVar14 = 0;
  do {
    iVar6 = uVar14 * 4;
    *(uint32_t *)(iVar6 + iVar13) = auStack_74[uVar14];
    puVar9 = auStack_64 + uVar14;
    uVar14 = uVar14 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar11) = *puVar9;
  } while (uVar14 < 4);
  if (cRam105f9c00 != '\0') {
    uStack_ac = 2;
    *(uint8_t *)((int)param_1 + 0x21) = 2;
  }
  uVar15 = 0;
  iVar6 = uStack_ac << 2;
  uVar10 = heap_alloc_2(iVar6);
  puVar9 = &uStack_54;
  puVar8 = &uStack_c;
  param_1[4] = uVar10;
  uVar14 = (uint)*(byte *)((int)param_1 + 0x21);
  iStack_b8 = iVar11;
  iStack_b4 = iVar13;
  do {
    iVar3 = uVar15 * 4;
    iVar4 = param_1[4];
    *piVar16 = uVar7;
    piVar16[1] = iStack_b4;
    uVar15 = uVar15 + 1 & 0xff;
    piVar16[2] = iStack_b8;
    uVar10 = build_event_list_from_arrays_104b125a(param_1,uVar14,(int)puVar9,(int)puVar8,*piVar16,piVar16[1],piVar16[2]);
    *(uint32_t *)(iVar3 + iVar4) = uVar10;
    uVar14 = (uint)*(byte *)((int)param_1 + 0x21);
    iStack_b4 = iStack_b4 + uVar14 * 4;
    puVar9 = puVar9 + uVar14;
    iStack_b8 = uVar14 * 4 + iStack_b8;
    puVar8 = puVar8 + uVar14;
  } while (uVar15 < uStack_ac);
  puVar8 = &uStack_c;
  auStack_44[0] = param_1[2];
  auStack_44[1] = param_1[2];
  puVar9 = &uStack_54;
  auStack_44[2] = param_1[1];
  auStack_44[3] = param_1[1];
  uVar14 = 0;
  do {
    iVar3 = uVar14 * 4;
    puVar1 = auStack_44 + uVar14;
    uVar14 = uVar14 + 1 & 0xff;
    *(uint32_t *)(iVar3 + iVar11) = *puVar1;
  } while (uVar14 < 4);
  uVar10 = heap_alloc_2(iVar6);
  param_1[6] = uVar10;
  uVar15 = 0;
  uVar14 = (uint)*(byte *)((int)param_1 + 0x21);
  iStack_b8 = iVar11;
  iStack_b4 = iVar13;
  do {
    iVar3 = uVar15 * 4;
    iVar4 = param_1[6];
    *piVar16 = uVar7;
    piVar16[1] = iStack_b4;
    uVar15 = uVar15 + 1 & 0xff;
    piVar16[2] = iStack_b8;
    uVar10 = build_event_list_from_arrays_104b12f2(param_1,uVar14,(int)puVar9,(int)puVar8,*piVar16,piVar16[1],piVar16[2]);
    *(uint32_t *)(iVar3 + iVar4) = uVar10;
    uVar14 = (uint)*(byte *)((int)param_1 + 0x21);
    iStack_b4 = iStack_b4 + uVar14 * 4;
    puVar9 = puVar9 + uVar14;
    iStack_b8 = uVar14 * 4 + iStack_b8;
    puVar8 = puVar8 + uVar14;
  } while (uVar15 < uStack_ac);
  heap_free_2(iVar11);
  heap_free_2(iVar13);
  auStack_14[0] = *(ushort *)(param_2 + 10);
  auStack_14[1] = *(uint16_t *)(param_2 + 0xc);
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 1;
  auStack_34[3] = 1;
  auStack_14[2] = auStack_14[0];
  auStack_14[3] = auStack_14[1];
  uVar10 = heap_alloc_2(iVar6);
  param_1[5] = uVar10;
  uVar14 = 0;
  do {
    iVar13 = param_1[5];
    uVar2 = auStack_14[uVar14];
    uVar5 = auStack_34[uVar14];
    uVar10 = *(uint32_t *)(param_1[4] + uVar14 * 4);
    *(uint8_t *)((int)piVar16 + 3) = 0;
    *(uint32_t *)((int)piVar16 + 4) = uVar5;
    *(int *)((int)piVar16 + 8) = param_2;
    *(uint32_t *)((int)piVar16 + 0x10) = uVar10;
    *(uint32_t *)((int)piVar16 + 0xc) = uVar7;
    uVar10 = create_object_with_five_params(param_1,(uint)uVar2,1,2,*(uint8_t *)((int)piVar16 + 3),
                          *(uint32_t *)((int)piVar16 + 4),*(uint32_t *)((int)piVar16 + 8),
                          *(uint32_t *)((int)piVar16 + 0xc),*(uint32_t *)((int)piVar16 + 0x10));
    *(uint32_t *)(iVar13 + uVar14 * 4) = uVar10;
    uVar14 = uVar14 + 1 & 0xff;
  } while (uVar14 < uStack_ac);
  auStack_34[4] = 1;
  auStack_34[5] = 1;
  auStack_34[6] = 0;
  auStack_34[7] = 0;
  uVar10 = heap_alloc_2(iVar6);
  param_1[7] = uVar10;
  uVar14 = 0;
  do {
    iVar13 = param_1[7];
    uVar10 = create_object_with_helper(param_1,auStack_34[uVar14 + 4],uVar7,
                          *(uint32_t *)(param_1[6] + uVar14 * 4));
    *(uint32_t *)(iVar13 + uVar14 * 4) = uVar10;
    uVar14 = uVar14 + 1 & 0xff;
  } while (uVar14 < uStack_ac);
  return 1;
}
