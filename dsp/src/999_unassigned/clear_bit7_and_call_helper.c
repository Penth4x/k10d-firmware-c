/* @k10d clear_bit7_and_call_helper @ 0x000db7d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 7 of DAT_0003c198 and then calls check_flag_and_call_helper_000db7e6.
 * summary:
 *   The function performs a bitwise AND with 0x7f on the global DAT_0003c198, effectively
 *   clearing its most significant bit (bit 7). It then unconditionally calls the adjacent
 *   function check_flag_and_call_helper_000db7e6. The role of DAT_0003c198 and
 *   check_flag_and_call_helper_000db7e6 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_bit7_and_call_helper(void)

{
  uint32_t uVar1;
  
  DAT_0003c198 = DAT_0003c198 & 0x7f;
  uVar1 = check_flag_and_call_helper_000db7e6();
  return uVar1;
}
