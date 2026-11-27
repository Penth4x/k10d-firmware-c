/* @k10d dispatch_event_by_code_104a1a96 @ 0x104a1a96
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of ~26 handler functions based on a 16-bit event code in param_2.
 * summary:
 *   Reads the first ushort of param_2 and performs a binary-search-style comparison against
 *   a set of hardcoded event codes (0x829a through 0xa500). For each matching code, it
 *   calls a corresponding handler function and returns 1. If no code matches, it returns 0.
 *   The callees are all unnamed, so the specific subsystem (e.g., UI, sensor, lens) cannot
 *   be determined from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a1aac) overlaps instruction at (ram,0x104a1aaa)
    */

uint32_t dispatch_event_by_code_104a1a96(uint32_t param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (uVar1 == 0xa001) {
    write_bool_as_word((uint32_t)param_1, (uint32_t)param_2);
    return 1;
  }
  if (uVar1 < 0xa002) {
    if (uVar1 == 0x9004) {
      copy_field_to_buffer_104a20c8((uint32_t)param_1, (uint32_t)param_2);
      return 1;
    }
    if (uVar1 < 0x9005) {
      if (uVar1 == 0x8822) {
        map_mode_state_to_index((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0x8823) {
        if (uVar1 == 0x829a) {
          compute_mode_dependent_pair_values((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0x829d) {
          collect_and_send_status_params((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x8827) {
          dispatch_virtual_call_with_params_104a1fe6((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0x9000) {
          call_helper_with_fixed_address_104a2072((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0x9003) {
          copy_field_to_buffer_104a208c((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0x9209) {
        assemble_object_state_flags((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0x920a) {
        if (uVar1 == 0x9204) {
          write_two_values_to_target((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0x9207) {
          map_virtual_result_to_code((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0x920a) {
          write_two_values_to_param2_104a2254((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0x927c) {
          empty_noop_function_104a2286();
          return 1;
        }
        if (uVar1 == 0xa000) {
          write_param_to_fixed_address((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
  }
  else {
    if (uVar1 == 0xa405) {
      compute_and_store_ratio_value((uint32_t)param_1, (uint32_t)param_2);
      return 1;
    }
    if (uVar1 < 0xa406) {
      if (uVar1 == 0xa301) {
        call_helper_with_fixed_string_104a22f6((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0xa302) {
        if (uVar1 == 0xa217) {
          call_helper_with_zero_and_two_104a22c8((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa300) {
          call_helper_with_fixed_string_104a22dc((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0xa401) {
          call_helper_with_param_and_zeros_104a2310((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa402) {
          query_object_state_and_report_104a2324((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa403) {
          query_and_report_state_flag((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0xa409) {
        query_exposure_mode_class((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0xa40a) {
        if (uVar1 == 0xa406) {
          map_mode_to_state_index_104a24a0((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa408) {
          map_mode_to_state((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0xa40a) {
          map_mode_to_state_index_104a25ac((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa40c) {
          query_object_and_report_result((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xa500) {
          write_table_entries_to_param2((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
  }
  return 0;
}
