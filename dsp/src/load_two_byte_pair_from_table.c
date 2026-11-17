/* @k10d load_two_byte_pair_from_table @ 0x000d49a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies a 16-bit value and a byte from a lookup table indexed by param_1 into two global
 *   variables.
 * summary:
 *   The function uses param_1 as an index into the table at 0x000fb348. It reads a 16-bit
 *   value from an offset derived from the table entry (entry*2 + 0x3f440) and stores it in
 *   _DAT_0003cd44. It also reads a byte from (entry + 0x3f458) and stores it in
 *   DAT_0003cd46. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint load_two_byte_pair_from_table(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)(&DAT_000fb348)[param_1];
  _DAT_0003cd44 = *(uint16_t *)(uVar1 * 2 + 0x3f440);
  DAT_0003cd46 = *(uint8_t *)(uVar1 + 0x3f458);
  return uVar1;
}
