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
#include "syscall_traps.h"

void run_exposure_sequence_1041cd02(cls_1059d1d8 *param_1)

{
  int iVar1;
  short sVar3;
  uint32_t uVar2;
  uint uVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  short sStack_a;
  
  param_1->field_0xf4 = *(uint32_t *)(param_1->field_0x74 + 0x50);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1->field_0x24,-0x7fffffe6,0);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[10].adj,1);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[5].adj,0);
  initialize_capture_state_flags(param_1,(void*)(&param_1->field_0x5c));
  populate_and_send_four_property_structs(param_1);
  invoke_virtual_method_batch(param_1);
  query_four_virtual_properties(param_1);
  build_capture_status_packet_1041fee6(param_1,0);
  build_and_send_two_property_packets(param_1,0,(uint32_t *)param_1->field_0x74);
  classify_and_dispatch_value(param_1,param_1->field_0x74);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  iVar1 = (((vtbl_entry*)(iVar1))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[38].adj);
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1->field_0x74 + 0x1c);
    iVar1 = param_1->field_0x74;
    iVar6 = 0x20;
  }
  else {
    uVar4 = *(uint *)(param_1->field_0x74 + 0x20);
    iVar1 = param_1->field_0x74;
    iVar6 = 0x1c;
  }
  compute_and_send_exposure_offsets(param_1,uVar4,*(uint *)(iVar6 + iVar1));
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[12].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[12].adj);
  sStack_a = 0;
  sVar3 = call_kernel_with_zero_arg();
  __trap_get_entry_status_word((int)sVar3,&sStack_a);
  sVar3 = call_kernel_with_zero_arg();
  __trap_set_timer_channel_value((int)sVar3,6);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  check_kernel_call_success_10459fea(*(uint32_t *)(param_1->field_0x74 + 0x18));
  empty_noop_stub_103b76f2();
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  configure_timer_channel_pair(param_1,0);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[9].adj,0);
  write_value_to_object_offset(param_1);
  *(uint8_t *)(param_1->field_0x74 + 0x2c) = 1;
  configure_timer_channels(param_1);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[5].adj,1);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[6].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[6].adj,1);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  configure_timer_channel_pair(param_1,1);
  build_capture_status_packet_1041fee6(param_1,1);
  build_and_send_two_property_packets(param_1,1,(uint32_t *)param_1->field_0x74);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  iVar1 = (((vtbl_entry*)(iVar1))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[38].adj);
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1->field_0x74 + 0x28);
    iVar1 = param_1->field_0x74;
    iVar6 = 0x24;
  }
  else {
    uVar4 = *(uint *)(param_1->field_0x74 + 0x24);
    iVar1 = param_1->field_0x74;
    iVar6 = 0x28;
  }
  compute_and_send_exposure_offsets(param_1,uVar4,*(uint *)(iVar6 + iVar1));
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[8].adj,1);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[9].adj,1);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe4);
  *(uint32_t *)(iVar1 + 0x30) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe8);
  *(uint32_t *)(iVar1 + 0x34) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe4);
  *(uint32_t *)(iVar1 + 0x40) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe8);
  *(uint32_t *)(iVar1 + 0x44) = uVar2;
  if ((param_1->field_0xf4 != 0) && (*(char *)(param_1->field_0xf4 + 0x40) != '\0')) {
    append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d38c/*ROM*/,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe4);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe4);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    append_newline_to_buffer(param_1->field_0xf4,0);
    append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3a0/*ROM*/,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe8);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe8);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    append_newline_to_buffer(param_1->field_0xf4,0);
  }
  empty_stub_function_103b76f0();
  release_capture_resources(param_1);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[7].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[7].adj);
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[10].adj,0);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe4);
  *(uint32_t *)(iVar1 + 0x38) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe8);
  *(uint32_t *)(iVar1 + 0x3c) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe4);
  *(uint32_t *)(iVar1 + 0x48) = uVar2;
  iVar1 = param_1->field_0x74;
  uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe8);
  *(uint32_t *)(iVar1 + 0x4c) = uVar2;
  set_flag_at_offset_0x7c_1041dabe(param_1);
  if ((param_1->field_0xf4 != 0) && (*(char *)(param_1->field_0xf4 + 0x40) != '\0')) {
    append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3b4/*ROM*/,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe4);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe4);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    append_newline_to_buffer(param_1->field_0xf4,0);
    append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3c8/*ROM*/,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ed6/*ROM*/)(param_1->field_0xe8);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    uVar5 = param_1->field_0xf4;
    uVar2 = (*(code *)0x10456ee6/*ROM*/)(param_1->field_0xe8);
    copy_stream_bytes_into_struct(uVar5,(void*)(uVar2),1,0);
    append_newline_to_buffer(param_1->field_0xf4,0);
  }
  sVar3 = call_kernel_with_zero_arg();
  __trap_set_timer_channel_value((int)sVar3,(int)sStack_a);
  set_irq_mask_by_channel(param_1->field_0x24,-0x7fffffe6,0);
  iVar1 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar1))[2].adj,0xd00010,0);
  return;
}
