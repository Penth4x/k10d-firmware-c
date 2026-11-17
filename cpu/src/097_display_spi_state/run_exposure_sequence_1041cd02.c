/* @k10d run_exposure_sequence_1041cd02 @ 0x1041cd02
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Executes a multi-stage exposure sequence by toggling virtual device states and updating
 *   timing parameters.
 * summary:
 *   The function orchestrates a complex state machine, likely for a camera exposure or
 *   sensor readout cycle. It calls a series of helper functions (e.g.,
 *   release_capture_resource, populate_and_send_four_property_structs) and performs virtual
 *   method calls on an object at param_1[0xb] to set various flags (0/1) at different
 *   vtable offsets. It also updates fields in a structure at param_1[0x1d] with values
 *   derived from param_1[0x39] and param_1[0x3a] via functions at 0x10456ed6 and
 *   0x10456ee6, and conditionally updates a UI or status object at param_1[0x3d].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void run_exposure_sequence_1041cd02(int *param_1)

{
  int iVar1;
  short sVar3;
  uint32_t uVar2;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  short sStack_a;
  
  param_1[0x3d] = *(int *)(param_1[0x1d] + 0x50);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1[9],-0x7fffffe6,0);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x54))(param_1[0xb] + (int)*(short *)(iVar1 + 0x50),1);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar1 + 0x28),0);
  initialize_capture_state_flags(param_1,(uint8_t *)(param_1 + 0x17));
  populate_and_send_four_property_structs(param_1);
  invoke_virtual_method_batch(param_1);
  query_four_virtual_properties(param_1);
  build_capture_status_packet_1041fee6(param_1,0);
  build_and_send_two_property_packets(param_1,0,(uint32_t *)param_1[0x1d]);
  classify_and_dispatch_value(param_1,param_1[0x1d]);
  iVar1 = *(int *)(param_1[0xb] + 4);
  iVar1 = (**(code **)(iVar1 + 0x134))(param_1[0xb] + (int)*(short *)(iVar1 + 0x130));
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1[0x1d] + 0x1c);
    iVar1 = param_1[0x1d];
    iVar5 = 0x20;
  }
  else {
    uVar4 = *(uint *)(param_1[0x1d] + 0x20);
    iVar1 = param_1[0x1d];
    iVar5 = 0x1c;
  }
  compute_and_send_exposure_offsets(param_1,uVar4,*(uint *)(iVar5 + iVar1));
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x44))(param_1[0xb] + (int)*(short *)(iVar1 + 0x40),0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 100))(param_1[0xb] + (int)*(short *)(iVar1 + 0x60));
  sStack_a = 0;
  sVar3 = call_kernel_with_zero_arg();
  get_entry_status_word((int)sVar3,&sStack_a);
  sVar3 = call_kernel_with_zero_arg();
  set_timer_channel_value((int)sVar3,6);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  check_kernel_call_success_10459fea();
  empty_noop_stub_103b76f2();
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  configure_timer_channel_pair(param_1,0);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar1 + 0x48),0);
  write_value_to_object_offset(param_1);
  *(uint8_t *)(param_1[0x1d] + 0x2c) = 1;
  configure_timer_channels(param_1);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar1 + 0x28),1);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x34))(param_1[0xb] + (int)*(short *)(iVar1 + 0x30),1);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  configure_timer_channel_pair(param_1,1);
  build_capture_status_packet_1041fee6(param_1,1);
  build_and_send_two_property_packets(param_1,1,(uint32_t *)param_1[0x1d]);
  iVar1 = *(int *)(param_1[0xb] + 4);
  iVar1 = (**(code **)(iVar1 + 0x134))(param_1[0xb] + (int)*(short *)(iVar1 + 0x130));
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1[0x1d] + 0x28);
    iVar1 = param_1[0x1d];
    iVar5 = 0x24;
  }
  else {
    uVar4 = *(uint *)(param_1[0x1d] + 0x24);
    iVar1 = param_1[0x1d];
    iVar5 = 0x28;
  }
  compute_and_send_exposure_offsets(param_1,uVar4,*(uint *)(iVar5 + iVar1));
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x44))(param_1[0xb] + (int)*(short *)(iVar1 + 0x40),1);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar1 + 0x48),1);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x39]);
  *(uint32_t *)(iVar1 + 0x30) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x3a]);
  *(uint32_t *)(iVar1 + 0x34) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x39]);
  *(uint32_t *)(iVar1 + 0x40) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x3a]);
  *(uint32_t *)(iVar1 + 0x44) = uVar2;
  if ((param_1[0x3d] != 0) && (*(char *)(param_1[0x3d] + 0x40) != '\0')) {
    append_bytes_to_ring_buffer(param_1[0x3d],0x1059d38c/*ROM*/,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x39]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x39]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    append_newline_to_buffer(param_1[0x3d],0);
    append_bytes_to_ring_buffer(param_1[0x3d],0x1059d3a0/*ROM*/,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x3a]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x3a]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    append_newline_to_buffer(param_1[0x3d],0);
  }
  empty_stub_function_103b76f0();
  release_capture_resources(param_1);
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x3c))(param_1[0xb] + (int)*(short *)(iVar1 + 0x38));
  iVar1 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar1 + 0x54))(param_1[0xb] + (int)*(short *)(iVar1 + 0x50),0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x39]);
  *(uint32_t *)(iVar1 + 0x38) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x3a]);
  *(uint32_t *)(iVar1 + 0x3c) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x39]);
  *(uint32_t *)(iVar1 + 0x48) = uVar2;
  iVar1 = param_1[0x1d];
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x3a]);
  *(uint32_t *)(iVar1 + 0x4c) = uVar2;
  set_flag_at_offset_0x7c_1041dabe(param_1);
  if ((param_1[0x3d] != 0) && (*(char *)(param_1[0x3d] + 0x40) != '\0')) {
    append_bytes_to_ring_buffer(param_1[0x3d],0x1059d3b4/*ROM*/,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x39]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x39]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    append_newline_to_buffer(param_1[0x3d],0);
    append_bytes_to_ring_buffer(param_1[0x3d],0x1059d3c8/*ROM*/,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1[0x3a]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    iVar1 = param_1[0x3d];
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1[0x3a]);
    copy_stream_bytes_into_struct(iVar1,uVar2,1,0);
    append_newline_to_buffer(param_1[0x3d],0);
  }
  sVar3 = call_kernel_with_zero_arg();
  set_timer_channel_value((int)sVar3,(int)sStack_a);
  set_irq_mask_by_channel(param_1[9],-0x7fffffe6,0);
  iVar1 = *(int *)param_1[0x14];
  (**(code **)(iVar1 + 0x14))(param_1[0x14] + (int)*(short *)(iVar1 + 0x10),0xd00010,0);
  return;
}
