/* @k10d send_two_config_blocks_1047276a @ 0x1047276a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Sends two configuration blocks to a device via dispatch_actuator_drive_command,
 *   interleaved with state updates and a helper call.
 * summary:
 *   The function calls dispatch_actuator_drive_command twice with different data pointers
 *   (DAT_105a9f48 and DAT_105a9f5c) and parameters. Between these calls, it invokes
 *   get_or_init_sram_buffer_104277bc, read_table_entry_field,
 *   call_subroutine_on_field_16_104ea70a, allocate_display_buffers_and_enable,
 *   toggle_state_via_param_flag, wait_for_state_two_with_optional_delay, and
 *   trigger_sr_cal_transfer_1047142a, which appear to manage state or resources related to
 *   param_1. The second call to dispatch_actuator_drive_command uses values stored on the
 *   stack (6, 0xff, 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_config_blocks_1047276a(int param_1)

{
  void *pvVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_28 [2];
  
  puVar2 = auStackY_28;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9f48/*ROM*/,6,0xff,'\0');
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  pvVar1 = (void *)read_table_entry_field(pvVar1,0xcd);
  call_subroutine_on_field_16_104ea70a(pvVar1);
  allocate_display_buffers_and_enable(param_1);
  toggle_state_via_param_flag(param_1,1);
  wait_for_state_two_with_optional_delay(param_1,0);
  toggle_state_via_param_flag(param_1,0);
  trigger_sr_cal_transfer_1047142a(param_1);
  invoke_object_method_at_offset_0x10_104ea71c(pvVar1);
  *(uint16_t *)(puVar2 + 2) = 6;
  *(uint16_t *)(puVar2 + 6) = 0xff;
  puVar2[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,2,(void *)&DAT_105a9f5c/*ROM*/,*(uint16_t *)(puVar2 + 2),*(uint16_t *)(puVar2 + 6),
               puVar2[0xb]);
  return;
}
