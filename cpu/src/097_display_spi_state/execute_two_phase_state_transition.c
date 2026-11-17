/* @k10d execute_two_phase_state_transition @ 0x1041c7b4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Performs a complex two-stage state transition on an object, involving virtual calls,
 *   flag updates, and helper function sequences.
 * summary:
 *   The function manipulates an object structure (param_1) by calling virtual methods on
 *   sub-objects at offsets 0xb and 0x14. It appears to execute a sequence of operations in
 *   two distinct phases (indicated by the repeated patterns with different parameters and
 *   offsets), updating internal state flags and calling various helper functions like
 *   initialize_capture_state_flags and configure_sensor_readout_channels. The code includes
 *   logic for calculating values based on object fields and conditionally executing loops.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void execute_two_phase_state_transition(int *param_1)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t *puVar8;
  uint8_t auStack_44 [4];
  short sStack_a;
  
  puVar8 = auStack_44;
  pvVar5 = (void *)param_1[0x11];
  uVar2 = read_bounded_array_element_1051d696(pvVar5,0x18);
  update_camera_state_flags(pvVar5,0x18,uVar2 & 0xffff | 4);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1[9],-0x7fffffe6,0);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x54))(param_1[0xb] + (int)*(short *)(iVar6 + 0x50),1);
  iVar6 = *(int *)param_1[0x14];
  iVar6 = (**(code **)(iVar6 + 0x14))(param_1[0x14] + (int)*(short *)(iVar6 + 0x10),0xd0000a,0);
  param_1[0x15] = iVar6;
  initialize_capture_state_flags(param_1,(uint8_t *)(param_1 + 0x17));
  (**(code **)(*param_1 + 0xe4))
            ((int)*(short *)(*param_1 + 0xe0) + (int)param_1,param_1[0x15] + 0x60,1);
  iVar6 = call_helper_with_zero_flag_1041b732(param_1);
  if (iVar6 == 0) {
    *(uint8_t *)((int)param_1 + 0xa6) = 0;
    *(uint8_t *)((int)param_1 + 0xa7) = 0;
    iVar6 = *(int *)param_1[0x14];
    (**(code **)(iVar6 + 0x14))(param_1[0x14] + (int)*(short *)(iVar6 + 0x10),0xd00005,0);
  }
  pvVar5 = (void *)param_1[0x11];
  uVar2 = read_bounded_array_element_1051d696(pvVar5,0);
  update_camera_state_flags(pvVar5,0,uVar2 & 0xfffd);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar6 + 0x28),0);
  build_capture_status_packet_1041fee6(param_1,0);
  build_capture_status_packet_10420374(param_1,0,param_1[0x15]);
  iVar6 = *(int *)(param_1[0xb] + 4);
  iVar6 = (**(code **)(iVar6 + 0x134))(param_1[0xb] + (int)*(short *)(iVar6 + 0x130));
  if (iVar6 == 0) {
    uVar2 = *(uint *)(param_1[0x15] + 0x18);
    iVar6 = param_1[0x15];
    iVar7 = 0x1c;
  }
  else {
    uVar2 = *(uint *)(param_1[0x15] + 0x1c);
    iVar6 = param_1[0x15];
    iVar7 = 0x18;
  }
  compute_and_send_exposure_offsets(param_1,uVar2,*(uint *)(iVar7 + iVar6));
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x44))(param_1[0xb] + (int)*(short *)(iVar6 + 0x40),0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar6 = *(int *)param_1[0x14];
  (**(code **)(iVar6 + 0x14))(param_1[0x14] + (int)*(short *)(iVar6 + 0x10),0xd00007,0);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 100))(param_1[0xb] + (int)*(short *)(iVar6 + 0x60));
  sStack_a = 0;
  sVar3 = call_kernel_with_zero_arg();
  get_entry_status_word((int)sVar3,&sStack_a);
  sVar3 = call_kernel_with_zero_arg();
  set_timer_channel_value((int)sVar3,6);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar6 = (int)((uint)(*(int *)(param_1[0x15] + 0x48) << 3) / 10) >> 5;
  *(uint8_t *)((int)param_1 + 0xa1) = 0;
  check_kernel_call_success_10459fea();
  if ((iVar6 != 0) && (iVar7 = 0, iVar6 != 0)) {
    do {
      if (*(char *)((int)param_1 + 0xa1) != '\0') break;
      check_kernel_call_success_10459fea();
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  empty_noop_stub_103b76f2();
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  param_1[0x16] = param_1[0x15];
  piVar1 = param_1 + 0x1a;
  initialize_capture_state_flags(param_1,(uint8_t *)piVar1);
  param_1[0x15] = 0;
  piVar4 = (int *)param_1[0x16];
  puVar8[3] = 1;
  configure_sensor_readout_channels((int)param_1,0,piVar4,(uint8_t *)piVar1,puVar8[3]);
  iVar6 = *(int *)param_1[0x14];
  (**(code **)(iVar6 + 0x14))(param_1[0x14] + (int)*(short *)(iVar6 + 0x10),0xd00008,0);
  pvVar5 = (void *)param_1[0x11];
  uVar2 = read_bounded_array_element_1051d696(pvVar5,0);
  update_camera_state_flags(pvVar5,0,uVar2 & 0xffff | 2);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar6 + 0x48),0);
  set_flag_at_offset_0x84_1041b770(param_1);
  write_value_to_object_offset(param_1);
  init_capture_state_block(param_1,param_1[0x16],piVar1);
  *(uint8_t *)(param_1 + 0x28) = 1;
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar6 + 0x28),1);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x34))(param_1[0xb] + (int)*(short *)(iVar6 + 0x30),1);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  piVar4 = (int *)param_1[0x16];
  puVar8[3] = 1;
  configure_sensor_readout_channels((int)param_1,1,piVar4,(uint8_t *)piVar1,puVar8[3]);
  build_capture_status_packet_1041fee6(param_1,1);
  build_capture_status_packet_10420374(param_1,1,param_1[0x16]);
  iVar6 = *(int *)(param_1[0xb] + 4);
  iVar6 = (**(code **)(iVar6 + 0x134))(param_1[0xb] + (int)*(short *)(iVar6 + 0x130));
  if (iVar6 == 0) {
    uVar2 = *(uint *)(param_1[0x16] + 0x24);
    iVar6 = param_1[0x16];
    iVar7 = 0x20;
  }
  else {
    uVar2 = *(uint *)(param_1[0x16] + 0x20);
    iVar6 = param_1[0x16];
    iVar7 = 0x24;
  }
  compute_and_send_exposure_offsets(param_1,uVar2,*(uint *)(iVar7 + iVar6));
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x44))(param_1[0xb] + (int)*(short *)(iVar6 + 0x40),1);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar6 + 0x48),1);
  sVar3 = call_kernel_with_zero_arg();
  set_timer_channel_value((int)sVar3,(int)sStack_a);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  empty_stub_function_103b76f0();
  release_capture_resources(param_1);
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x3c))(param_1[0xb] + (int)*(short *)(iVar6 + 0x38));
  iVar6 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar6 + 0x54))(param_1[0xb] + (int)*(short *)(iVar6 + 0x50),0);
  set_irq_mask_by_channel(param_1[9],-0x7fffffe6,0);
  pvVar5 = (void *)param_1[0x11];
  uVar2 = read_bounded_array_element_1051d696(pvVar5,0x18);
  update_camera_state_flags(pvVar5,0x18,uVar2 & 0xfffb);
  return;
}
