/* @k10d toggle_ram_flag_bit5 @ 0x000e339c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears bit 5 of bRam00000000, calls empty_stub_000e33c4, then sets bit 5 again.
 * summary:
 *   The function masks out bit 5 (0x20) of the global bRam00000000, invokes the single
 *   callee empty_stub_000e33c4, and then restores bit 5 by OR-ing 0x20 back in. No other
 *   memory locations or registers are modified. The role of bRam00000000 and
 *   empty_stub_000e33c4 is not established from the given data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_ram_flag_bit5(void)

{
  bRam00000000 = bRam00000000 & 0xdf;
  empty_stub_000e33c4();
  bRam00000000 = bRam00000000 | 0x20;
  return;
}
