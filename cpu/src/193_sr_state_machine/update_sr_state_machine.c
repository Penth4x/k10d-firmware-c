/* @k10d update_sr_state_machine @ 0x1048fbb6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Transitions the Shake Reduction (SR) state machine based on settings and status flags.
 * summary:
 *   The function checks a state byte at offset 0x35 and updates it to 1 or 2 based on the
 *   result of read_display_controller_status_bits and setting_get. It calls various helper
 *   functions (FUN_10445xxx) that likely control the SR mechanism or related hardware, and
 *   refreshes the settings working copy. The prior analysis note identifies this as an SR
 *   state machine, which aligns with the state transitions and the use of settings
 *   (setting_get).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_sr_state_machine(int param_1)

{
  bool bVar2;
  int iVar1;
  
  if (*(char *)(param_1 + 0x35) != '\x03') {
    bVar2 = check_object_field_via_helper(*(void **)(param_1 + 0x18));
    if (bVar2) {
      settings_refresh_working_copy(*(void **)(param_1 + 0x18));
    }
    bVar2 = test_flag_set(*(void **)(param_1 + 0x1c));
    if (bVar2) {
      if (*(char *)(param_1 + 0x36) == '\0') {
        *(uint8_t *)(param_1 + 0x36) = 1;
        iVar1 = read_display_controller_status_bits(*(uint32_t *)(param_1 + 0x10));
        if (iVar1 == 0xc000) {
          call_two_initializers_with_zero(*(uint32_t *)(param_1 + 0x14));
          call_subroutine_with_zero(*(uint32_t *)(param_1 + 0x10));
        }
        if (*(char *)(param_1 + 0x37) != '\0') {
          write_fixed_register_values_10445f42(*(uint32_t *)(param_1 + 0x10));
          *(uint8_t *)(param_1 + 0x34) = 0;
          *(uint8_t *)(param_1 + 0x35) = 2;
          call_helper_with_0x4000_104453da(*(uint32_t *)(param_1 + 0x14));
          reset_display_layer_registers_104452ba(*(uint32_t *)(param_1 + 0x14));
          call_helper_with_0x4000_10445e54(*(uint32_t *)(param_1 + 0x10));
          configure_display_layer_params(param_1);
          call_single_helper_with_param_104436da(*(uint32_t *)(param_1 + 0xc));
        }
        clear_flag_with_notify(*(void **)(param_1 + 0x20));
      }
    }
    else {
      if (*(char *)(param_1 + 0x36) != '\0') {
        call_single_helper_with_param_104436e2(*(uint32_t *)(param_1 + 0xc));
        call_helper_with_zero_104436a0(*(uint32_t *)(param_1 + 0xc));
        dispatch_on_flag_param(*(void **)(param_1 + 0xc),0);
        check_kernel_call_success_10459fea();
      }
      *(uint8_t *)(param_1 + 0x36) = 0;
      iVar1 = read_display_controller_status_bits(*(uint32_t *)(param_1 + 0x10));
      if (iVar1 == 0xc000) {
        call_two_initializers_with_zero(*(uint32_t *)(param_1 + 0x14));
        call_subroutine_with_zero(*(uint32_t *)(param_1 + 0x10));
      }
      iVar1 = setting_get(*(int *)(param_1 + 0x18),0xaa);
      if (iVar1 == 1) {
        write_thirty_two_config_values(*(uint32_t *)(param_1 + 0x10));
        call_subroutine_with_0x8000(*(uint32_t *)(param_1 + 0x14));
        *(uint8_t *)(param_1 + 0x35) = 1;
        *(uint8_t *)(param_1 + 0x34) = 1;
      }
      else {
        write_fixed_register_values_10446024(*(uint32_t *)(param_1 + 0x10));
        call_subroutine_with_0x8000(*(uint32_t *)(param_1 + 0x14));
        *(uint8_t *)(param_1 + 0x35) = 1;
        *(uint8_t *)(param_1 + 0x34) = 0;
      }
      if (*(char *)(param_1 + 0x34) == '\x01') {
        reset_display_layer_registers_10445262(*(uint32_t *)(param_1 + 0x14));
      }
      else {
        reset_display_layer_registers_104452ba(*(uint32_t *)(param_1 + 0x14));
      }
      call_helper_with_0x4000_10445e54(*(uint32_t *)(param_1 + 0x10));
      set_flag_with_notify(*(void **)(param_1 + 0x20));
    }
  }
  return;
}
