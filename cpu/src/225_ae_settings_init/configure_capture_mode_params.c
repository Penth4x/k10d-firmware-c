/* @k10d configure_capture_mode_params @ 0x104bebac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes a capture context structure with mode-specific parameters and refreshes
 *   working settings.
 * summary:
 *   The function checks a state flag via init_buffer_with_size_0x10000 and initializes a
 *   large object (param_1) if active. It copies settings from a master block using
 *   settings_refresh_working_copy and populates fields at offsets 0x51c-0x524 based on a
 *   switch statement on param_2 (likely exposure mode or capture type). It sets up pointers
 *   for subsequent processing and calls init_and_bind_object_slot to finalize the
 *   configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
configure_capture_mode_params(int param_1,uint32_t param_2,int param_3,uint32_t param_4,int param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  uint16_t uVar1;
  uint16_t uVar2;
  int iVar3;
  int iVar4;
  cls_105aadf4 *pcVar5;
  uint32_t uVar6;
  
  iVar3 = init_buffer_with_size_0x10000(__frv_reg_unset(4));
  if (iVar3 == 0) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    return 0;
  }
  *(uint8_t *)(param_1 + 0x30) = 0;
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  *(uint32_t *)(param_1 + 0x23c) = *(uint32_t *)(param_1 + 0x34);
  uVar1 = *(uint16_t *)(param_5 + 4);
  uVar2 = *(uint16_t *)(param_5 + 6);
  write_two_words_to_struct_104c1ff4(param_1,uVar1,uVar2);
  if ((uint16_t *)(param_1 + 0x238) != (uint16_t *)(param_1 + 0x44)) {
    *(uint16_t *)(param_1 + 0x238) = *(uint16_t *)(param_1 + 0x44);
    *(uint16_t *)(param_1 + 0x23a) = *(uint16_t *)(param_1 + 0x46);
  }
  uVar6 = *(uint32_t *)(param_5 + 8);
  *(uint32_t *)(param_1 + 0x3c) = uVar6;
  *(uint32_t *)(param_1 + 0x234) = uVar6;
  iVar3 = invoke_object_method_and_check_flag_104bf71e(param_1, __frv_reg_unset(5));
  if (iVar3 == 0) {
    iVar3 = 0;
    goto code_r0x104bee14;
  }
  iVar3 = get_or_create_singleton_object_10485138();
  settings_refresh_working_copy(*(void **)(iVar3 + 0x14));
  iVar3 = get_or_create_singleton_object_10485138();
  copy_836_bytes(*(uint32_t *)(iVar3 + 0x14),param_1 + 0x528);
  iVar3 = get_or_create_singleton_object_1046d20c();
  collect_and_forward_object_state(*(uint32_t *)(iVar3 + 4),(uint16_t *)(param_1 + 0x86c));
  pcVar5 = (cls_105aadf4 *)(param_1 + 0x350);
  reset_object_state_fields_1047dd22(pcVar5);
  *(int *)(param_1 + 0x470) = param_1 + 0x528;
  copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x474),(uint16_t *)(param_1 + 0x86c));
  *(uint32_t *)(param_1 + 0x35c) = *(uint32_t *)(param_1 + 0x34);
  iVar3 = read_struct_field_at_index_104c2890((void *)param_5,6);
  *(uint *)(param_1 + 0x354) = (uint)(iVar3 != 1);
  iVar4 = invoke_object_method_and_check_flag_104bf6b6((int)(param_1),(uint32_t)(pcVar5));
  *(uint32_t *)(param_1 + 0x51c) = 0xffffffff;
  *(uint32_t *)(param_1 + 0x520) = 0xffffffff;
  *(uint32_t *)(param_1 + 0x524) = 0;
  iVar3 = 0;
  if (iVar4 == 0) goto LAB_104bee08;
  switch(param_2) {
  case 0:
    *(uint32_t *)(param_1 + 0x51c) = 0;
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(uint32_t *)(param_1 + 0x520) = 0;
      }
      else if (param_3 == 2) {
        *(uint32_t *)(param_1 + 0x520) = 2;
      }
      else if (param_3 == 3) {
        *(uint32_t *)(param_1 + 0x520) = 1;
      }
    }
    goto LAB_104bedc2;
  case 1:
    uVar6 = 1;
    break;
  case 2:
    uVar6 = 2;
    *(uint32_t *)(param_1 + 0x51c) = 2;
    switch(param_3) {
    case 0:
      *(uint32_t *)(param_1 + 0x520) = 0;
      goto LAB_104beda6;
    case 1:
      break;
    case 2:
      uVar6 = 1;
      break;
    case 3:
      uVar6 = 3;
      break;
    case 4:
      uVar6 = 4;
      break;
    case 5:
      uVar6 = 5;
      break;
    default:
      goto LAB_104beda6;
    }
    *(uint32_t *)(param_1 + 0x520) = uVar6;
LAB_104beda6:
    *(uint32_t *)(param_1 + 0x524) = param_4;
    goto LAB_104bedc2;
  case 3:
    uVar6 = 4;
    break;
  case 4:
    uVar6 = 3;
    break;
  case 5:
    uVar6 = 5;
    break;
  default:
    goto LAB_104bedc2;
  }
  *(uint32_t *)(param_1 + 0x51c) = uVar6;
  *(int *)(param_1 + 0x524) = param_3;
LAB_104bedc2:
  *(int *)(param_1 + 0x4f4) = param_1 + 0x230;
  *(cls_105aadf4 **)(param_1 + 0x4f8) = pcVar5;
  *(uint32_t *)(param_1 + 0x50c) = param_8;
  *(uint32_t *)(param_1 + 0x508) = param_7;
  *(uint32_t *)(param_1 + 0x504) = param_6;
  *(uint32_t *)(param_1 + 0x4fc) = *(uint32_t *)(param_1 + 0x8c4);
  *(uint32_t *)(param_1 + 0x500) = *(uint32_t *)(param_1 + 0x8c8);
  iVar3 = invoke_object_callback_and_check_flag(param_1, __frv_reg_unset(5));
  invoke_virtual_method_on_object_104bf786((int)(param_1),(uint32_t)(pcVar5));
LAB_104bee08:
  invoke_virtual_method_on_object_104bf7ee(param_1,param_1 + 0x230);
code_r0x104bee14:
  invoke_virtual_slot_two_104bf5b6(param_1);
  uVar6 = 0;
  if (iVar3 != 0) {
    initialize_three_block_struct((uint16_t *)(param_1 + 0x15e4 + *(int *)(param_1 + 0x8d0) * 0xb34));
    update_entry_pair_and_notify(param_1,0,0xffffffff);
    uVar6 = init_and_bind_object_slot(param_1,uVar1,uVar2);
  }
  return uVar6;
}
