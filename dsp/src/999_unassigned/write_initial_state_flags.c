/* @k10d write_initial_state_flags @ 0x000e9ca4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a fixed set of global variables to specific initial values and toggles two bits.
 * summary:
 *   The function writes the constant 0xf to DAT_00000064, 2 to DAT_00000067, 0xb2 to
 *   DAT_00000063, 0x13 to DAT_00000062, 0 to DAT_00000060, and 6 to DAT_00000420. It also
 *   clears bit 0 of DAT_00000400 and sets bit 0 of DAT_0000000a and DAT_0000040a. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_initial_state_flags(void)

{
  DAT_00000064 = 0xf;
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
