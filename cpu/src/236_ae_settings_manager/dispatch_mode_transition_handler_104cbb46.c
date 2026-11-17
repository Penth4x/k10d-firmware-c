/* @k10d dispatch_mode_transition_handler_104cbb46 @ 0x104cbb46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to specific handler routines based on a mode index stored at offset 0x90 of
 *   the context object.
 * summary:
 *   The function switches on the value at param_1+0x90 to execute one of nine distinct code
 *   paths. Each path sets a flag at param_1+0x214 and calls various helper functions
 *   (FUN_1051e8xx through FUN_1051ecxx) that appear to manage state or communication with a
 *   peripheral (likely the PRIME DSP or OSDC) via the pointer at param_1+0x94. It concludes
 *   by writing the constant 0xc000c to param_1+0x210.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104cbeea) overlaps instruction at (ram,0x104cbee8)
    */

void dispatch_mode_transition_handler_104cbb46(int param_1)

{
  bool bVar2;
  char cVar3;
  int iVar1;
  uint uVar4;
  uint32_t uVar5;
  
  switch(*(uint32_t *)(param_1 + 0x90)) {
  case 0:
    store_byte_to_pointer_1051e8c6((void *)(*(uint32_t *)(param_1 + 0x94)),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0x88c));
    set_second_byte_of_struct(*(int *)(param_1 + 0x94),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb98));
    set_byte_at_offset_four(*(uint32_t *)(param_1 + 0x94),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb9e))
    ;
    write_two_bytes_at_offset_six(*(uint32_t *)(param_1 + 0x94),*(short *)(*(int *)(param_1 + 0x48) + 0xeb9a) + 1);
    uVar4 = 0;
    write_two_bytes_at_offset_eight_1051e8ec(*(uint32_t *)(param_1 + 0x94),*(short *)(*(int *)(param_1 + 0x48) + 0xeb9c) + 1);
    set_byte_at_offset_10(*(uint32_t *)(param_1 + 0x94),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeba0))
    ;
    do {
      write_array_element_1051e8f8(*(uint32_t *)(param_1 + 0x94),uVar4,
                   *(int *)(param_1 + 0x48) + 0xdf8c + uVar4 * 0xc);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0x10);
    *(uint32_t *)(param_1 + 0x214) = 1;
    goto LAB_104cbf30;
  case 1:
    reset_struct_fields_and_zero_tail(*(uint32_t *)(param_1 + 0x48));
    *(uint32_t *)(param_1 + 0x214) = 1;
    goto LAB_104cbf30;
  case 2:
    write_params_and_table_to_device(param_1);
    goto LAB_104cbf30;
  case 3:
    *(uint32_t *)(param_1 + 0x214) = 1;
    uVar5 = 0;
    bVar2 = compare_bytes_at_offsets_1051e968(*(int *)(param_1 + 0x94));
    if (bVar2) {
      iVar1 = read_byte_at_offset_10_1051e936(__frv_reg_unset(4));
      if (iVar1 == 0) {
        cVar3 = read_byte_at_offset_four_1051e91e(*(int *)(param_1 + 0x94));
        if (cVar3 != '\x01') {
          increment_modulo_counter_1051eac6(*(uint32_t *)(param_1 + 0x94));
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x80) = 2;
        write_params_and_table_to_device(param_1);
        if (*(int *)(param_1 + 0x214) == 1) {
          increment_modulo_counter_1051eac6(*(uint32_t *)(param_1 + 0x94));
          uVar5 = 1;
        }
      }
    }
    else {
      subtract_byte_from_byte_1051ea72(*(uint32_t *)(param_1 + 0x94));
    }
    break;
  case 4:
    *(uint32_t *)(param_1 + 0x214) = 1;
    uVar5 = 0;
    bVar2 = check_byte_range_condition_1051e97a(*(int *)(param_1 + 0x94));
    if (bVar2) {
      iVar1 = read_byte_at_offset_10_1051e936(__frv_reg_unset(4));
      if (iVar1 == 0) {
        cVar3 = read_byte_at_offset_four_1051e91e(*(int *)(param_1 + 0x94));
        if (cVar3 != '\x01') {
          decrement_cyclic_index_1051eb92(*(uint32_t *)(param_1 + 0x94));
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x80) = 1;
        write_params_and_table_to_device(param_1);
        if (*(int *)(param_1 + 0x214) == 1) {
          decrement_cyclic_index_1051eb92(*(uint32_t *)(param_1 + 0x94));
          uVar5 = 1;
        }
      }
    }
    else {
      adjust_byte_field_by_offset(*(uint32_t *)(param_1 + 0x94));
    }
    break;
  case 5:
    *(uint32_t *)(param_1 + 0x214) = 1;
    uVar5 = 0;
    bVar2 = check_byte_at_offset_five_1051ea50(*(int *)(param_1 + 0x94));
    if (bVar2) {
      iVar1 = read_byte_at_offset_10_1051e936(__frv_reg_unset(4));
      if (iVar1 == 0) {
        cVar3 = read_byte_at_offset_four_1051e91e(*(int *)(param_1 + 0x94));
        if (cVar3 != '\x01') {
          decrement_char_at_offset(*(uint32_t *)(param_1 + 0x94));
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x80) = 2;
        write_params_and_table_to_device(param_1);
        if (*(int *)(param_1 + 0x214) == 1) {
          decrement_char_at_offset(*(uint32_t *)(param_1 + 0x94));
          uVar5 = 1;
        }
      }
    }
    else {
      decrement_byte_at_offset_5_1051ea9e(*(uint32_t *)(param_1 + 0x94));
    }
    break;
  case 6:
    *(uint32_t *)(param_1 + 0x214) = 1;
    uVar5 = 0;
    bVar2 = check_byte_increment_1051ea5e(*(int *)(param_1 + 0x94));
    if (bVar2) {
      iVar1 = read_byte_at_offset_10_1051e936(__frv_reg_unset(4));
      if (iVar1 == 0) {
        cVar3 = read_byte_at_offset_four_1051e91e(*(int *)(param_1 + 0x94));
        if (cVar3 != '\x01') {
          clear_byte_at_offset_five_1051ec12(*(uint32_t *)(param_1 + 0x94));
        }
      }
      else {
        *(uint32_t *)(param_1 + 0x80) = 1;
        write_params_and_table_to_device(param_1);
        if (*(int *)(param_1 + 0x214) == 1) {
          clear_byte_at_offset_five_1051ec12(*(uint32_t *)(param_1 + 0x94));
          uVar5 = 1;
        }
      }
    }
    else {
      increment_byte_if_below_limit_1051eaae(*(uint32_t *)(param_1 + 0x94));
    }
    break;
  case 7:
    *(uint32_t *)(param_1 + 0x214) = 1;
    iVar1 = read_byte_at_offset_10_1051e936(*(uint32_t *)(param_1 + 0x94));
    uVar5 = 0;
    if (iVar1 != 0) {
      *(uint32_t *)(param_1 + 0x80) = 2;
      write_params_and_table_to_device(param_1);
      if (*(int *)(param_1 + 0x214) == 1) {
        write_byte_at_offset_five(*(uint32_t *)(param_1 + 0x94),0);
        uVar5 = 1;
      }
    }
    break;
  case 8:
    *(uint32_t *)(param_1 + 0x214) = 1;
    iVar1 = read_byte_at_offset_10_1051e936(*(uint32_t *)(param_1 + 0x94));
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      *(uint32_t *)(param_1 + 0x80) = 1;
      write_params_and_table_to_device(param_1);
      if (*(int *)(param_1 + 0x214) == 1) {
        write_byte_at_offset_five(*(uint32_t *)(param_1 + 0x94),0);
        uVar5 = 1;
      }
    }
    break;
  default:
    goto LAB_104cbf30;
  }
  write_byte_to_offset_0x4c(*(uint32_t *)(param_1 + 0x94),uVar5);
LAB_104cbf30:
  *(uint32_t *)(param_1 + 0x210) = 0xc000c;
  return;
}
