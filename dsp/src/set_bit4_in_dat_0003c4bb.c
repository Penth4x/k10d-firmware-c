/* @k10d set_bit4_in_dat_0003c4bb @ 0x000f63da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 4 (0x10) of the global variable DAT_0003c4bb.
 * summary:
 *   The function performs a single read-modify-write operation on the global variable
 *   DAT_0003c4bb, ORing it with the constant 0x10 to set bit 4. No other registers, memory
 *   locations, or functions are touched. The role of DAT_0003c4bb is not determinable from
 *   the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit4_in_dat_0003c4bb(void)

{
  DAT_0003c4bb = DAT_0003c4bb | 0x10;
  return;
}
