/* @k10d compute_shifted_value @ 0x000c931e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes a value by left-shifting DAT_0003c46b by 4 bits and conditionally ORing in the
 *   lower nibble of DAT_0003c45d.
 * summary:
 *   The function reads DAT_0003c46b, shifts it left by 4 bits, and stores the result in
 *   DAT_0003c378. If bit 3 of DAT_0003c4d3 is set, it ORs the lower 4 bits of DAT_0003c45d
 *   into the result. No MMIO operations or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_shifted_value(void)

{
  DAT_0003c378 = DAT_0003c46b << 4;
  if ((DAT_0003c4d3 & 8) != 0) {
    DAT_0003c378 = DAT_0003c378 | DAT_0003c45d & 0xf;
  }
  return;
}
