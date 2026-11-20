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

uint32_t initialize_subsystem_object_array(cls_105a08e0 *param_1)

{
  void **ppuVar1;
  void **ppuVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void *pvVar5;
  void *puVar6;
  cls_105a071c *pcVar7;
  cls_105a0920 *pcVar8;
  cls_105a07cc *pcVar9;
  cls_105a0774 *pcVar10;
  cls_105a0978 *pcVar11;
  int iVar12;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  void **ppuStack_c;
  
  pvVar5 = (void *)get_or_init_sram_buffer_104277bc();
  ppuVar1 = (void*)(&param_1->field_0x34);
  forward_three_args_to_helper_10459d64(ppuVar1,1,0x1f);
  ppuVar2 = (void*)(&param_1->field_0x3c);
  forward_three_args_to_helper_10459d64(ppuVar2,1,0x1f);
  initialize_eight_word_struct(&uStack_28);
  uStack_28 = read_table_entry_field(pvVar5,0x47);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x4 = (uint32_t)(puVar6);
  iVar12 = *(int *)(param_1->field_0x4 + 4);
  (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar12))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x48);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 1;
  uStack_14 = 1;
  uStack_10 = 1;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x8 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].fn)
            (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x49);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 2;
  uStack_14 = 2;
  uStack_10 = 2;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0xc = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].fn)
            (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x4a);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_1c = 0x40;
  uStack_18 = 3;
  uStack_14 = 3;
  uStack_10 = 3;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x10 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x10 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x4b);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 4;
  uStack_1c = 0x40;
  uStack_14 = 4;
  uStack_10 = 4;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x14 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x14 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x4c);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 5;
  uStack_1c = 0x40;
  uStack_14 = 5;
  uStack_10 = 5;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x18 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x18 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x4d);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 6;
  uStack_1c = 0x40;
  uStack_14 = 6;
  uStack_10 = 6;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x1c = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x1c + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x4e);
  uStack_24 = 0x42;
  uStack_20 = 0x41;
  uStack_18 = 7;
  uStack_1c = 0x40;
  uStack_14 = 7;
  uStack_10 = 7;
  ppuStack_c = ppuVar1;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x20 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x20 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x3f);
  uVar3 = 0x3a;
  uVar4 = 0x39;
  uStack_1c = 0x38;
  uStack_18 = 0;
  uStack_14 = 8;
  uStack_10 = 0xe;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  ppuStack_c = ppuVar2;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x24 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x24 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = read_table_entry_field(pvVar5,0x40);
  uStack_14 = 9;
  uStack_1c = 0x38;
  uStack_18 = 1;
  uStack_10 = 0xf;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  ppuStack_c = ppuVar2;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x28 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x28 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = 0;
  uStack_14 = 10;
  uStack_1c = 0x38;
  uStack_10 = 0x10;
  uStack_18 = 2;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  ppuStack_c = ppuVar2;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x2c = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x2c + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  uStack_28 = 0;
  uStack_14 = 0xb;
  uStack_1c = 0x38;
  uStack_10 = 0x11;
  uStack_18 = 3;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  ppuStack_c = ppuVar2;
  puVar6 = (void *)cls_105a0828_new((cls_105a0828 *)0x0,&uStack_28);
  param_1->field_0x30 = (uint32_t)(puVar6);
  (((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].fn)
            (param_1->field_0x30 + ((vtbl_entry*)(*(int *)((char*)puVar6 + 4)))[2].adj,0);
  pcVar7 = (cls_105a071c *)heap_alloc((void *)0x10c);
  if (pcVar7 == (cls_105a071c *)0x0) {
    pcVar7 = (cls_105a071c *)0x0;
  }
  else {
    cls_105a071c_new(pcVar7);
  }
  param_1->field_0x44 = (uint32_t)(pcVar7);
  set_value_if_valid((void*)(pcVar7),0xc);
  call_helper_with_offset_arg_1042778a(param_1->field_0x44,0x25);
  iVar12 = *(int *)(param_1->field_0x44 + 4);
  (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x44 + (int)((vtbl_entry*)(iVar12))[2].adj,0);
  pcVar8 = (cls_105a0920 *)heap_alloc((void *)0x114);
  if (pcVar8 == (cls_105a0920 *)0x0) {
    pcVar8 = (cls_105a0920 *)0x0;
  }
  else {
    cls_105a0920_new(pcVar8);
  }
  param_1->field_0x48 = (uint32_t)(pcVar8);
  set_value_if_valid((void*)(pcVar8),0xd);
  call_helper_with_offset_arg_1042778a(param_1->field_0x48,0x24);
  iVar12 = *(int *)(param_1->field_0x48 + 4);
  (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar12))[2].adj,0);
  pcVar9 = (cls_105a07cc *)heap_alloc((void *)0x10c);
  if (pcVar9 == (cls_105a07cc *)0x0) {
    pcVar9 = (cls_105a07cc *)0x0;
  }
  else {
    cls_105a07cc_new(pcVar9);
  }
  param_1->field_0x4c = (uint32_t)(pcVar9);
  set_value_if_valid((void*)(pcVar9),0xe);
  call_helper_with_offset_arg_1042778a(param_1->field_0x4c,0x20);
  iVar12 = *(int *)(param_1->field_0x4c + 4);
  (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x4c + (int)((vtbl_entry*)(iVar12))[2].adj,0);
  pcVar10 = (cls_105a0774 *)heap_alloc((void *)0x10c);
  if (pcVar10 == (cls_105a0774 *)0x0) {
    pcVar10 = (cls_105a0774 *)0x0;
  }
  else {
    cls_105a0774_new(pcVar10);
  }
  param_1->field_0x50 = (uint32_t)(pcVar10);
  set_value_if_valid((void*)(pcVar10),0xf);
  call_helper_with_offset_arg_1042778a(param_1->field_0x50,0x23);
  iVar12 = *(int *)(param_1->field_0x50 + 4);
  (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0);
  pcVar11 = (cls_105a0978 *)heap_alloc((void *)0x10c);
  if (pcVar11 == (cls_105a0978 *)0x0) {
    pcVar11 = (cls_105a0978 *)0x0;
  }
  else {
    cls_105a0978_new(pcVar11);
  }
  param_1->field_0x54 = (uint32_t)(pcVar11);
  set_value_if_valid((void*)(pcVar11),0x10);
  call_helper_with_offset_arg_1042778a(param_1->field_0x54,0x22);
  iVar12 = *(int *)(param_1->field_0x54 + 4);
  uVar3 = (((vtbl_entry*)(iVar12))[2].fn)(param_1->field_0x54 + (int)((vtbl_entry*)(iVar12))[2].adj,0);
  free_heap_block_if_flagged_1043d8ee(&uStack_28,2);
  return uVar3;
}
