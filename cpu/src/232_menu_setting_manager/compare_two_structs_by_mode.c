/* @k10d compare_two_structs_by_mode @ 0x104c5abc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Compares two data structures based on a mode parameter and updates a status flag in the
 *   destination object.
 * summary:
 *   The function initializes a local context, copies specific fields from param_3 to
 *   param_4, and then branches on param_2 (0-3) to perform different comparison or
 *   extraction operations using helpers like return_first_word_1045c514 and
 *   read_struct_field_at_offset_4. It calls compute_buffer_size_and_init to process the
 *   data, and if that fails, it constructs a detailed comparison structure on the stack and
 *   calls either register_two_pointers_with_flags or set_mode_flag_and_notify depending on
 *   the mode. The result determines the value written to offset 0x210 in param_4 and offset
 *   0x219 in param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_two_structs_by_mode(int param_1,int param_2,void *param_3,void *param_4)

{
  struct {
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
  } _cfg_58;
  int iVar1;
  uint32_t uVar2;
  uint16_t extraout_r4;
  uint32_t *puVar3;
  uintptr_t sp;
  bool bVar4;
  uint32_t auStack_60 [2];
  uint32_t auStack_20 [4];
  uint32_t auStack_10 [2];
  
  *(uint8_t *)(param_1 + 0x219) = 0;
  copy_large_struct((uint32_t *)((int)param_4 + 0x34),(uint32_t *)((int)param_3 + 0x34));
  *(uint32_t *)((int)param_4 + 0x18) = *(uint32_t *)((int)param_3 + 0x18);
  alloc_and_zero_two_words_1045c3bc(auStack_60);
  if ((param_2 == 0) || (param_2 == 2)) {
    copy_two_words_from_param2((int)auStack_20,(int)param_3);
    puVar3 = auStack_20;
    uVar2 = return_first_word_1045c514(puVar3);
    store_value_to_pointer_1045c510(auStack_60,uVar2);
    free_heap_if_flagged_1045c402(puVar3,2);
    copy_two_words_from_param2((int)auStack_20,(int)param_3);
    uVar2 = read_struct_field_at_offset_4(puVar3);
LAB_104c5bbe:
    write_field_at_offset_four_1045c518(auStack_60,uVar2);
    free_heap_if_flagged_1045c402(puVar3,2);
  }
  else if ((param_2 == 1) || (param_2 == 3)) {
    copy_two_words_from_param2((int)auStack_10,(int)param_3);
    puVar3 = auStack_10;
    uVar2 = read_struct_field_at_offset_4(puVar3);
    store_value_to_pointer_1045c510(auStack_60,uVar2);
    free_heap_if_flagged_1045c402(puVar3,2);
    copy_two_words_from_param2((int)auStack_10,(int)param_3);
    uVar2 = return_first_word_1045c514(puVar3);
    goto LAB_104c5bbe;
  }
  iVar1 = compute_buffer_size_and_init(param_4,auStack_60,2);
  if (iVar1 == 0) {
    if (*(int *)((int)param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)((int)param_4 + 0x210) = 0;
    free_heap_if_flagged_1045c402(auStack_60,2);
    return 0;
  }
  iVar1 = 0;
  _cfg_58.uStack_48 = 0;
  _cfg_58.uStack_46 = 0;
  _cfg_58.uStack_44 = 0;
  _cfg_58.uStack_42 = 0;
  _cfg_58.uStack_40 = 0;
  _cfg_58.uStack_54 = *(uint32_t *)((int)param_3 + 0x20);
  _cfg_58.uStack_50 = *(uint32_t *)((int)param_3 + 0x24);
  _cfg_58.uStack_4c = *(uint32_t *)((int)param_3 + 0x28);
  _cfg_58.uStack_58 = *(uint32_t *)((int)param_3 + 0x1c);
  puVar3 = (uint32_t *)((int)param_3 + 0x2c);
  uVar2 = return_first_word_1045c514(puVar3);
  _cfg_58.uStack_44 = (short)uVar2;
  uVar2 = return_first_word_1045c514(puVar3);
  _cfg_58.uStack_48 = (short)uVar2;
  uVar2 = read_struct_field_at_offset_4(puVar3);
  _cfg_58.uStack_42 = 0;
  _cfg_58.uStack_40 = 0;
  _cfg_58.uStack_2c = 0;
  _cfg_58.uStack_2a = 0;
  _cfg_58.uStack_28 = 0;
  _cfg_58.uStack_26 = 0;
  _cfg_58.uStack_24 = 0;
  _cfg_58.uStack_38 = *(uint32_t *)((int)param_4 + 0x20);
  _cfg_58.uStack_34 = *(uint32_t *)((int)param_4 + 0x24);
  _cfg_58.uStack_30 = *(uint32_t *)((int)param_4 + 0x28);
  _cfg_58.uStack_3c = *(uint32_t *)((int)param_4 + 0x1c);
  puVar3 = (uint32_t *)((int)param_4 + 0x2c);
  _cfg_58.uStack_46 = (short)uVar2;
  uVar2 = return_first_word_1045c514(puVar3);
  _cfg_58.uStack_28 = (short)uVar2;
  uVar2 = return_first_word_1045c514(puVar3);
  _cfg_58.uStack_2c = (short)uVar2;
  uVar2 = read_struct_field_at_offset_4(puVar3);
  extraout_r4 = (uint16_t)uVar2;
  _cfg_58.uStack_24 = 0;
  _cfg_58.uStack_26 = 0;
  _cfg_58.uStack_2a = extraout_r4;
  if (param_2 == 0) {
    iVar1 = register_two_pointers_with_flags(*(uint32_t *)(param_1 + 0x4c),&_cfg_58.uStack_58,&_cfg_58.uStack_3c);
  }
  else {
    if (param_2 == 1) {
      iVar1 = 1;
    }
    else if (param_2 == 2) {
      iVar1 = 2;
    }
    else {
      if (param_2 != 3) {
        bVar4 = true;
        goto LAB_104c5d38;
      }
      iVar1 = 0;
    }
    iVar1 = set_mode_flag_and_notify(*(uint32_t *)(param_1 + 0x4c),&_cfg_58.uStack_58,&_cfg_58.uStack_3c,iVar1);
  }
  bVar4 = iVar1 == 0;
LAB_104c5d38:
  *(bool *)((int)param_4 + 0x210) = !bVar4;
  free_heap_if_flagged_1045c402(auStack_60,2);
  return iVar1;
}
