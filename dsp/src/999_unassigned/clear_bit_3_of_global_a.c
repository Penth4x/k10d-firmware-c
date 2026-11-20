/* @k10d clear_bit_3_of_global_a @ 0x000ed8ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 3 of the global variable at address 0x0000000a.
 * summary:
 *   The function performs a bitwise AND operation on the global variable DAT_0000000a with
 *   the mask 0xdf (0b11011111). This operation specifically clears bit 3 (value 0x08) while
 *   leaving all other bits unchanged. No other side effects or memory accesses are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_3_of_global_a(void)

{
  DAT_0000000a = DAT_0000000a & 0xdf;
  return;
}
