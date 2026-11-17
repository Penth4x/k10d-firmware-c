/* @k10d initialize_subsystem_object_array @ 0x1043d93e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a fixed set of child objects, storing their pointers in the
 *   parent structure.
 * summary:
 *   The function allocates multiple objects of class cls_105a0828 and other classes
 *   (cls_105a071c, cls_105a0920, etc.) using heap_alloc and their respective constructors.
 *   It stores pointers to these objects in the structure pointed to by param_1 at offsets
 *   0x04 through 0x54. It calls virtual methods on these objects to initialize their state,
 *   using read_table_entry_field to retrieve configuration data for each.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_object_array(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  void *pvStack_c;
  
  pvVar5 = (void *)get_or_init_sram_buffer_104277bc();
  pvVar1 = (void *)((int)param_1 + 0x34);
  forward_three_args_to_helper_10459d64(pvVar1,1,0x1f);
  pvVar2 = (void *)((int)param_1 + 0x3c);
  forward_three_args_to_helper_10459d64(pvVar2,1,0x1f);
  initialize_eight_word_struct(&uStack_28);
  uStack_28 = read_table_entry_field(pvVar5,0x47);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 4) = iVar6;
  iVar6 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 4) + (int)*(short *)(iVar6 + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x48);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 1;
  uStack_14 = 1;
  uStack_10 = 1;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 8) = iVar6;
  iVar6 = *(int *)(*(int *)((int)param_1 + 8) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar6 + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x49);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 2;
  uStack_14 = 2;
  uStack_10 = 2;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0xc) = iVar6;
  iVar6 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar6 + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x4a);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 3;
  uStack_14 = 3;
  uStack_10 = 3;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x10) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x10) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x4b);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 4;
  uStack_1c = 0x40;
  uStack_14 = 4;
  uStack_10 = 4;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x14) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x14) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x4c);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 5;
  uStack_1c = 0x40;
  uStack_14 = 5;
  uStack_10 = 5;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x18) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x18) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x4d);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 6;
  uStack_1c = 0x40;
  uStack_14 = 6;
  uStack_10 = 6;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x1c) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x1c) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x4e);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 7;
  uStack_1c = 0x40;
  uStack_14 = 7;
  uStack_10 = 7;
  pvStack_c = pvVar1;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x20) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x20) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x3f);
  uVar3 = 0x3a;
  uVar4 = 0x39;
  uStack_1c = 0x38;
  uStack_18 = 0;
  uStack_14 = 8;
  uStack_10 = 0xe;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  pvStack_c = pvVar2;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x24) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x24) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = read_table_entry_field(pvVar5,0x40);
  uStack_14 = 9;
  uStack_1c = 0x38;
  uStack_18 = 1;
  uStack_10 = 0xf;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  pvStack_c = pvVar2;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x28) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x28) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = 0;
  uStack_14 = 10;
  uStack_1c = 0x38;
  uStack_10 = 0x10;
  uStack_18 = 2;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  pvStack_c = pvVar2;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x2c) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x2c) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  uStack_28 = 0;
  uStack_14 = 0xb;
  uStack_1c = 0x38;
  uStack_10 = 0x11;
  uStack_18 = 3;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  pvStack_c = pvVar2;
  iVar6 = cls_105a0828_new((uint32_t *)0x0,&uStack_28);
  *(int *)((int)param_1 + 0x30) = iVar6;
  (**(code **)(*(int *)(iVar6 + 4) + 0x14))
            (*(int *)((int)param_1 + 0x30) + (int)*(short *)(*(int *)(iVar6 + 4) + 0x10),0);
  iVar6 = (int)heap_alloc((void *)0x10c);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    cls_105a071c_new((void *)iVar6);
  }
  *(int *)((int)param_1 + 0x44) = iVar6;
  set_value_if_valid((void *)iVar6,0xc);
  call_helper_with_offset_arg_1042778a(*(int *)((int)param_1 + 0x44),0x25);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x44) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 0x44) + (int)*(short *)(iVar6 + 0x10),0);
  iVar6 = (int)heap_alloc((void *)0x114);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    cls_105a0920_new((void *)iVar6);
  }
  *(int *)((int)param_1 + 0x48) = iVar6;
  set_value_if_valid((void *)iVar6,0xd);
  call_helper_with_offset_arg_1042778a(*(int *)((int)param_1 + 0x48),0x24);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x48) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 0x48) + (int)*(short *)(iVar6 + 0x10),0);
  iVar6 = (int)heap_alloc((void *)0x10c);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    cls_105a07cc_new((void *)iVar6);
  }
  *(int *)((int)param_1 + 0x4c) = iVar6;
  set_value_if_valid((void *)iVar6,0xe);
  call_helper_with_offset_arg_1042778a(*(int *)((int)param_1 + 0x4c),0x20);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x4c) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 0x4c) + (int)*(short *)(iVar6 + 0x10),0);
  iVar6 = (int)heap_alloc((void *)0x10c);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    cls_105a0774_new((void *)iVar6);
  }
  *(int *)((int)param_1 + 0x50) = iVar6;
  set_value_if_valid((void *)iVar6,0xf);
  call_helper_with_offset_arg_1042778a(*(int *)((int)param_1 + 0x50),0x23);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x50) + 4);
  (**(code **)(iVar6 + 0x14))(*(int *)((int)param_1 + 0x50) + (int)*(short *)(iVar6 + 0x10),0);
  iVar6 = (int)heap_alloc((void *)0x10c);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    cls_105a0978_new((void *)iVar6);
  }
  *(int *)((int)param_1 + 0x54) = iVar6;
  set_value_if_valid((void *)iVar6,0x10);
  call_helper_with_offset_arg_1042778a(*(int *)((int)param_1 + 0x54),0x22);
  iVar6 = *(int *)(*(int *)((int)param_1 + 0x54) + 4);
  uVar3 = (**(code **)(iVar6 + 0x14))
                    (*(int *)((int)param_1 + 0x54) + (int)*(short *)(iVar6 + 0x10),0);
  free_heap_block_if_flagged_1043d8ee(&uStack_28,2);
  return uVar3;
}
