/* @k10d toggle_gpio_pin_4 @ 0x000df4e8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Sets a control byte and bit, waits for a status bit to toggle, then clears the bit and
 *   resets a counter.
 * summary:
 *   The function writes 4 to DAT_0003f362 and 0xe0 to DAT_0003f363, then sets three values
 *   to 0x180. It calls set_bit_1_and_5_in_three_flags and dispatch_three_subcalls with
 *   negative values, then FUN_000d5642(5). It polls DAT_00000005 until bit 2 (value 4) is
 *   set, then waits until it is cleared. Finally, it clears bit 7 of DAT_0000000a and calls
 *   dispatch_three_subcalls(0,0,0). The pattern suggests a hardware handshake or pin toggle
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_gpio_pin_4(void)

{
  DAT_0003f362 = 4;
  DAT_0003f363 = 0xe0;
  _DAT_0003c81a = 0x180;
  _DAT_0003c81c = 0x180;
  _DAT_0003c81e = 0x180;
  set_bit_1_and_5_in_three_flags();
  dispatch_three_subcalls((int)-_DAT_0003c81a,(int)-_DAT_0003c81c,(int)-_DAT_0003c81e);
  FUN_000d5642(5);
  do {
  } while ((DAT_00000005 & 4) == 0);
  do {
  } while ((DAT_00000005 & 4) != 0);
  DAT_0000000a = DAT_0000000a & 0x7f;
  dispatch_three_subcalls(0,0,0);
  return;
}
