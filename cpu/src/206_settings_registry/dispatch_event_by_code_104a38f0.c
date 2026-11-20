/* @k10d dispatch_event_by_code_104a38f0 @ 0x104a38f0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Dispatches to a specific handler function based on the value of the first ushort in
 *   param_2.
 * summary:
 *   Reads the first 16-bit value from param_2 and uses a large binary search tree to select
 *   one of many handler functions. Returns 1 if a handler is found and called, or 0 if the
 *   code is unrecognized. Some codes map to a shared handler
 *   (write_four_bytes_to_mmio_block_104a5c9c or compute_four_channel_weights) with an
 *   additional integer parameter derived from the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a3904) overlaps instruction at (ram,0x104a3902)
    */

uint32_t dispatch_event_by_code_104a38f0(cls_105b6554 *param_1,ushort *param_2)

{
  ushort uVar1;
  uint32_t uVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0x49) {
    forward_flag_from_object_field(__frv_reg_unset(4), __frv_reg_unset(5));
    return 1;
  }
  if (uVar1 < 0x4a) {
    if (uVar1 == 0x20) {
      map_status_to_index_and_write(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 < 0x21) {
      if (uVar1 == 0xd) {
        query_object_state_and_report_104a4a3a(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (0xd < uVar1) {
        if (uVar1 == 0x17) {
          query_and_forward_state(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (0x17 < uVar1) {
          if (uVar1 == 0x1a) {
            map_mode_value_to_code(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (0x1a < uVar1) {
            if (uVar1 == 0x1d) {
              read_four_virtual_values_and_pack(__frv_reg_unset(4), __frv_reg_unset(5));
              return 1;
            }
            if (uVar1 != 0x1f) {
              return 0;
            }
            remap_mode_index_and_dispatch(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x18) {
            query_and_report_object_state_104a4ecc(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 != 0x19) {
            return 0;
          }
          map_state_to_code_and_write(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 == 0x13) {
          collect_and_send_object_properties(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (0x13 < uVar1) {
          if (uVar1 == 0x14) {
            select_and_send_value(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 != 0x16) {
            return 0;
          }
          compute_and_write_offset_value(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 == 0xe) {
          map_virtual_call_result_to_code(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 != 0x12) {
          return 0;
        }
        compute_exposure_time_value(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 4) {
        forward_param_to_helper_104a482e(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (4 < uVar1) {
        if (uVar1 == 7) {
          write_two_byte_value_104a488a(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (7 < uVar1) {
          if (uVar1 == 8) {
            query_and_report_state(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 != 0xc) {
            return 0;
          }
          query_exposure_mode_state_104a4900(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 == 5) {
          forward_param_to_helper_104a4848(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 != 6) {
          return 0;
        }
        call_two_helpers_with_stack_buffer(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 0) {
        call_helper_with_fixed_args_104a47ae(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 1) {
        call_helper_with_param_and_zeros_104a47c8(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 2) {
        send_two_short_values_104a47dc(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 != 3) {
        return 0;
      }
      forward_param_to_helper_104a4814(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 == 0x34) {
      query_and_report_four_states(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (0x34 < uVar1) {
      if (uVar1 == 0x3e) {
        extract_and_send_four_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (0x3e < uVar1) {
        if (uVar1 == 0x41) {
          call_helper_with_param_and_zeros_104a5aa8(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (0x41 < uVar1) {
          if (uVar1 == 0x47) {
            invoke_virtual_and_clear_slots(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 != 0x48) {
            return 0;
          }
          invoke_virtual_slot_and_set_flag_104a5b1a(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 == 0x3f) {
          query_and_report_object_state_104a59c2(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 != 0x40) {
          return 0;
        }
        call_helper_with_offset_value_104a5a86(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 0x38) {
        send_two_short_values_104a58e4(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (0x38 < uVar1) {
        if (uVar1 == 0x39) {
          write_two_shorts_from_struct(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 != 0x3d) {
          return 0;
        }
        forward_param2_and_struct_field(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 0x35) {
        write_two_scaled_shorts(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 != 0x37) {
        return 0;
      }
      check_and_set_flag_104a58b4(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 == 0x26) {
      query_and_set_flag_104a535e(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (0x26 < uVar1) {
      if (uVar1 == 0x2d) {
        compute_and_write_checksum(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (0x2d < uVar1) {
        if (uVar1 == 0x32) {
          call_single_param_helper(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 != 0x33) {
          return 0;
        }
        report_two_virtual_states(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 == 0x27) {
        write_four_inverted_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 != 0x28) {
        return 0;
      }
      write_four_inverted_status_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 == 0x23) {
      read_byte_from_buffer_and_write_104a52d2(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (0x23 < uVar1) {
      if (uVar1 == 0x24) {
        read_byte_from_buffer_and_write_104a5300(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 != 0x25) {
        return 0;
      }
      check_flag_and_set_bit(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 == 0x21) {
      map_mode_index_to_state(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 != 0x22) {
      return 0;
    }
    query_and_set_flag_104a52a2(__frv_reg_unset(4), __frv_reg_unset(5));
    return 1;
  }
  if (uVar1 != 0x20d) {
    if (uVar1 < 0x20e) {
      if (uVar1 == 0x5c) {
        call_virtual_slot_and_forward_104a5d16(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 < 0x5d) {
        if (uVar1 == 0x55) {
          uVar2 = 2;
        }
        else if (uVar1 < 0x56) {
          if (uVar1 == 0x50) {
            dispatch_mode_specific_handler_104a5c2c(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 < 0x51) {
            if (uVar1 == 0x4d) {
              dispatch_virtual_call_and_store_result(__frv_reg_unset(4), __frv_reg_unset(5));
              return 1;
            }
            if (uVar1 != 0x4f) {
              return 0;
            }
            map_flag_to_two_state(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x53) {
            uVar2 = 0;
          }
          else {
            if (uVar1 != 0x54) {
              return 0;
            }
            uVar2 = 1;
          }
        }
        else if (uVar1 == 0x58) {
          uVar2 = 4;
        }
        else if (uVar1 < 0x59) {
          if (uVar1 == 0x56) {
            uVar2 = 6;
          }
          else {
            if (uVar1 != 0x57) {
              return 0;
            }
            uVar2 = 3;
          }
        }
        else if (uVar1 == 0x59) {
          uVar2 = 5;
        }
        else {
          if (uVar1 != 0x5a) {
            return 0;
          }
          uVar2 = 7;
        }
        write_four_bytes_to_mmio_block_104a5c9c((uint32_t)(param_1),(void *)(param_2),(uint32_t)(uVar2));
        return 1;
      }
      if (uVar1 == 0x206) {
        call_virtual_slot_and_forward_result_104a5f12(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 < 0x207) {
        if (uVar1 == 0x200) {
          write_four_values_to_target(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 < 0x201) {
          if (uVar1 == 0x5d) {
            compute_and_store_checksum(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x62) {
            call_helper_with_zero_and_one(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
        else {
          if (uVar1 == 0x201) {
            write_four_shifted_values(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x205) {
            call_virtual_slot_and_forward_104a5ee2(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
      }
      else {
        if (uVar1 == 0x209) {
          call_virtual_method_and_forward_result_104a5fa2(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 < 0x20a) {
          if (uVar1 == 0x207) {
            call_virtual_slot_and_forward_104a5f42(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x208) {
            call_virtual_slot_and_forward_104a5f72(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
        else {
          if (uVar1 == 0x20a) {
            call_virtual_method_and_pass_result(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x20b) {
            call_virtual_method_and_forward_result_104a6002(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
      }
    }
    else {
      if (uVar1 == 0x21c) {
        write_three_words_to_buffer_104a6402(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 < 0x21d) {
        if (uVar1 == 0x213) {
          uVar2 = 5;
        }
        else if (uVar1 < 0x214) {
          if (uVar1 == 0x210) {
            uVar2 = 6;
          }
          else if (uVar1 < 0x211) {
            if (uVar1 == 0x20e) {
              uVar2 = 1;
            }
            else {
              if (uVar1 != 0x20f) {
                return 0;
              }
              uVar2 = 2;
            }
          }
          else if (uVar1 == 0x211) {
            uVar2 = 3;
          }
          else {
            if (uVar1 != 0x212) {
              return 0;
            }
            uVar2 = 4;
          }
        }
        else {
          if (uVar1 == 0x216) {
            call_virtual_slot_and_forward_104a62f6(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (0x216 < uVar1) {
            if (uVar1 == 0x21a) {
              call_helper_with_offset_0x6c(__frv_reg_unset(4), __frv_reg_unset(5));
              return 1;
            }
            if (uVar1 != 0x21b) {
              return 0;
            }
            process_two_sample_blocks(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 != 0x214) {
            if (uVar1 != 0x215) {
              return 0;
            }
            write_five_values_to_param2(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          uVar2 = 7;
        }
        goto code_r0x104a4486;
      }
      if (uVar1 == 0x222) {
        collect_eight_values_and_send(__frv_reg_unset(4), __frv_reg_unset(5));
        return 1;
      }
      if (uVar1 < 0x223) {
        if (uVar1 == 0x21f) {
          call_virtual_slot_and_forward_result_104a65f8(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 < 0x220) {
          if (uVar1 == 0x21d) {
            write_three_words_to_buffer_104a64bc(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x21e) {
            copy_four_words_from_struct(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
        else {
          if (uVar1 == 0x220) {
            copy_buffer_to_new_heap_block(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x221) {
            build_exposure_parameter_table_104a66a0(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
      }
      else {
        if (uVar1 == 0x3ff) {
          copy_buffer_at_offset(__frv_reg_unset(4), __frv_reg_unset(5));
          return 1;
        }
        if (uVar1 < 0x400) {
          if (uVar1 == 0x223) {
            call_if_pointer_at_offset_0x68(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x224) {
            copy_three_values_from_struct(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
        else {
          if (uVar1 == 0x404) {
            call_if_pointer_at_offset_0x4f0(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
          if (uVar1 == 0x405) {
            call_handler_if_present(__frv_reg_unset(4), __frv_reg_unset(5));
            return 1;
          }
        }
      }
    }
    return 0;
  }
  uVar2 = 0;
code_r0x104a4486:
  compute_four_channel_weights((int)param_1,param_2,uVar2);
  return 1;
}
