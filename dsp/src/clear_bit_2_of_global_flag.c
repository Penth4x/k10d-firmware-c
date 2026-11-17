/* @k10d clear_bit_2_of_global_flag @ 0x000f8266
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 2 (value 0x04) of the global variable at DAT_000000cf.
 * summary:
 *   The function performs a bitwise AND with 0xfb on the global variable DAT_000000cf,
 *   which clears bit 2 while preserving all other bits. It has no arguments, no return
 *   value, and no callees. The role of DAT_000000cf is not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_2_of_global_flag(void)

{
  DAT_000000cf = DAT_000000cf & 0xfb;
  return;
}
