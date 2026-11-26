/* @k10d process_mode_event_flags_10416f34 @ 0x10416f34
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_mode_event_flags_10416f34(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  if ((*(char *)(param_1 + 0x1522) != '\0') && (*(char *)(param_1 + 0x151d) == '\0')) {
    *(uint8_t *)(param_1 + 0x1522) = 0;
  }
  if ((((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x93) == '\0')) &&
      (*(char *)(param_1 + 0x1522) == '\0')) &&
     ((*(char *)(param_1 + 0x151d) == '\0' && (*(char *)(param_1 + 0x151e) == '\0')))) {
    set_mode_state_flag(param_1,1,0);
  }
  uVar5 = *(uint *)(param_1 + 0x1530);
  if ((uVar5 & 4) != 0) {
    if (*(char *)(param_1 + 0x14fd) != '\0') {
      setting_set(*(int *)(param_1 + 0x7c),0x60,(uint)*(byte *)(param_1 + 0x14fd));
      set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),*(uint8_t *)(param_1 + 0x14fd));
      *(uint8_t *)(param_1 + 0x14fd) = 0;
    }
    init_mode_state_and_check(param_1);
    compute_image_size_divisor(param_1,1);
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffffffb;
  }
  if ((uVar5 & 8) != 0) {
    set_status_flags_by_condition(param_1);
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffffff7;
  }
  if ((uVar5 & 0x20) != 0) {
    clear_flag_and_dispatch_event(param_1);
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffffdf;
  }
  if ((uVar5 & 0x40) != 0) {
    check_and_trigger_event(param_1);
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffffbf;
  }
  if ((((uVar5 & 0x100) != 0) && (iVar1 = check_flag_and_call_helper_10418b5a(param_1), iVar1 != 0)) &&
     (iVar1 = check_state_and_dispatch_10418b7a(param_1,0), iVar1 != 0)) {
    *(uint8_t *)(param_1 + 0x14fd) = 0;
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffffeff;
  }
  if ((((uVar5 & 0x200) != 0) && (iVar1 = check_flag_and_call_helper_10418b5a(param_1), iVar1 != 0)) &&
     (iVar1 = check_state_and_dispatch_10418b7a(param_1,1), iVar1 != 0)) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffffdff;
  }
  if ((uVar5 & 0x400) != 0) {
    test_mode_config_singleton();
    iVar1 = (*(code *)0x1052482c/*ROM*/)();
    uVar2 = test_mode_config_singleton();
    apply_setting_pair_to_target(uVar2,iVar1 == 0,0);
    iVar1 = initialize_singleton_object_1045d6a0();
    call_helper_with_stack_param_10462c8e(*(int **)(iVar1 + 0x28),1);
    check_kernel_call_success_10459fea();
    uVar3 = check_object_property_43(*(int *)(param_1 + 0x5c));
    if (uVar3 == 0) {
      iVar1 = 0x5b;
    }
    else {
      iVar1 = 0x16b;
    }
    iVar1 = setting_get(*(int *)(param_1 + 0x7c),iVar1);
    if (iVar1 != 0) {
      if (uVar3 == 0) {
        uVar2 = 0x5b;
      }
      else {
        uVar2 = 0x16b;
      }
      setting_set(*(int *)(param_1 + 0x7c),uVar2,0);
      iVar1 = get_or_create_singleton_object_104bb22a();
      process_event_with_lock_104b95b0(*(uint32_t *)(iVar1 + 4),0);
    }
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffffbff;
  }
  if ((uVar5 & 0x800) != 0) {
    test_mode_config_singleton();
    iVar1 = (*(code *)0x1052482c/*ROM*/)();
    if (iVar1 != 0) {
      uVar2 = test_mode_config_singleton();
      apply_setting_pair_to_target(uVar2,0,0);
    }
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffff7ff;
  }
  if (((uVar5 & 0x1000) != 0) && (1 < *(int *)(param_1 + 0x1584))) {
    iVar1 = check_state_mismatch(*(uint32_t *)(param_1 + 0x5c));
    if (iVar1 == 0) {
      if (7 < *(int *)(param_1 + 0x1584)) {
        *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffefff;
      }
    }
    else {
      *(uint8_t *)(param_1 + 0x1520) = 1;
      *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffefff;
    }
  }
  if (((uVar5 & 0x100000) != 0) && (0 < *(int *)(param_1 + 0x1584))) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffe7ffff;
  }
  if ((uVar5 & 0x2000) != 0) {
    *(uint8_t *)(param_1 + 0x1522) = 0;
    test_mode_config_singleton();
    iVar1 = (*(code *)0x1052482c/*ROM*/)();
    if (((iVar1 != 0) && (iVar1 = setting_get(*(int *)(param_1 + 0x7c),0xc9), iVar1 == 0)) &&
       (iVar1 = check_object_property_15(*(uint32_t *)(param_1 + 0x5c)), iVar1 == 0)) {
      uVar2 = test_mode_config_singleton();
      apply_setting_pair_to_target(uVar2,0,0);
    }
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffffdfff;
  }
  iVar1 = check_status_bit1(*(uint32_t *)(param_1 + 0x5c));
  if ((iVar1 == 0) && (iVar1 = test_bit_in_object_field(*(uint32_t *)(param_1 + 0x5c)), iVar1 == 0)) {
    *(uint8_t *)(param_1 + 0x91) = 0;
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffebfff;
  }
  if ((uVar5 & 0x4000) != 0) {
    check_kernel_call_success_10459fea();
  }
  if ((uVar5 & 0x8000) != 0) {
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xffff7fff;
  }
  if ((uVar5 & 0x40000) != 0) {
    cVar4 = process_sensor_readout_data(param_1,*(uint32_t *)(param_1 + 0x1578),*(int *)(param_1 + 0x157c),
                         *(uint16_t *)(param_1 + 0x1580));
    *(char *)(param_1 + 0x1582) = cVar4;
    *(uint *)(param_1 + 0x1530) = *(uint *)(param_1 + 0x1530) & 0xfffbffff;
  }
  if ((uVar5 & 0x200000) != 0) {
    check_kernel_call_success_10459fea();
  }
  if (*(char *)(param_1 + 0x150e) != '\0') {
    *(uint8_t *)(param_1 + 0x150e) = 0;
    set_mode_state_flag(param_1,1,0);
    check_kernel_call_success_10459fea();
    classify_mode_from_flags(param_1);
    dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130003);
    *(uint *)(param_1 + 0x1508) = *(uint *)(param_1 + 0x1508) & 0xfffeffff;
  }
  if ((*(int *)(param_1 + 0x1530) == 0) && (iVar1 = check_and_init_object_state(param_1), iVar1 != 0)) {
    set_state_flag_and_notify(param_1,1);
  }
  else {
    check_kernel_call_success_10459fea();
    set_flg_obj((uint32_t *)(param_1 + 0x1538), 0x80);
  }
  return;
}
