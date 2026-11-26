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
#include "syscall_traps.h"

void execute_two_phase_state_transition(cls_1059d1d8 *param_1)

{
  uint8_t *puVar1;
  uint uVar2;
  uint32_t uVar3;
  short sVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_44 [4];
  short sStack_a;
  
  puVar9 = auStack_44;
  pvVar6 = (char*)(param_1) ->field_0x44;
  uVar2 = read_bounded_array_element_1051d696(pvVar6,0x18);
  update_camera_state_flags(pvVar6,0x18,uVar2 & 0xffff | 4);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1->field_0x24,-0x7fffffe6,0);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[10].adj,1);
  iVar7 = *(int *)param_1->field_0x50;
  uVar3 = (((vtbl_entry*)(iVar7))[2].fn)
                    ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar7))[2].adj,0xd0000a,0);
  param_1->field_0x54 = uVar3;
  initialize_capture_state_flags(param_1,(void*)(&param_1->field_0x5c));
  (((vtbl_entry*)(param_1->field_0x0))[28].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[28].adj,
             param_1->field_0x54 + 0x60,1);
  iVar7 = call_helper_with_zero_flag_1041b732(param_1);
  if (iVar7 == 0) {
    param_1->field_0xa6 = 0;
    param_1->field_0xa7 = 0;
    iVar7 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar7))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar7))[2].adj,0xd00005,0)
    ;
  }
  pvVar6 = (char*)(param_1) ->field_0x44;
  uVar2 = read_bounded_array_element_1051d696(pvVar6,0);
  update_camera_state_flags(pvVar6,0,uVar2 & 0xfffd);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[5].adj,0);
  build_capture_status_packet_1041fee6(param_1,0);
  build_capture_status_packet_10420374(param_1,0,param_1->field_0x54);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  iVar7 = (((vtbl_entry*)(iVar7))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[38].adj);
  if (iVar7 == 0) {
    uVar2 = *(uint *)(param_1->field_0x54 + 0x18);
    iVar7 = param_1->field_0x54;
    iVar8 = 0x1c;
  }
  else {
    uVar2 = *(uint *)(param_1->field_0x54 + 0x1c);
    iVar7 = param_1->field_0x54;
    iVar8 = 0x18;
  }
  compute_and_send_exposure_offsets(param_1,uVar2,*(uint *)(iVar8 + iVar7));
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  iVar7 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar7))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar7))[2].adj,0xd00007,0);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[12].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[12].adj);
  sStack_a = 0;
  sVar4 = call_kernel_with_zero_arg();
  __trap_get_entry_status_word((int)sVar4,&sStack_a);
  sVar4 = call_kernel_with_zero_arg();
  __trap_set_timer_channel_value((int)sVar4,6);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  iVar7 = (int)((uint)(*(int *)(param_1->field_0x54 + 0x48) << 3) / 10) >> 5;
  param_1->field_0xa1 = 0;
  check_kernel_call_success_10459fea((int)((uint)(*(int *)(param_1->field_0x54 + 0x48) << 3) / 10) & 0x1f);
  if ((iVar7 != 0) && (iVar8 = 0, iVar7 != 0)) {
    do {
      if (param_1->field_0xa1 != '\0') break;
      check_kernel_call_success_10459fea(0x20);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  empty_noop_stub_103b76f2();
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  param_1->field_0x58 = param_1->field_0x54;
  puVar1 = (void*)(&param_1->field_0x68);
  initialize_capture_state_flags(param_1,puVar1);
  param_1->field_0x54 = 0;
  piVar5 = (int *)param_1->field_0x58;
  puVar9[3] = 1;
  configure_sensor_readout_channels((int)param_1,0,piVar5,puVar1,puVar9[3]);
  iVar7 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar7))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar7))[2].adj,0xd00008,0);
  pvVar6 = (char*)(param_1) ->field_0x44;
  uVar2 = read_bounded_array_element_1051d696(pvVar6,0);
  update_camera_state_flags(pvVar6,0,uVar2 & 0xffff | 2);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[9].adj,0);
  set_flag_at_offset_0x84_1041b770(param_1);
  write_value_to_object_offset(param_1);
  init_capture_state_block(param_1,param_1->field_0x58,puVar1);
  param_1->field_0xa0 = 1;
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[5].adj,1);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[6].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[6].adj,1);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  piVar5 = (int *)param_1->field_0x58;
  puVar9[3] = 1;
  configure_sensor_readout_channels((int)param_1,1,piVar5,puVar1,puVar9[3]);
  build_capture_status_packet_1041fee6(param_1,1);
  build_capture_status_packet_10420374(param_1,1,param_1->field_0x58);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  iVar7 = (((vtbl_entry*)(iVar7))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[38].adj);
  if (iVar7 == 0) {
    uVar2 = *(uint *)(param_1->field_0x58 + 0x24);
    iVar7 = param_1->field_0x58;
    iVar8 = 0x20;
  }
  else {
    uVar2 = *(uint *)(param_1->field_0x58 + 0x20);
    iVar7 = param_1->field_0x58;
    iVar8 = 0x24;
  }
  compute_and_send_exposure_offsets(param_1,uVar2,*(uint *)(iVar8 + iVar7));
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[8].adj,1);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[9].adj,1);
  sVar4 = call_kernel_with_zero_arg();
  __trap_set_timer_channel_value((int)sVar4,(int)sStack_a);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  empty_stub_function_103b76f0();
  release_capture_resources(param_1);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[7].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[7].adj);
  iVar7 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar7))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar7))[10].adj,0);
  set_irq_mask_by_channel(param_1->field_0x24,-0x7fffffe6,0);
  pvVar6 = (char*)(param_1) ->field_0x44;
  uVar2 = read_bounded_array_element_1051d696(pvVar6,0x18);
  update_camera_state_flags(pvVar6,0x18,uVar2 & 0xfffb);
  return;
}
