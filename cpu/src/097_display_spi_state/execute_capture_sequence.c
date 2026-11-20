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

uint32_t execute_capture_sequence(cls_1059d1d8 *param_1)

{
  char cVar1;
  uint8_t *puVar2;
  char cVar8;
  void *pvVar3;
  uint32_t uVar4;
  int *piVar5;
  uint uVar6;
  short sVar7;
  int iVar9;
  uint32_t uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uintptr_t sp;
  uint8_t *puVar14;
  bool bVar15;
  uint8_t auStack_44 [4];
  int iStack_2c;
  short sStack_a;
  
  puVar14 = auStack_44;
  call_helper_on_field_0x18_10506c50(param_1->field_0x3c);
  read_word_at_offset_0xc4_1041da14(param_1);
  release_object_at_offset_four_10501766(param_1->field_0x38);
  release_capture_resource(param_1);
  set_irq_enable_bit(param_1->field_0x24,-0x7fffffe6,0);
  iVar12 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar12))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[10].adj,1);
  signal_twai_flag_object(param_1->field_0x3c);
  iVar12 = query_object_property_slot3(param_1->field_0x3c);
  bVar15 = iVar12 == 0;
  cVar8 = read_sysparam_byte((uint8_t *)param_1->field_0x48);
  iVar12 = *(int *)param_1->field_0x50;
  iVar12 = (((vtbl_entry*)(iVar12))[2].fn)
                     ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd00002,0);
  if (iVar12 == 0) {
    param_1->field_0x78 = 1;
  }
  else {
    param_1->field_0x54 = iVar12;
    iVar12 = *(int *)(iVar12 + 0xf4);
    param_1->field_0xf4 = iVar12;
    if (*(char *)(iVar12 + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d348/*ROM*/,2);
      iVar12 = param_1->field_0xf4;
      iVar13 = *(int *)(param_1->field_0x2c + 4);
      pvVar3 = (void *)(((vtbl_entry*)(iVar13))[37].fn)
                                 (param_1->field_0x2c + (int)((vtbl_entry*)(iVar13))[37].adj);
      parse_and_store_buffered_records(iVar12,pvVar3,1,2);
      append_newline_to_buffer(param_1->field_0xf4,2);
      append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d358/*ROM*/,2);
      iVar12 = param_1->field_0xf4;
      iVar13 = *(int *)(param_1->field_0x2c + 4);
      pvVar3 = (void *)(((vtbl_entry*)(iVar13))[39].fn)
                                 (param_1->field_0x2c + (int)((vtbl_entry*)(iVar13))[39].adj);
      parse_and_store_buffered_records(iVar12,pvVar3,1,2);
      append_newline_to_buffer(param_1->field_0xf4,2);
      append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d364/*ROM*/,2);
      uVar10 = param_1->field_0xf4;
      iVar12 = *(int *)(param_1->field_0x2c + 4);
      uVar4 = (((vtbl_entry*)(iVar12))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[34].adj,1)
      ;
      copy_stream_bytes_into_struct(uVar10,(void*)(uVar4),1,(void *)2);
      uVar10 = param_1->field_0xf4;
      iVar12 = *(int *)(param_1->field_0x2c + 4);
      uVar4 = (((vtbl_entry*)(iVar12))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[34].adj,0)
      ;
      copy_stream_bytes_into_struct(uVar10,(void*)(uVar4),1,(void *)2);
      append_newline_to_buffer(param_1->field_0xf4,2);
    }
    initialize_capture_state_flags(param_1,(void*)(&param_1->field_0x5c));
    (((vtbl_entry*)(param_1->field_0x0))[28].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[28].adj,
               param_1->field_0x54 + 0x60,0);
    iVar12 = call_helper_with_zero_flag_1041b732(param_1);
    if (iVar12 == 0) {
      param_1->field_0xa6 = 0;
      param_1->field_0xa7 = 0;
      piVar5 = (int *)param_1->field_0x50;
      if (param_1->field_0xa0 == '\0') {
        (((vtbl_entry*)(*piVar5))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,0xd00005,0);
      }
      else {
        (((vtbl_entry*)(*piVar5))[2].fn)((int)piVar5 + (int)((vtbl_entry*)(*piVar5))[2].adj,0xd00009);
        param_1->field_0xa0 = 0;
      }
    }
    pvVar3 = (char*)(param_1) ->field_0x44;
    uVar6 = read_bounded_array_element_1051d696(pvVar3,0);
    update_camera_state_flags(pvVar3,0,uVar6 & 0xfffd);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[5].adj,0);
    populate_and_send_capture_params(param_1);
    invoke_virtual_method_batch(param_1);
    query_four_virtual_properties(param_1);
    build_capture_status_packet_1041fee6(param_1,0);
    build_capture_status_packet_10420374(param_1,0,param_1->field_0x54);
    classify_capture_quality(param_1,param_1->field_0x54);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    iVar12 = (((vtbl_entry*)(iVar12))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[38].adj);
    if (iVar12 == 0) {
      uVar6 = *(uint *)(param_1->field_0x54 + 0x18);
      iVar12 = param_1->field_0x54;
      iVar13 = 0x1c;
    }
    else {
      uVar6 = *(uint *)(param_1->field_0x54 + 0x1c);
      iVar12 = param_1->field_0x54;
      iVar13 = 0x18;
    }
    compute_and_send_exposure_offsets(param_1,uVar6,*(uint *)(iVar13 + iVar12));
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[8].adj,0);
  }
  wait_cpucom_line_clear_10501778(param_1->field_0x38);
  iVar12 = *(int *)param_1->field_0x50;
  (((vtbl_entry*)(iVar12))[2].fn)((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd00003,0)
  ;
  iVar12 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar12))[12].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[12].adj);
  (((vtbl_entry*)(param_1->field_0x0))[26].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
  param_1->field_0x98 = 1;
  release_object_at_offset_0x18_10506c1e(param_1->field_0x3c);
  if (param_1->field_0x78 == '\0') {
    empty_noop_stub_103b76f2();
    sStack_a = 0;
    sVar7 = call_kernel_with_zero_arg();
    get_entry_status_word((int)sVar7,&sStack_a);
    sVar7 = call_kernel_with_zero_arg();
    set_timer_channel_value((int)sVar7,6);
    param_1->field_0x58 = param_1->field_0x54;
    puVar2 = (void*)(&param_1->field_0x68);
    initialize_capture_state_flags(param_1,puVar2);
    param_1->field_0x54 = 0;
    piVar5 = (int *)param_1->field_0x58;
    puVar14[3] = 0;
    configure_sensor_readout_channels((int)param_1,0,piVar5,puVar2,puVar14[3]);
    (*(code *)0x10506c30/*ROM*/)(param_1->field_0x3c);
    call_helper_with_global_arg(param_1->field_0x38);
    if ((bVar15) || (cVar8 != '\0')) {
      param_1->field_0xc0 = 0;
      param_1->field_0xbc = 2;
      check_heap_alloc_success(&param_1->field_0x90,0xc);
    }
    param_1->field_0x98 = 0;
    iVar12 = param_1->field_0x58;
    uVar6 = compute_scaled_value(param_1);
    *(uint *)(iVar12 + 0x48) = uVar6;
    if (*(char *)(param_1->field_0xf4 + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d374/*ROM*/,0);
      copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(param_1->field_0x9c),1,0);
      append_newline_to_buffer(param_1->field_0xf4,0);
    }
    param_1->field_0x9c = 0;
    iVar12 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar12))[2].fn)
              ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd00004,0);
    pvVar3 = (char*)(param_1) ->field_0x44;
    uVar6 = read_bounded_array_element_1051d696(pvVar3,0);
    update_camera_state_flags(pvVar3,0,uVar6 & 0xffff | 2);
    (((vtbl_entry*)(param_1->field_0x0))[26].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
    if ((bVar15) || (cVar8 != '\0')) {
      cVar1 = param_1->field_0xc0;
      while (cVar1 == '\0') {
        (((vtbl_entry*)(param_1->field_0x0))[26].fn)
                  ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
        cVar1 = param_1->field_0xc0;
      }
    }
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[9].adj,0);
    set_flag_at_offset_0x84_1041b770(param_1);
    write_value_to_object_offset(param_1);
    init_capture_state_block(param_1,param_1->field_0x58,puVar2);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[5].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[5].adj,1);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[6].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[6].adj,1);
    (((vtbl_entry*)(param_1->field_0x0))[26].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
    write_two_bytes_to_param_offset(param_1);
    if ((bVar15) || (cVar8 != '\0')) {
      param_1->field_0xbc = 1;
      check_heap_alloc_success(&param_1->field_0x90,0x19);
    }
    piVar5 = (int *)param_1->field_0x58;
    puVar14[3] = 0;
    configure_sensor_readout_channels((int)param_1,1,piVar5,puVar2,puVar14[3]);
    build_capture_status_packet_1041fee6(param_1,1);
    build_capture_status_packet_10420374(param_1,1,param_1->field_0x58);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    iVar12 = (((vtbl_entry*)(iVar12))[38].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[38].adj);
    if (iVar12 == 0) {
      uVar6 = *(uint *)(param_1->field_0x58 + 0x24);
      iVar12 = param_1->field_0x58;
      iVar13 = 0x20;
    }
    else {
      uVar6 = *(uint *)(param_1->field_0x58 + 0x20);
      iVar12 = param_1->field_0x58;
      iVar13 = 0x24;
    }
    compute_and_send_exposure_offsets(param_1,uVar6,*(uint *)(iVar13 + iVar12));
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[8].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[8].adj,1);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[9].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[9].adj,1);
    if ((bVar15) || (cVar8 != '\0')) {
      read_word_at_offset_0xc4_1041da6c(param_1);
    }
    (*(code *)0x10506c32/*ROM*/)(param_1->field_0x3c);
    release_object_at_offset_four_105017ac(param_1->field_0x38);
    sVar7 = call_kernel_with_zero_arg();
    set_timer_channel_value((int)sVar7,(int)sStack_a);
    (((vtbl_entry*)(param_1->field_0x0))[26].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[26].adj,0);
    set_flag_at_offset_0xc4_1041da56(param_1);
    param_1->field_0xbc = 0;
    check_heap_alloc_success(&param_1->field_0x90,0x1e);
    empty_stub_function_103b76f0();
    release_capture_resources(param_1);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[7].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[7].adj);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[10].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[10].adj,0);
    iVar12 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar12))[2].fn)
              ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd00006,0);
    (*(code *)0x10506c34/*ROM*/)(param_1->field_0x3c);
    wait_cpucom_line_clear_105017be(param_1->field_0x38);
    call_two_helpers_on_object_10506c36(param_1->field_0x3c);
    clear_twai_flag(param_1->field_0x3c);
    iVar12 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar12))[2].fn)
              ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd0000c,0);
    if (*(char *)(param_1->field_0xf4 + 0x40) != '\0') {
      append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d380/*ROM*/,0);
      iVar12 = *(int *)(param_1->field_0x2c + 4);
      iVar12 = (((vtbl_entry*)(iVar12))[45].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[45].adj);
      iVar13 = 0;
      iStack_2c = 4;
      iVar11 = 0;
      iVar9 = 4;
      do {
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(iVar13),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar11)),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar9)),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(iVar13 + 1),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar11 + 8)),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar9 + 8)),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(iVar13 + 2),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar11 + 0x10)),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar9 + 0x10)),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(iVar13 + 3),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar11 + 0x18)),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar9 + 0x18)),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(iVar13 + 4),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar11 + 0x20)),1,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(*(uint32_t *)(iVar12 + iVar9 + 0x20)),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        iVar13 = iVar13 + 5;
        iVar9 = iVar9 + 0x28;
        iVar11 = iVar11 + 0x28;
        iStack_2c = iStack_2c + -1;
      } while (-1 < iStack_2c);
    }
    set_irq_mask_by_channel(param_1->field_0x24,-0x7fffffe6,0);
    uVar4 = 1;
  }
  else {
    param_1->field_0x98 = 0;
    release_object_at_offset_0x18_10506c0c(param_1->field_0x3c);
    set_irq_mask_by_channel(param_1->field_0x24,-0x7fffffe6,0);
    iVar12 = *(int *)(param_1->field_0x2c + 4);
    (((vtbl_entry*)(iVar12))[11].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar12))[11].adj);
    iVar12 = *(int *)param_1->field_0x50;
    (((vtbl_entry*)(iVar12))[2].fn)
              ((int)param_1->field_0x50 + (int)((vtbl_entry*)(iVar12))[2].adj,0xd0000b,0);
    param_1->field_0x78 = 0;
    uVar4 = 0;
  }
  return uVar4;
}
