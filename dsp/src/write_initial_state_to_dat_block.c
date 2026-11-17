/* @k10d write_initial_state_to_dat_block @ 0x000dad1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a fixed set of constant and bit-manipulated values to a cluster of DAT_0000xxxx
 *   globals.
 * summary:
 *   The function performs a series of direct stores to low-address DAT globals. It sets
 *   specific constants (0x7f, 2, 0xb2, 0x13, 0, 6) and performs bitwise operations
 *   (clearing bit 0 of DAT_00000400, setting bit 0 of DAT_0000000a and DAT_0000040a). No
 *   memory-mapped I/O addresses from the brief are touched, and no callees are invoked. The
 *   role of these specific DAT globals is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_initial_state_to_dat_block(void)

{
  DAT_00000064 = 0x7f;
  DAT_00000067 = 2;
  DAT_00000400 = DAT_00000400 & 0xfe;
  DAT_0000000a = DAT_0000000a | 1;
  DAT_0000040a = DAT_0000040a | 1;
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x13;
  DAT_00000060 = 0;
  DAT_00000420 = 6;
  return;
}
