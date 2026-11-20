/* @k10d clear_and_set_status_flags_000cb73c @ 0x000cb73c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears two bits in global status words, calls a series of initialization functions, and
 *   sets the corresponding bits back.
 * summary:
 *   The function clears bit 0 of DAT_000000d1 and bit 7 of DAT_000000f6. It calls
 *   FUN_000e016a with the lower 16 bits of param_1, then updates the lower 3 bits of
 *   DAT_0003ce00 using the return value of select_state_by_flags. If bit 0 of DAT_0003ce06
 *   is clear, it conditionally calls several functions (read_bytes_if_enabled,
 *   dispatch_key_event, build_and_send_status_byte, check_and_update_byte_flag,
 *   conditional_copy_and_send_byte) based on param_1, followed by unconditional calls to
 *   read_bytes_if_enabled, dispatch_state_transition_000d314e,
 *   compute_two_derived_values_000d3d56, and update_scroll_position_state. Finally, it sets
 *   bit 0 of DAT_000000d1 and bit 7 of DAT_000000f6, and returns the result of
 *   compute_and_store_offset_delta.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_and_set_status_flags_000cb73c(int param_1)

{
  byte bVar2;
  uint32_t uVar1;
  
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_000000f6 = DAT_000000f6 & 0x7f;
  FUN_000e016a((int)(short)param_1);
  bVar2 = select_state_by_flags();
  DAT_0003ce00 = DAT_0003ce00 & 0xf8 | bVar2 & 7;
  if ((DAT_0003ce06 & 1) == 0) {
    if (param_1 != 1) {
      read_bytes_if_enabled(0x6a,&DAT_0003c12f,1);
      dispatch_key_event(0x78,&DAT_0003c12f);
      build_and_send_status_byte();
      check_and_update_byte_flag();
      conditional_copy_and_send_byte();
    }
    read_bytes_if_enabled(0x39,&DAT_0003c115,4);
    dispatch_state_transition_000d314e();
    compute_two_derived_values_000d3d56();
    update_scroll_position_state();
  }
  uVar1 = compute_and_store_offset_delta();
  DAT_000000d1 = DAT_000000d1 | 1;
  DAT_000000f6 = DAT_000000f6 | 0x80;
  return uVar1;
}
