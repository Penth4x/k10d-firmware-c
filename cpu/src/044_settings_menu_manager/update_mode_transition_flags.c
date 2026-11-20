/* @k10d update_mode_transition_flags @ 0x1039f612
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039f89e) overlaps instruction at (ram,0x1039f89c)
    */

void update_mode_transition_flags(int param_1,void *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = map_id_to_bitmask(param_1,*(int *)(param_1 + 0x38));
  bVar5 = (uVar2 & uRam80004698) != 0;
  uVar2 = map_id_to_bitmask(param_1,(int)param_2);
  bVar6 = (uVar2 & uRam80004698) == 0;
  if ((bVar5) || (bVar6)) {
    if ((bVar5) && (bVar6)) {
      forward_two_fields_to_helper_104f243e(*(uint32_t *)(param_1 + 0xbc));
      store_param_and_call_helper(*(uint32_t *)(param_1 + 0xbc),0,0);
    }
  }
  else {
    store_param_and_call_helper(*(uint32_t *)(param_1 + 0xbc),1,1);
  }
  uVar2 = map_id_to_bitmask(param_1,*(int *)(param_1 + 0x38));
  bVar5 = (uVar2 & uRam8000469c) != 0;
  uVar2 = map_id_to_bitmask(param_1,(int)param_2);
  bVar6 = (uVar2 & uRam8000469c) == 0;
  if ((bVar5) || (bVar6)) {
    if ((bVar5) && (bVar6)) {
      set_flag_at_offset_0x10(*(uint32_t *)(param_1 + 0xbc),0);
    }
  }
  else {
    set_flag_at_offset_0x10(*(uint32_t *)(param_1 + 0xbc),1);
  }
  uVar2 = map_id_to_bitmask(param_1,*(int *)(param_1 + 0x38));
  bVar5 = (uVar2 & uRam800046a0) != 0;
  uVar2 = map_id_to_bitmask(param_1,(int)param_2);
  bVar6 = (uVar2 & uRam800046a0) == 0;
  if ((bVar5) || (bVar6)) {
    if ((bVar5) && (bVar6)) {
      call_helper_with_offset_and_flag_104efd36(*(uint32_t *)(param_1 + 0xbc),0);
    }
  }
  else {
    call_helper_with_offset_and_flag_104efd36(*(uint32_t *)(param_1 + 0xbc),1);
  }
  uVar2 = map_id_to_bitmask(param_1,*(int *)(param_1 + 0x38));
  bVar5 = (uVar2 & uRam800046a4) != 0;
  uVar2 = map_id_to_bitmask(param_1,(int)param_2);
  bVar6 = (uVar2 & uRam800046a4) == 0;
  if ((bVar5) || (bVar6)) {
    if ((bVar5) && (bVar6)) {
      set_bit_in_object_field(*(uint32_t *)(param_1 + 0xbc),0);
    }
  }
  else {
    set_bit_in_object_field(*(uint32_t *)(param_1 + 0xbc),1);
  }
  if (((param_2 == *(void **)(param_1 + 0x90)) &&
      (iVar3 = check_value_in_range_9_to_11(*(uint32_t *)(param_1 + 0xbc)), iVar3 != 0)) ||
     (param_2 == *(void **)(param_1 + 0x78))) {
    set_flag_bit1_in_word_at_offset_0x18(*(uint32_t *)(param_1 + 0xbc),1);
  }
  else if ((param_2 != *(void **)(param_1 + 0x90)) &&
          (iVar3 = check_status_bit1(*(uint32_t *)(param_1 + 0xbc)), iVar3 != 0)) {
    set_flag_bit1_in_word_at_offset_0x18(*(uint32_t *)(param_1 + 0xbc),0);
  }
  if ((param_2 == *(void **)(param_1 + 0x80)) || (param_2 == *(void **)(param_1 + 0x84))) {
    if (((*(char *)(param_1 + 0xd7) == '\0') || (param_2 != *(void **)(param_1 + 0x84))) &&
       ((iVar3 = 1, *(char *)(param_1 + 0xc3) == '\0' || (*(char *)(param_1 + 0xc2) == '\0')))) {
      while ((*(char *)(param_1 + 0xd8) == '\0' && (*(char *)(param_1 + 0xd9) == '\0'))) {
        check_kernel_call_success_10459fea();
        iVar3 = iVar3 + 1;
        if ((0x10 < iVar3) ||
           ((*(char *)(param_1 + 0xc3) != '\0' && (*(char *)(param_1 + 0xc2) != '\0')))) break;
      }
    }
    iVar3 = check_state_mismatch(*(uint32_t *)(param_1 + 0xbc));
    if (iVar3 == 0) {
      iVar3 = 1;
      while ((*(char *)(param_1 + 0xd8) == '\0' && (*(char *)(param_1 + 0xd9) == '\0'))) {
        check_kernel_call_success_10459fea();
        iVar3 = iVar3 + 1;
        if ((0x10 < iVar3) || (iVar4 = check_state_mismatch(*(uint32_t *)(param_1 + 0xbc)), iVar4 != 0))
        break;
      }
    }
  }
  pvVar1 = *(void **)(param_1 + 0x60);
  if ((*(void **)(param_1 + 0x38) == pvVar1) && (param_2 != pvVar1)) {
    iVar3 = **(int **)(param_1 + 0x2c);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006d,0);
  }
  else if ((*(void **)(param_1 + 0x38) != pvVar1) && (param_2 == pvVar1)) {
    iVar3 = **(int **)(param_1 + 0x2c);
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[3].adj,0x13006d,1);
  }
  if ((param_2 == *(void **)(param_1 + 0x84)) && (*(char *)(param_1 + 0xd7) != '\0')) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  }
  if (param_2 == *(void **)(param_1 + 0x74)) {
    iVar3 = check_mode_field_valid(param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    }
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x90)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
      iVar3 = register_menu_item_if_enabled_104076ae(*(uint32_t *)(param_1 + 0x90));
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
      }
    }
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x68)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
    }
    if (*(char *)(param_1 + 0x36) != '\0') {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x10;
    }
  }
  if (param_2 == *(void **)(param_1 + 0x90)) {
    iVar3 = check_mode_field_valid(param_1);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
    }
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x74)) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 2;
      iVar3 = register_menu_item_if_enabled_103b69aa(*(uint32_t *)(param_1 + 0x74));
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 8;
      }
    }
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x78)) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 4;
    }
    if (*(char *)(param_1 + 0x36) != '\0') {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
    }
  }
  if (param_2 == *(void **)(param_1 + 0x68)) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x6c)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 8;
    }
    else if (iVar3 == *(int *)(param_1 + 0x70)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 2;
    }
    else if (iVar3 == *(int *)(param_1 + 0x7c)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 4;
    }
    else if (iVar3 == *(int *)(param_1 + 0x74)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 1;
    }
  }
  if (*(char *)(param_1 + 0xd7) != '\0') {
    *(uint8_t *)(param_1 + 0xd7) = 0;
  }
  return;
}
