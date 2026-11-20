/* @k10d wait_for_flag_and_return_state @ 0x000e19d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a control byte, waits for specific bits in DAT_00000060 and DAT_00000057, then
 *   returns DAT_00000061.
 * summary:
 *   The function initializes DAT_00000062 to 0x13 and calls wait_if_flag_is_two. It then
 *   enters a busy-wait loop until bit 3 of DAT_00000060 is set, clears DAT_00000061, and
 *   calls set_two_byte_state_pair_000d5828. It waits again until bit 4 of DAT_00000060 or
 *   bit 2 of DAT_00000057 is set, sets DAT_0003c122 to 3, updates DAT_00000062 to 0x10, and
 *   returns the value of DAT_00000061.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_for_flag_and_return_state(void)

{
  DAT_00000062 = 0x13;
  wait_if_flag_is_two();
  DAT_0003c215 = DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  DAT_00000061 = 0;
  set_two_byte_state_pair_000d5828();
  do {
    if ((DAT_00000060 & 0x10) != 0) goto LAB_000e1a22;
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 3;
LAB_000e1a22:
  wait_if_flag_is_two();
  DAT_00000062 = 0x10;
  return DAT_00000061;
}
