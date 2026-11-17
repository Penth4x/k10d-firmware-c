/* @k10d send_two_config_packets_10472824 @ 0x10472824
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two configuration packets via dispatch_actuator_drive_command and updates a state
 *   object retrieved from get_or_create_singleton_object_10470d84.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with different data pointers
 *   (DAT_105a9f70 and DAT_105a9f80) and parameters. Between the calls, it retrieves a
 *   pointer from get_or_create_singleton_object_10470d84, extracts a sub-pointer, and
 *   passes it to a series of state-update functions (deactivate_app_mode_context,
 *   invoke_virtual_method_one_arg, invoke_virtual_method_one, call_single_helper_1046d812).
 *   It also calls check_kernel_call_success_10459fea and
 *   wait_for_state_two_with_optional_delay. The specific subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_config_packets_10472824(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStackY_28 [2];
  
  puVar3 = auStackY_28;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9f70/*ROM*/,6,0xff,'\0');
  iVar1 = get_or_create_singleton_object_10470d84();
  uVar2 = *(uint32_t *)(iVar1 + 4);
  deactivate_app_mode_context(uVar2);
  check_kernel_call_success_10459fea();
  invoke_virtual_method_one_arg(uVar2,1);
  invoke_virtual_method_one(uVar2,1);
  call_single_helper_1046d812(uVar2);
  wait_for_state_two_with_optional_delay(param_1,1);
  *(uint16_t *)(puVar3 + 2) = 6;
  *(uint16_t *)(puVar3 + 6) = 0xff;
  puVar3[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,&DAT_105a9f80/*ROM*/,*(uint16_t *)(puVar3 + 2),*(uint16_t *)(puVar3 + 6),
               puVar3[0xb]);
  return;
}
