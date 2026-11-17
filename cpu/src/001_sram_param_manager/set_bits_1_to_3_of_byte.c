/* @k10d set_bits_1_to_3_of_byte @ 0x100f1d7a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets bits 1-3 of a byte at a fixed offset in a global structure to the lower 3 bits of
 *   the input parameter.
 * summary:
 *   The function reads a byte from the global structure at _DAT_800482d4 + 0x29, masks out
 *   bits 1, 2, and 3 (using mask 0xf1), and sets them to the lower 3 bits of param_1. It
 *   then writes the result back to the same location. No other side effects or callees are
 *   involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bits_1_to_3_of_byte(byte param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x29) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x29) & 0xf1 | (param_1 & 7) << 1;
  return;
}
