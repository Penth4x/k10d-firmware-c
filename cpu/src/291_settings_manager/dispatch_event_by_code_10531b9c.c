/* @k10d dispatch_event_by_code_10531b9c @ 0x10531b9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to a specific handler function based on a 16-bit event code when the type
 *   parameter is 4.
 * summary:
 *   The function checks if param_3 equals 4. If so, it reads a 16-bit value from param_2
 *   and uses a large nested if-else chain to call one of approximately 40 distinct handler
 *   functions (store_callee_result_at_offset_0x4d4 through
 *   copy_buffer_from_callback_10532de2) based on the specific code value. It returns 1 if
 *   the type is 4 (regardless of whether a specific handler was found), and 0 otherwise.
 *   The specific camera subsystem is not identifiable from the generic handler addresses.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10531bac) overlaps instruction at (ram,0x10531baa)
    */

uint32_t dispatch_event_by_code_10531b9c(uint32_t param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint32_t uVar2;
  
  if (param_3 == 4) {
    uVar1 = *param_2;
    if (uVar1 == 0x5d) {
      compute_and_send_checksum(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else if (uVar1 < 0x5e) {
      if (uVar1 == 0x25) {
        set_flag_from_lookup_result(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 < 0x26) {
        if (uVar1 == 0x18) {
          dispatch_three_param_calls(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 < 0x19) {
          if (uVar1 == 5) {
            store_callee_result_at_offset_0x4d4(__frv_reg_unset(4),(void *)__frv_reg_unset(5));
            uVar2 = 1;
          }
          else if (uVar1 == 6) {
            write_four_fields_to_object(__frv_reg_unset(4), __frv_reg_unset(5));
            uVar2 = 1;
          }
          else if (uVar1 == 7) {
            write_three_bytes_to_object(__frv_reg_unset(4), __frv_reg_unset(5));
            uVar2 = 1;
          }
          else if (uVar1 == 0x12) {
            store_scaled_value_at_offset(__frv_reg_unset(4),(void *)__frv_reg_unset(5));
            uVar2 = 1;
          }
          else {
            uVar2 = 1;
          }
        }
        else if (uVar1 == 0x19) {
          store_result_at_offset_0x20(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x22) {
          set_flag_from_query_result_10532232(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x23) {
          check_and_report_status_byte(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x24) {
          check_and_log_value(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else {
          uVar2 = 1;
        }
      }
      else if (uVar1 == 0x3d) {
        store_result_at_object_offset(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 < 0x3e) {
        if (uVar1 == 0x26) {
          set_flag_from_query_result_10532316(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x27) {
          write_inverted_pair_to_buffer(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x28) {
          read_and_invert_four_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x37) {
          write_flag_from_lookup(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else {
          uVar2 = 1;
        }
      }
      else if (uVar1 == 0x47) {
        dispatch_virtual_call_with_param_1053248a(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x49) {
        store_query_result_as_bool(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x50) {
        check_and_log_state_11(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x5c) {
        invoke_virtual_method_on_object_1053270c(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x20d) {
      scale_four_channel_values(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else if (uVar1 < 0x20e) {
      if (uVar1 == 0x207) {
        invoke_virtual_method_on_nested_object_105327a6(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 < 0x208) {
        if (uVar1 == 0x200) {
          store_four_values_from_param2(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x201) {
          store_four_shifted_values(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x205) {
          dispatch_virtual_call_via_offset(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else if (uVar1 == 0x206) {
          dispatch_virtual_call_via_object_10532772(__frv_reg_unset(4), __frv_reg_unset(5));
          uVar2 = 1;
        }
        else {
          uVar2 = 1;
        }
      }
      else if (uVar1 == 0x208) {
        dispatch_virtual_call_via_object_105327da(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x209) {
        dispatch_virtual_call_with_param_1053280e(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x20a) {
        invoke_virtual_method_on_nested_object_10532842(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x20b) {
        dispatch_virtual_call_with_param_10532876(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x220) {
      copy_bytes_from_buffer_10532c4e(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else if (uVar1 < 0x221) {
      if (uVar1 == 0x215) {
        write_five_values_to_object(__frv_reg_unset(4),(void *)__frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x216) {
        invoke_virtual_method_on_object_10532b3e(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x21e) {
        copy_four_bytes_to_struct(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x21f) {
        invoke_virtual_method_on_object_10532c1a(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x3ff) {
      copy_32_bytes_from_callback(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else if (uVar1 < 0x400) {
      if (uVar1 == 0x222) {
        write_two_indexed_values(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else if (uVar1 == 0x224) {
        send_three_status_values(__frv_reg_unset(4), __frv_reg_unset(5));
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x404) {
      copy_buffer_from_callback_10532da6(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else if (uVar1 == 0x405) {
      copy_buffer_from_callback_10532de2(__frv_reg_unset(4), __frv_reg_unset(5));
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
