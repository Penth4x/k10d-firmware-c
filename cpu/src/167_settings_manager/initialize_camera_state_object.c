/* @k10d initialize_camera_state_object @ 0x10478132
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes member objects for a camera state class and configures their
 *   initial parameters.
 * summary:
 *   The function acts as a virtual method (slot 2) for class cls_105aa5b4. It allocates
 *   nine member objects (cls_105aa4f0, cls_105aa40c, cls_105aa498, cls_105aa34c,
 *   cls_105aa39c, cls_105aa3c4, cls_105aa324, cls_105aa374, cls_105aa568) and stores their
 *   pointers in the object's memory layout (offsets 0x04 to 0x24). It then calls virtual
 *   methods on these members to set initial values, including a specific value of 500 for
 *   one member. The specific camera subsystem (AE, AF, etc.) is not identifiable from the
 *   generic class names or the lack of specific hardware register access in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_camera_state_object(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint32_t uVar7;
  int *piVar8;
  void *pvVar9;
  uintptr_t sp;
  void *pvStack_84;
  void *pvStack_80;
  int iStack_7c;
  int iStack_78;
  void *pvStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  void *pvStack_64;
  int iStack_60;
  void *pvStack_5c;
  int iStack_58;
  int iStack_50;
  void *pvStack_4c;
  int iStack_48;
  int iStack_44;
  void *pvStack_40;
  int iStack_3c;
  int iStack_38;
  void *pvStack_34;
  int iStack_30;
  int iStack_2c;
  void *pvStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar5 = get_or_create_sram_object_104816ee();
  pvVar9 = *(void **)(iVar5 + 0xc);
  get_or_create_sram_object_104816ee();
  piVar6 = (int *)get_or_create_ram_object();
  (**(code **)(*piVar6 + 0x14))((int)piVar6 + (int)*(short *)(*piVar6 + 0x10),0);
  piVar6 = (int *)get_or_create_singleton_10475f06();
  (**(code **)(*piVar6 + 0x14))((int)piVar6 + (int)*(short *)(*piVar6 + 0x10),0);
  uVar7 = (uint32_t)cls_105aa4f0_new(0);
  *(uint32_t *)((int)param_1 + 4) = uVar7;
  uVar7 = (uint32_t)cls_105aa40c_new(0);
  *(uint32_t *)((int)param_1 + 8) = uVar7;
  uVar7 = (uint32_t)cls_105aa498_new(0);
  *(uint32_t *)((int)param_1 + 0xc) = uVar7;
  piVar6 = (int *)((int)param_1 + 0x10);
  iVar5 = (int)cls_105aa34c_new(0);
  *piVar6 = iVar5;
  piVar1 = (int *)((int)param_1 + 0x14);
  iVar5 = (int)cls_105aa39c_new(0);
  *piVar1 = iVar5;
  piVar2 = (int *)((int)param_1 + 0x18);
  iVar5 = (int)cls_105aa3c4_new(0);
  *piVar2 = iVar5;
  piVar3 = (int *)((int)param_1 + 0x1c);
  iVar5 = (int)cls_105aa324_new(0);
  *piVar3 = iVar5;
  piVar4 = (int *)((int)param_1 + 0x20);
  iVar5 = (int)cls_105aa374_new(0);
  *piVar4 = iVar5;
  iVar5 = (int)cls_105aa568_new(0);
  *(int *)((int)param_1 + 0x24) = iVar5;
  alloc_zeroed_word_10476ee6((void *)&pvStack_84);
  piVar8 = *(int **)((int)param_1 + 4);
  iVar5 = *piVar8;
  pvStack_84 = pvVar9;
  (**(code **)(iVar5 + 0x14))((int)piVar8 + (int)*(short *)(iVar5 + 0x10),&pvStack_84);
  free_if_flag_set_10476f02(&pvStack_84,2);
  alloc_two_word_pair_1047562e((void *)&pvStack_80);
  pvStack_80 = pvVar9;
  iStack_7c = forward_second_field_call(pvVar9);
  piVar8 = *(int **)((int)param_1 + 8);
  iVar5 = *piVar8;
  (**(code **)(iVar5 + 0x14))((int)piVar8 + (int)*(short *)(iVar5 + 0x10),&pvStack_80);
  free_if_heap_flag_set_1047564e(&pvStack_80,2);
  alloc_and_zero_16_bytes_104769e6(&iStack_78);
  iStack_6c = *(int *)((int)param_1 + 4);
  iStack_70 = *(int *)((int)param_1 + 8);
  piVar8 = (int *)((int)param_1 + 0xc);
  pvStack_74 = pvVar9;
  iStack_78 = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar8;
  (**(code **)(iVar5 + 0x14))(*piVar8 + (int)*(short *)(iVar5 + 0x10),&iStack_78);
  *(uint16_t *)(*piVar8 + 0x14) = 500;
  free_if_heap_flag_set_10476a0e(&iStack_78,2);
  alloc_and_zero_struct_104750ba(&iStack_68);
  iStack_60 = *piVar8;
  pvStack_64 = pvVar9;
  iStack_68 = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar2;
  (**(code **)(iVar5 + 0x14))(*piVar2 + (int)*(short *)(iVar5 + 0x10),&iStack_68);
  free_heap_if_flag_set_104750de(&iStack_68,2);
  alloc_and_zero_small_block((void *)&pvStack_5c);
  iStack_58 = *piVar8;
  pvStack_5c = pvVar9;
  iStack_50 = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar1;
  (**(code **)(iVar5 + 0x14))(*piVar1 + (int)*(short *)(iVar5 + 0x10),&pvStack_5c);
  free_heap_block_if_flagged_10474d1e(&pvStack_5c,2);
  alloc_and_zero_small_struct_104744d8((void *)&pvStack_4c);
  iStack_48 = *piVar8;
  pvStack_4c = pvVar9;
  iStack_44 = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar6;
  (**(code **)(iVar5 + 0x14))(*piVar6 + (int)*(short *)(iVar5 + 0x10),&pvStack_4c);
  free_if_flag_set_104744fc(&pvStack_4c,2);
  alloc_and_zero_small_struct_10473bc6((void *)&pvStack_40);
  iStack_3c = *piVar8;
  pvStack_40 = pvVar9;
  iStack_38 = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar3;
  (**(code **)(iVar5 + 0x14))(*piVar3 + (int)*(short *)(iVar5 + 0x10),&pvStack_40);
  free_if_flag_set_10473bea(&pvStack_40,2);
  alloc_and_zero_small_struct_10474764((void *)&pvStack_34);
  iStack_30 = *piVar8;
  pvStack_34 = pvVar9;
  iStack_2c = forward_second_field_call(pvVar9);
  iVar5 = *(int *)*piVar4;
  (**(code **)(iVar5 + 0x14))(*piVar4 + (int)*(short *)(iVar5 + 0x10),&pvStack_34);
  free_if_flag_set_10474788(&pvStack_34,2);
  init_zeroed_heap_struct((void *)&pvStack_28);
  iStack_24 = *piVar8;
  iStack_20 = *piVar2;
  iStack_1c = *piVar1;
  iStack_18 = *piVar6;
  iStack_14 = *piVar3;
  iStack_10 = *piVar4;
  pvStack_28 = pvVar9;
  iStack_c = forward_second_field_call(pvVar9);
  piVar6 = *(int **)((int)param_1 + 0x24);
  iVar5 = *piVar6;
  uVar7 = (**(code **)(iVar5 + 0x14))((int)piVar6 + (int)*(short *)(iVar5 + 0x10),&pvStack_28);
  free_heap_block_if_flagged_104780e8(&pvStack_28,2);
  return uVar7;
}
