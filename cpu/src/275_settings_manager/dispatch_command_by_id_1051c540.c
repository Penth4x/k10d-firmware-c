/* @k10d dispatch_command_by_id_1051c540 @ 0x1051c540
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a command identified by a 16-bit ID in param_2 to one of ~25 handler
 *   functions.
 * summary:
 *   Reads the first ushort of param_2 and uses a nested if/else chain to match it against
 *   specific constant values (e.g., 0x11a, 0x10f, 0x101, 0xfe, 0x202, etc.). For each
 *   match, it calls a corresponding handler function (copy_struct_field_at_offset through
 *   dispatch_by_short_field), passing param_1, param_2, and optionally param_3 or param_4.
 *   Returns 1 if a handler was invoked, 0 otherwise. The callees are all unverified, so the
 *   specific subsystem (e.g., camera control, communication) is not determinable from the
 *   names alone, but the structure is a classic command dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051c55a) overlaps instruction at (ram,0x1051c558)
    */

uint32_t dispatch_command_by_id_1051c540(int param_1,ushort *param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (uVar1 == 0x11a) {
    write_two_values_to_param2_1051c818(__frv_reg_unset(4), __frv_reg_unset(5));
    return 1;
  }
  if (uVar1 < 0x11b) {
    if (uVar1 == 0x10f) {
      copy_struct_field_at_offset(__frv_reg_unset(4), __frv_reg_unset(5));
      return 1;
    }
    if (uVar1 < 0x110) {
      if (uVar1 == 0x101) {
        dispatch_param_by_type_1051caaa(param_1,param_2,(int)param_3);
        return 1;
      }
      if (uVar1 < 0x102) {
        if (uVar1 == 0xfe) {
          forward_flag_to_helper(param_1,param_2,param_4);
          return 1;
        }
        if (uVar1 == 0x100) {
          dispatch_by_two_byte_field(param_1,param_2,param_3);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x102) {
          loop_call_helper_with_index(param_1,param_2,(int)param_3);
          return 1;
        }
        if (uVar1 == 0x106) {
          map_mode_value_to_command(param_1,param_2,(int)param_3);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0x112) {
        query_and_map_state_code(param_1,param_2);
        return 1;
      }
      if (uVar1 < 0x113) {
        if (uVar1 == 0x110) {
          copy_struct_field_to_offset(param_1,param_2);
          return 1;
        }
        if (uVar1 == 0x111) {
          dispatch_param_by_type_1051cc5c(param_1,param_2,(int)param_3);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x115) {
          map_mode_value_to_state(param_1,param_2,(int)param_3);
          return 1;
        }
        if (uVar1 == 0x116) {
          dispatch_param_by_type_1051cc98(param_1,param_2,(int)param_3);
          return 1;
        }
        if (uVar1 == 0x117) {
          dispatch_by_short_field(param_1,param_2,(int)param_3);
          return 1;
        }
      }
    }
  }
  else {
    if (uVar1 == 0x13e) {
      write_parameter_array_to_device(param_1,param_2);
      return 1;
    }
    if (uVar1 < 0x13f) {
      if (uVar1 == 0x128) {
        call_helper_with_zero_and_two_1051c868(param_1,param_2);
        return 1;
      }
      if (uVar1 < 0x129) {
        if (uVar1 == 0x11b) {
          init_two_field_struct(param_1,param_2);
          return 1;
        }
        if (uVar1 == 0x11c) {
          map_state_to_three_way_flag(param_1,param_2,(int)param_3);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x131) {
          copy_block_at_offset_0x40(param_1,param_2);
          return 1;
        }
        if (uVar1 == 0x132) {
          format_and_send_message_1051c894(param_1,(int)param_2);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0x202) {
        forward_param_to_helper_1051cc46(param_1,param_2,(int)param_3);
        return 1;
      }
      if (uVar1 < 0x203) {
        if (uVar1 == 0x13f) {
          write_array_from_table(param_1,param_2);
          return 1;
        }
        if (uVar1 == 0x201) {
          forward_param_to_helper_1051cc30(param_1,param_2,(int)param_3);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x211) {
          write_parameter_array_to_object(param_1,(int)param_2);
          return 1;
        }
        if (uVar1 == 0x212) {
          set_two_values_from_mode_table(param_1,param_2,(int)param_3);
          return 1;
        }
        if (uVar1 == 0x213) {
          map_mode_value_to_index(param_1,param_2,(int)param_3);
          return 1;
        }
      }
    }
  }
  return 0;
}
