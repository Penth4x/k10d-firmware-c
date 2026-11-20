/* @k10d set_flag_and_call_helper_000db7a8 @ 0x000db7a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 5 of DAT_0003c198 while clearing bits 2 and 6, then calls
 *   clear_flag_and_reset_state.
 * summary:
 *   The function performs a bitwise operation on the global DAT_0003c198, masking with 0x77
 *   and ORing with 0x20. It then invokes the single callee clear_flag_and_reset_state. The
 *   role of DAT_0003c198 is not determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_and_call_helper_000db7a8(void)

{
  uint32_t uVar1;
  
  DAT_0003c198 = DAT_0003c198 & 0x77 | 0x20;
  uVar1 = clear_flag_and_reset_state();
  return uVar1;
}
