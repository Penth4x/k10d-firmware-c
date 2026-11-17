/* @k10d set_flag_and_call_helper_000d014c @ 0x000d014c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 3 of a global flag word and then calls an adjacent helper function.
 * summary:
 *   The function ORs the value 8 into the global DAT_0003cf09, modifying bit 3 of that
 *   word. It then unconditionally calls clear_bit_and_dispatch_state. The role of
 *   DAT_0003cf09 and the behavior of clear_bit_and_dispatch_state are not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_and_call_helper_000d014c(void)

{
  uint32_t uVar1;
  
  DAT_0003cf09 = DAT_0003cf09 | 8;
  uVar1 = clear_bit_and_dispatch_state();
  return uVar1;
}
