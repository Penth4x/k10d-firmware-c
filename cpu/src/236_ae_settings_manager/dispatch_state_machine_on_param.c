/* @k10d dispatch_state_machine_on_param @ 0x104cb65a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104cbaf6) overlaps instruction at (ram,0x104cbaf4)
    */

void dispatch_state_machine_on_param(int param_1)

{
  uint32_t uVar1;
  byte bVar5;
  uint16_t uVar3;
  uint16_t uVar4;
  uint8_t uVar6;
  bool bVar7;
  char cVar8;
  int iVar2;
  uint32_t uVar9;
  
  switch(*(uint32_t *)(param_1 + 0x88)) {
  case 0:
    store_byte_to_pointer_1051e4aa((uint8_t *)(*(uint32_t *)(param_1 + 0x8c)),(uint8_t)(*(uint8_t *)(*(int *)(param_1 + 0x48) + 0x8a8)));
    write_byte_at_offset_one(*(int *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb88));
    write_byte_at_offset_four(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb8e))
    ;
    set_byte_at_offset_five(*(int *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb8f));
    bVar5 = 0;
    write_two_bytes_to_offset_six_1051e4ca(*(uint32_t *)(param_1 + 0x8c),*(short *)(*(int *)(param_1 + 0x48) + 0xeb8a) + 1);
    write_two_bytes_at_offset_eight_1051e4d0(*(uint32_t *)(param_1 + 0x8c),*(short *)(*(int *)(param_1 + 0x48) + 0xeb8c) + 1);
    store_byte_at_offset_10(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb90))
    ;
    set_byte_at_offset_11(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb91))
    ;
    do {
      uVar9 = *(uint32_t *)(param_1 + 0x8c);
      uVar1 = compute_table_offset(*(uint32_t *)(param_1 + 0x48),bVar5);
      write_array_element_1051e4e2(uVar9,bVar5,uVar1);
      bVar5 = bVar5 + 1;
    } while (bVar5 < 0x10);
    break;
  case 1:
    clear_fourteen_word_blocks(*(uint32_t *)(param_1 + 0x48));
    break;
  case 2:
    bVar5 = read_byte_at_offset_five_1051e50e(*(int *)(param_1 + 0x8c));
    uVar3 = read_table_entry_at_offset(*(int *)(param_1 + 0x8c),(uint)bVar5);
    uVar4 = read_second_word_from_pointer_array(*(int *)(param_1 + 0x8c),(uint)bVar5);
    iVar2 = init_object_with_buffer_alloc(*(uint32_t *)(param_1 + 0x48),uVar3,uVar4);
    if (iVar2 != 0) break;
    uVar1 = 0;
    goto LAB_104cbb30;
  case 3:
    bVar5 = read_byte_at_offset_five_1051e50e(*(int *)(param_1 + 0x8c));
    uVar3 = read_table_entry_at_offset(*(int *)(param_1 + 0x8c),(uint)bVar5);
    uVar4 = read_second_word_from_pointer_array(*(int *)(param_1 + 0x8c),(uint)bVar5);
    iVar2 = init_and_bind_object_slot(*(uint32_t *)(param_1 + 0x48),uVar3,uVar4);
    if (iVar2 == 0) {
      *(uint32_t *)(param_1 + 0x214) = 0;
      goto LAB_104cbb36;
    }
    break;
  case 4:
    uVar1 = *(uint32_t *)(param_1 + 0x48);
    uVar6 = read_byte_at_offset_five_1051e50e(*(int *)(param_1 + 0x8c));
    update_buffer_index_and_store_byte(uVar1,uVar6);
    break;
  case 5:
    uVar6 = read_byte_at_offset_five_1051e50e(*(int *)(param_1 + 0x8c));
    copy_buffer_block(*(uint32_t *)(param_1 + 0x48),uVar6);
    uVar9 = *(uint32_t *)(param_1 + 0x8c);
    uVar1 = compute_table_offset(*(uint32_t *)(param_1 + 0x48),uVar6);
    write_array_element_1051e4e2(uVar9,uVar6,uVar1);
    break;
  case 6:
    configure_sensor_readout_params_104ce0a4(param_1);
    goto LAB_104cbb36;
  case 7:
    *(uint32_t *)(param_1 + 0x214) = 1;
    bVar7 = compare_bytes_at_offsets_1051e580(*(int *)(param_1 + 0x8c));
    uVar1 = 0;
    if (bVar7) {
      *(uint32_t *)(param_1 + 0x80) = 2;
      iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
      if (iVar2 == 0) {
        cVar8 = read_byte_at_offset_four_1051e508(*(int *)(param_1 + 0x8c));
        if (cVar8 != '\x01') {
          increment_modulo_counter_1051e6de(*(uint32_t *)(param_1 + 0x8c));
        }
      }
      else if (*(int *)(param_1 + 0x214) == 1) {
        increment_modulo_counter_1051e6de(*(uint32_t *)(param_1 + 0x8c));
        uVar1 = 1;
      }
    }
    else {
      subtract_byte_from_byte_1051e68a(*(uint32_t *)(param_1 + 0x8c));
    }
    goto LAB_104cbb22;
  case 8:
    *(uint32_t *)(param_1 + 0x214) = 1;
    bVar7 = check_byte_range_condition_1051e592(*(int *)(param_1 + 0x8c));
    uVar1 = 0;
    if (bVar7) {
      *(uint32_t *)(param_1 + 0x80) = 1;
      iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
      if (iVar2 == 0) {
        cVar8 = read_byte_at_offset_four_1051e508(*(int *)(param_1 + 0x8c));
        if (cVar8 != '\x01') {
          decrement_cyclic_index_1051e7aa(*(uint32_t *)(param_1 + 0x8c));
        }
      }
      else if (*(int *)(param_1 + 0x214) == 1) {
        decrement_cyclic_index_1051e7aa(*(uint32_t *)(param_1 + 0x8c));
        uVar1 = 1;
      }
    }
    else {
      adjust_byte_field_with_wrap(*(uint32_t *)(param_1 + 0x8c));
    }
    goto LAB_104cbb22;
  case 9:
    *(uint32_t *)(param_1 + 0x214) = 1;
    bVar7 = check_byte_at_offset_five_1051e668(*(int *)(param_1 + 0x8c));
    uVar1 = 0;
    if (bVar7) {
      *(uint32_t *)(param_1 + 0x80) = 2;
      iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
      if (iVar2 == 0) {
        cVar8 = read_byte_at_offset_four_1051e508(*(int *)(param_1 + 0x8c));
        if (cVar8 != '\x01') {
          decrement_byte_at_offset_four(*(uint32_t *)(param_1 + 0x8c));
        }
      }
      else if (*(int *)(param_1 + 0x214) == 1) {
        decrement_byte_at_offset_four(*(uint32_t *)(param_1 + 0x8c));
        uVar1 = 1;
      }
    }
    else {
      decrement_byte_at_offset_5_1051e6b6(*(uint32_t *)(param_1 + 0x8c));
    }
    goto LAB_104cbb22;
  case 10:
    *(uint32_t *)(param_1 + 0x214) = 1;
    bVar7 = check_byte_increment_1051e676(*(int *)(param_1 + 0x8c));
    uVar1 = 0;
    if (bVar7) {
      *(uint32_t *)(param_1 + 0x80) = 1;
      iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
      if (iVar2 == 0) {
        cVar8 = read_byte_at_offset_four_1051e508(*(int *)(param_1 + 0x8c));
        if (cVar8 != '\x01') {
          clear_byte_at_offset_five_1051e82a(*(uint32_t *)(param_1 + 0x8c));
        }
      }
      else if (*(int *)(param_1 + 0x214) == 1) {
        clear_byte_at_offset_five_1051e82a(*(uint32_t *)(param_1 + 0x8c));
        uVar1 = 1;
      }
    }
    else {
      increment_byte_if_below_limit_1051e6c6(*(uint32_t *)(param_1 + 0x8c));
    }
    goto LAB_104cbb22;
  case 0xb:
    *(uint32_t *)(param_1 + 0x214) = 1;
    *(uint32_t *)(param_1 + 0x80) = 2;
    iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (*(int *)(param_1 + 0x214) == 1) {
        set_byte_at_offset_five(*(int *)(param_1 + 0x8c),0);
        uVar1 = 1;
      }
    }
    goto LAB_104cbb22;
  case 0xc:
    *(uint32_t *)(param_1 + 0x214) = 1;
    *(uint32_t *)(param_1 + 0x80) = 1;
    iVar2 = configure_sensor_readout_params_104ce0a4(param_1);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (*(int *)(param_1 + 0x214) == 1) {
        set_byte_at_offset_five(*(int *)(param_1 + 0x8c),0);
        uVar1 = 1;
      }
    }
LAB_104cbb22:
    store_byte_at_offset_0x4c(*(uint32_t *)(param_1 + 0x8c),uVar1);
    goto LAB_104cbb36;
  }
  uVar1 = 1;
LAB_104cbb30:
  *(uint32_t *)(param_1 + 0x214) = uVar1;
LAB_104cbb36:
  *(uint32_t *)(param_1 + 0x210) = 0xc000b;
  return;
}
