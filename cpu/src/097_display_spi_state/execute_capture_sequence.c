/* @k10d execute_capture_sequence @ 0x1041bd7e
 * name: verified (structural evidence: emulator: task 7; its startup must finish for the mode menu to work)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Capture task (task 7) one-shot sequence: drives the companion handshake (0x10506c62)
 *   and serial channel 2, runs the exposure/readout steps, and on completion raises mode
 *   event 0xd0000b (which unblocks the mode event loop at boot).
 * summary:
 *   VERIFIED: emulator: task 7; its startup must finish for the mode menu to work
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041c72e) overlaps instruction at (ram,0x1041c72c)
    */

uint32_t execute_capture_sequence(int *param_1)

{
  char cVar1;
  char cVar7;
  void *pvVar2;
  uint32_t uVar3;
  int *piVar4;
  uint uVar5;
  short sVar6;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  bool bVar14;
  uint8_t auStack_44 [4];
  int iStack_2c;
  short sStack_a;
  
  puVar13 = auStack_44;
  call_helper_on_field_0x18_10506c50(param_1[0xf]);
  read_word_at_offset_0xc4_1041da14(param_1);
  release_object_at_offset_four_10501766(param_1[0xe]);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1[9],-0x7fffffe6,0);
  iVar11 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar11 + 0x54))(param_1[0xb] + (int)*(short *)(iVar11 + 0x50),1);
  signal_twai_flag_object(param_1[0xf]);
  iVar11 = query_object_property_slot3(param_1[0xf]);
  bVar14 = iVar11 == 0;
  cVar7 = read_sysparam_byte((uint8_t *)param_1[0x12]);
  iVar11 = *(int *)param_1[0x14];
  iVar11 = (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd00002,0);
  if (iVar11 == 0) {
    *(uint8_t *)(param_1 + 0x1e) = 1;
  }
  else {
    param_1[0x15] = iVar11;
    iVar11 = *(int *)(iVar11 + 0xf4);
    param_1[0x3d] = iVar11;
    if (*(char *)(iVar11 + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1[0x3d],0x1059d348/*ROM*/,2);
      iVar11 = param_1[0x3d];
      iVar12 = *(int *)(param_1[0xb] + 4);
      pvVar2 = (void *)(**(code **)(iVar12 + 300))(param_1[0xb] + (int)*(short *)(iVar12 + 0x128));
      parse_and_store_buffered_records(iVar11,pvVar2,1,2);
      append_newline_to_buffer(param_1[0x3d],2);
      append_bytes_to_ring_buffer(param_1[0x3d],0x1059d358/*ROM*/,2);
      iVar11 = param_1[0x3d];
      iVar12 = *(int *)(param_1[0xb] + 4);
      pvVar2 = (void *)(**(code **)(iVar12 + 0x13c))(param_1[0xb] + (int)*(short *)(iVar12 + 0x138))
      ;
      parse_and_store_buffered_records(iVar11,pvVar2,1,2);
      append_newline_to_buffer(param_1[0x3d],2);
      append_bytes_to_ring_buffer(param_1[0x3d],0x1059d364/*ROM*/,2);
      iVar11 = param_1[0x3d];
      iVar12 = *(int *)(param_1[0xb] + 4);
      uVar3 = (**(code **)(iVar12 + 0x114))(param_1[0xb] + (int)*(short *)(iVar12 + 0x110),1);
      copy_stream_bytes_into_struct(iVar11,(void *)uVar3,1,(void *)2);
      iVar11 = param_1[0x3d];
      iVar12 = *(int *)(param_1[0xb] + 4);
      uVar3 = (**(code **)(iVar12 + 0x114))(param_1[0xb] + (int)*(short *)(iVar12 + 0x110),0);
      copy_stream_bytes_into_struct(iVar11,(void *)uVar3,1,(void *)2);
      append_newline_to_buffer(param_1[0x3d],2);
    }
    initialize_capture_state_flags(param_1,(uint8_t *)(param_1 + 0x17));
    (**(code **)(*param_1 + 0xe4))
              ((int)*(short *)(*param_1 + 0xe0) + (int)param_1,param_1[0x15] + 0x60,0);
    iVar11 = call_helper_with_zero_flag_1041b732(param_1);
    if (iVar11 == 0) {
      *(uint8_t *)((int)param_1 + 0xa6) = 0;
      *(uint8_t *)((int)param_1 + 0xa7) = 0;
      piVar4 = (int *)param_1[0x14];
      if (*(char *)(param_1 + 0x28) == '\0') {
        (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0xd00005,0);
      }
      else {
        (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0xd00009);
        *(uint8_t *)(param_1 + 0x28) = 0;
      }
    }
    pvVar2 = (void *)param_1[0x11];
    uVar5 = read_bounded_array_element_1051d696(pvVar2,0);
    update_camera_state_flags(pvVar2,0,uVar5 & 0xfffd);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x28),0);
    populate_and_send_capture_params(param_1);
    invoke_virtual_method_batch(param_1);
    query_four_virtual_properties(param_1);
    build_capture_status_packet_1041fee6(param_1,0);
    build_capture_status_packet_10420374(param_1,0,param_1[0x15]);
    classify_capture_quality(param_1,param_1[0x15]);
    iVar11 = *(int *)(param_1[0xb] + 4);
    iVar11 = (**(code **)(iVar11 + 0x134))(param_1[0xb] + (int)*(short *)(iVar11 + 0x130));
    if (iVar11 == 0) {
      uVar5 = *(uint *)(param_1[0x15] + 0x18);
      iVar11 = param_1[0x15];
      iVar12 = 0x1c;
    }
    else {
      uVar5 = *(uint *)(param_1[0x15] + 0x1c);
      iVar11 = param_1[0x15];
      iVar12 = 0x18;
    }
    compute_and_send_exposure_offsets(param_1,uVar5,*(uint *)(iVar12 + iVar11));
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x44))(param_1[0xb] + (int)*(short *)(iVar11 + 0x40),0);
  }
  wait_cpucom_line_clear_10501778(param_1[0xe]);
  iVar11 = *(int *)param_1[0x14];
  (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd00003,0);
  iVar11 = *(int *)(param_1[0xb] + 4);
  (**(code **)(iVar11 + 100))(param_1[0xb] + (int)*(short *)(iVar11 + 0x60));
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  *(uint8_t *)(param_1 + 0x26) = 1;
  release_object_at_offset_0x18_10506c1e(param_1[0xf]);
  if (*(char *)(param_1 + 0x1e) == '\0') {
    empty_noop_stub_103b76f2();
    sStack_a = 0;
    sVar6 = call_kernel_with_zero_arg();
    get_entry_status_word((int)sVar6,&sStack_a);
    sVar6 = call_kernel_with_zero_arg();
    set_timer_channel_value((int)sVar6,6);
    param_1[0x16] = param_1[0x15];
    piVar4 = param_1 + 0x1a;
    initialize_capture_state_flags(param_1,(uint8_t *)piVar4);
    param_1[0x15] = 0;
    piVar8 = (int *)param_1[0x16];
    puVar13[3] = 0;
    configure_sensor_readout_channels((int)param_1,0,piVar8,(uint8_t *)piVar4,puVar13[3]);
    (*(code *)0x10506c30/*ROM*/)(param_1[0xf]);
    call_helper_with_global_arg(param_1[0xe]);
    if ((bVar14) || (cVar7 != '\0')) {
      *(uint8_t *)(param_1 + 0x30) = 0;
      param_1[0x2f] = 2;
      check_heap_alloc_success(param_1 + 0x24,0xc);
    }
    *(uint8_t *)(param_1 + 0x26) = 0;
    iVar11 = param_1[0x16];
    uVar5 = compute_scaled_value(param_1);
    *(uint *)(iVar11 + 0x48) = uVar5;
    if (*(char *)(param_1[0x3d] + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1[0x3d],0x1059d374/*ROM*/,0);
      copy_stream_bytes_into_struct(param_1[0x3d],(void *)param_1[0x27],1,0);
      append_newline_to_buffer(param_1[0x3d],0);
    }
    param_1[0x27] = 0;
    iVar11 = *(int *)param_1[0x14];
    (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd00004,0);
    pvVar2 = (void *)param_1[0x11];
    uVar5 = read_bounded_array_element_1051d696(pvVar2,0);
    update_camera_state_flags(pvVar2,0,uVar5 & 0xffff | 2);
    (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
    if ((bVar14) || (cVar7 != '\0')) {
      cVar1 = *(char *)(param_1 + 0x30);
      while (cVar1 == '\0') {
        (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
        cVar1 = *(char *)(param_1 + 0x30);
      }
    }
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x48),0);
    set_flag_at_offset_0x84_1041b770(param_1);
    write_value_to_object_offset(param_1);
    init_capture_state_block(param_1,param_1[0x16],piVar4);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x2c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x28),1);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x34))(param_1[0xb] + (int)*(short *)(iVar11 + 0x30),1);
    (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
    write_two_bytes_to_param_offset(param_1);
    if ((bVar14) || (cVar7 != '\0')) {
      param_1[0x2f] = 1;
      check_heap_alloc_success(param_1 + 0x24,0x19);
    }
    piVar8 = (int *)param_1[0x16];
    puVar13[3] = 0;
    configure_sensor_readout_channels((int)param_1,1,piVar8,(uint8_t *)piVar4,puVar13[3]);
    build_capture_status_packet_1041fee6(param_1,1);
    build_capture_status_packet_10420374(param_1,1,param_1[0x16]);
    iVar11 = *(int *)(param_1[0xb] + 4);
    iVar11 = (**(code **)(iVar11 + 0x134))(param_1[0xb] + (int)*(short *)(iVar11 + 0x130));
    if (iVar11 == 0) {
      uVar5 = *(uint *)(param_1[0x16] + 0x24);
      iVar11 = param_1[0x16];
      iVar12 = 0x20;
    }
    else {
      uVar5 = *(uint *)(param_1[0x16] + 0x20);
      iVar11 = param_1[0x16];
      iVar12 = 0x24;
    }
    compute_and_send_exposure_offsets(param_1,uVar5,*(uint *)(iVar12 + iVar11));
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x44))(param_1[0xb] + (int)*(short *)(iVar11 + 0x40),1);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x4c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x48),1);
    if ((bVar14) || (cVar7 != '\0')) {
      read_word_at_offset_0xc4_1041da6c(param_1);
    }
    (*(code *)0x10506c32/*ROM*/)(param_1[0xf]);
    release_object_at_offset_four_105017ac(param_1[0xe]);
    sVar6 = call_kernel_with_zero_arg();
    set_timer_channel_value((int)sVar6,(int)sStack_a);
    (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
    set_flag_at_offset_0xc4_1041da56(param_1);
    param_1[0x2f] = 0;
    check_heap_alloc_success(param_1 + 0x24,0x1e);
    empty_stub_function_103b76f0();
    release_capture_resources(param_1);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x3c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x38));
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x54))(param_1[0xb] + (int)*(short *)(iVar11 + 0x50),0);
    iVar11 = *(int *)param_1[0x14];
    (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd00006,0);
    (*(code *)0x10506c34/*ROM*/)(param_1[0xf]);
    wait_cpucom_line_clear_105017be(param_1[0xe]);
    call_two_helpers_on_object_10506c36(param_1[0xf]);
    clear_twai_flag(param_1[0xf]);
    iVar11 = *(int *)param_1[0x14];
    (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd0000c,0);
    if (*(char *)(param_1[0x3d] + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1[0x3d],0x1059d380/*ROM*/,0);
      iVar11 = *(int *)(param_1[0xb] + 4);
      iVar11 = (**(code **)(iVar11 + 0x16c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x168));
      iVar12 = 0;
      iStack_2c = 4;
      iVar10 = 0;
      iVar9 = 4;
      do {
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)iVar12,1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar10),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar9),1,0);
        append_newline_to_buffer(param_1[0x3d],0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)(iVar12 + 1),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar10 + 8),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar9 + 8),1,0);
        append_newline_to_buffer(param_1[0x3d],0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)(iVar12 + 2),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar10 + 0x10),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar9 + 0x10),1,0);
        append_newline_to_buffer(param_1[0x3d],0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)(iVar12 + 3),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar10 + 0x18),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar9 + 0x18),1,0);
        append_newline_to_buffer(param_1[0x3d],0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)(iVar12 + 4),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar10 + 0x20),1,0);
        copy_stream_bytes_into_struct(param_1[0x3d],(void *)*(uint32_t *)(iVar11 + iVar9 + 0x20),1,0);
        append_newline_to_buffer(param_1[0x3d],0);
        iVar12 = iVar12 + 5;
        iVar9 = iVar9 + 0x28;
        iVar10 = iVar10 + 0x28;
        iStack_2c = iStack_2c + -1;
      } while (-1 < iStack_2c);
    }
    set_irq_mask_by_channel(param_1[9],-0x7fffffe6,0);
    uVar3 = 1;
  }
  else {
    *(uint8_t *)(param_1 + 0x26) = 0;
    release_object_at_offset_0x18_10506c0c(param_1[0xf]);
    set_irq_mask_by_channel(param_1[9],-0x7fffffe6,0);
    iVar11 = *(int *)(param_1[0xb] + 4);
    (**(code **)(iVar11 + 0x5c))(param_1[0xb] + (int)*(short *)(iVar11 + 0x58));
    iVar11 = *(int *)param_1[0x14];
    (**(code **)(iVar11 + 0x14))(param_1[0x14] + (int)*(short *)(iVar11 + 0x10),0xd0000b,0);
    *(uint8_t *)(param_1 + 0x1e) = 0;
    uVar3 = 0;
  }
  return uVar3;
}
