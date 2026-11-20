/* @k10d dispatch_mode_transition_000f6b70 @ 0x000f6b70
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a state flag and dispatches to one of several handler functions based on a mode
 *   index.
 * summary:
 *   The function first checks bits in DAT_0003c066; if bit 0 is clear or bit 4 is set, it
 *   clears bit 1 of DAT_0003c41d and returns 0. Otherwise, it switches on the value of
 *   DAT_0003c3ef (0-3) to call either clear_state_flags_and_set_bit or
 *   fill_four_bytes_with_pattern with specific arguments, followed by
 *   compare_four_byte_blocks and dispatch_mode_transition_000dfc72(1,0), returning 1. For
 *   other values, it clears bit 1 of DAT_0003c41d and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_transition_000f6b70(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c066 & 1) == 0) || ((DAT_0003c066 & 0x10) != 0)) {
    DAT_0003c41d = DAT_0003c41d & 0xfd;
  }
  else if (DAT_0003c3ef == '\0') {
    clear_state_flags_and_set_bit();
    DAT_0003c4bf = DAT_0003c4bf & 0xf7;
    compare_four_byte_blocks();
    dispatch_mode_transition_000dfc72(1,0);
    uVar1 = 1;
  }
  else if (DAT_0003c3ef == '\x01') {
    fill_four_bytes_with_pattern(0);
    compare_four_byte_blocks();
    dispatch_mode_transition_000dfc72(1,0);
    uVar1 = 1;
  }
  else if (DAT_0003c3ef == '\x02') {
    fill_four_bytes_with_pattern(1);
    compare_four_byte_blocks();
    dispatch_mode_transition_000dfc72(1,0);
    uVar1 = 1;
  }
  else if (DAT_0003c3ef == '\x03') {
    fill_four_bytes_with_pattern(2);
    compare_four_byte_blocks();
    dispatch_mode_transition_000dfc72(1,0);
    uVar1 = 1;
  }
  else {
    DAT_0003c41d = DAT_0003c41d & 0xfd;
  }
  return uVar1;
}
