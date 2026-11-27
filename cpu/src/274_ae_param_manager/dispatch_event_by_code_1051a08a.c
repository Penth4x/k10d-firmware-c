/* @k10d dispatch_event_by_code_1051a08a @ 0x1051a08a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to a specific handler based on a 16-bit event code read from param_2.
 * summary:
 *   Reads the first ushort from param_2 and uses a binary-search-like if/else chain to call
 *   one of ~25 distinct handler functions if the code matches a known value. If no specific
 *   handler matches, it falls through to a generic handler dispatch_command_by_id_1051c540
 *   passing all four original parameters. Returns 1 for specific matches or the result of
 *   the generic handler otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051a0a0) overlaps instruction at (ram,0x1051a09e)
    */

uint32_t dispatch_event_by_code_1051a08a(cls_105d6608 *param_1,ushort *param_2,uint *param_3,uint32_t param_4)

{
  ushort uVar1;
  uint32_t uVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0xc61f) {
    dispatch_two_value_update((uint32_t)param_1, (uint32_t)param_2);
    return 1;
  }
  if (uVar1 < 0xc620) {
    if (uVar1 == 0xc614) {
      forward_object_field_to_helper((uint32_t)param_1, (uint32_t)param_2);
      return 1;
    }
    if (uVar1 < 0xc615) {
      if (uVar1 == 0x828e) {
        initialize_four_channel_state((uint32_t)(param_1),(void *)(param_2),(int)(0));
        return 1;
      }
      if (uVar1 < 0x828f) {
        if (uVar1 == 0x103) {
          map_mode_to_flag_and_send((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
          return 1;
        }
        if (uVar1 == 0x828d) {
          set_two_flags_by_param((uint32_t)(param_1),(void *)(param_2),(int)(0));
          return 1;
        }
      }
      else {
        if (uVar1 == 0xc612) {
          write_four_bytes_to_fixed_address((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc613) {
          write_four_bytes_to_rodata((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0xc619) {
        call_helper_twice_with_indices_1051a398((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0xc61a) {
        if (uVar1 == 0xc616) {
          call_helper_three_times_with_indices((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc617) {
          call_helper_with_two_args_1051a384((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0xc61a) {
          write_four_values_by_mode((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc61d) {
          call_helper_with_shifted_mask((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc61e) {
          iterate_over_structured_entries((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
  }
  else {
    if (uVar1 == 0xc62b) {
      enable_two_channels_1051a7dc((uint32_t)param_1, (uint32_t)param_2);
      return 1;
    }
    if (uVar1 < 0xc62c) {
      if (uVar1 == 0xc622) {
        iterate_and_call_with_deref_values_1051a6ba((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0xc623) {
        if (uVar1 == 0xc620) {
          dispatch_param_update_by_type((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc621) {
          iterate_and_call_with_deref_values_1051a67c((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0xc627) {
          iterate_over_double_length_array((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc628) {
          write_six_values_to_target((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc62a) {
          write_two_values_to_object((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
    else {
      if (uVar1 == 0xc62e) {
        enable_two_channels_1051a840((uint32_t)param_1, (uint32_t)param_2);
        return 1;
      }
      if (uVar1 < 0xc62f) {
        if (uVar1 == 0xc62c) {
          call_helper_twice_with_indices_1051a804((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc62d) {
          call_helper_with_two_args_1051a82c((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
      else {
        if (uVar1 == 0xc632) {
          enable_two_channels_1051a868((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc65a) {
          call_helper_with_fixed_args_1051a654((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
        if (uVar1 == 0xc65b) {
          call_helper_with_fixed_args_1051a668((uint32_t)param_1, (uint32_t)param_2);
          return 1;
        }
      }
    }
  }
  uVar2 = dispatch_command_by_id_1051c540((cls_105d6c2c *)param_1,param_2,param_3,param_4);
  return uVar2;
}
