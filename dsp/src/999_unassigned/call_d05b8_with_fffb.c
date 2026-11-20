/* @k10d call_d05b8_with_fffb @ 0x000d09f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls clear_bit3_and_halt with the constant argument 0xfffb.
 * summary:
 *   This function is a thin wrapper that invokes clear_bit3_and_halt with the immediate
 *   value 0xfffb and returns. No other operations, memory accesses, or state changes are
 *   visible in the pseudocode. The role of clear_bit3_and_halt is unknown, so the specific
 *   effect of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d05b8_with_fffb(void)

{
  clear_bit3_and_halt(0xfffb);
  return;
}
