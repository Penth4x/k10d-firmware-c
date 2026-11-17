/* @k10d allocate_and_register_object_array @ 0x1038bd04
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a series of child objects with specific dimensions and registers them into a
 *   parent container.
 * summary:
 *   The function initializes a base object via iterate_range_and_call_match, then allocates
 *   multiple child objects (IDs 0x3110000-0x311001d) using app_obj_factory. It configures
 *   their sizes using call_helper_and_set_flag_104b7726 and
 *   call_helper_and_set_flag_104b7744, and registers all allocated objects into the parent
 *   structure using iterate_and_remove_list_entry before finalizing with
 *   set_object_field_at_offset_0x10.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_register_object_array(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
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
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  void *pvVar28;
  void *pvVar29;
  void *pvVar30;
  void *pvVar31;
  void *pvVar32;
  void *pvVar33;
  void *pvVar34;
  int iVar35;
  uintptr_t sp;
  void *pvStack_2c;
  uint8_t auStack_28 [8];
  uint32_t uStack_20;
  uint32_t auStack_1c [5];
  
  iterate_range_and_call_match(*(void **)((int)param_1 + 0x24),(uint *)0x10560260/*ROM*/,param_3,param_4);
  pvVar2 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110000,0,0);
  pvVar3 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110001,0,0);
  (**(code **)(*(int *)((int)pvVar3 + 0xc) + 0x2c))
            (&uStack_20,(int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 0x28) + (int)pvVar3);
  iVar4 = return_first_word_1045c514(&uStack_20);
  iVar5 = read_struct_field_at_offset_4(&uStack_20);
  alloc_two_word_pair_1045bc2e(auStack_1c + 1,(0x240U - iVar4 >> 1) + 0x20,(0x1b0U - iVar5 >> 1) + 0x18);
  iVar5 = *(int *)((int)pvVar3 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  iVar4 = 8;
  do {
    iVar35 = iVar4 + -4;
    *(uint32_t *)(auStack_28 + iVar4 + -4) = *(uint32_t *)((int)auStack_1c + iVar4);
    iVar4 = iVar35;
  } while (iVar35 != 0);
  (**(code **)(iVar5 + 0x14))((int)sVar1 + (int)pvVar3,auStack_28);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  pvVar6 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110002,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar6,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar6,0x90,1);
  pvVar7 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110003,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar7,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar7,0x90,1);
  pvVar8 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110004,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar8,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar8,0x90,1);
  pvVar9 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110005,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar9,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar9,0x90,1);
  pvVar10 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110006,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar10,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar10,0x90,1);
  pvVar11 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110007,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar11,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar11,0x90,1);
  pvVar12 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110008,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar12,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar12,0x90,1);
  pvVar13 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110009,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar13,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar13,0x90,1);
  pvVar14 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000a,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar14,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar14,0x90,1);
  pvVar15 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000b,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar15,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar15,0x90,1);
  pvVar16 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000c,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar16,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar16,0x90,1);
  pvVar17 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000d,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar17,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar17,0x90,1);
  pvVar18 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000e,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar18,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar18,0x90,1);
  pvVar19 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311000f,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar19,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar19,0x90,1);
  pvVar20 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110010,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar20,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar20,0x90,1);
  pvVar21 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110011,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar21,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar21,0x90,1);
  pvVar22 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110012,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar22,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar22,0x90,1);
  pvVar23 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110013,(void *)0x20,(void *)0x78);
  call_helper_and_set_flag_104b7726(pvVar23,0x240,1);
  call_helper_and_set_flag_104b7744(pvVar23,0x90,1);
  pvVar24 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110014,(void *)0x20,(void *)0x90);
  call_helper_and_set_flag_104b7726(pvVar24,0x240,1);
  pvVar25 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110015,(void *)0x20,(void *)0x90);
  call_helper_and_set_flag_104b7726(pvVar25,0x240,1);
  pvVar26 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110016,(void *)0x20,(void *)0x90);
  call_helper_and_set_flag_104b7726(pvVar26,0x240,1);
  pvVar27 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110017,(void *)0x20,(void *)0x90);
  call_helper_and_set_flag_104b7726(pvVar27,0x240,1);
  pvStack_2c = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110018,0,0);
  pvVar28 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x3110019,(void *)0x1b8,(void *)0x198);
  pvVar29 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311001a,(void *)0x200,(void *)0x198);
  pvVar30 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311001b,(void *)0x20,(void *)0x198);
  pvVar31 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311001c,(void *)0x80,(void *)0x198);
  pvVar33 = (void *)0x50;
  pvVar34 = (void *)0xf0;
  pvVar32 = (void *)app_obj_factory(*(uint32_t *)((int)param_1 + 0x24),(void *)0x311001d,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry(pvVar2,pvVar3,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar6,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar7,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar8,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar9,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar10,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar11,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar12,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar13,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar14,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar15,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar16,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar17,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar18,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar19,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar20,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar21,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar22,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar23,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar24,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar25,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar26,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar27,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvStack_2c,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar28,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar29,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar30,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar31,pvVar33,pvVar34);
  iterate_and_remove_list_entry(pvVar2,pvVar32,pvVar33,pvVar34);
  set_object_field_at_offset_0x10(param_1,pvVar2);
  free_heap_block_if_flagged_1045bc54(auStack_1c + 1,2);
  free_heap_if_flagged_1045c402(&uStack_20,2);
  return;
}
