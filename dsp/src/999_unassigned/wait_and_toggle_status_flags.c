/* @k10d wait_and_toggle_status_flags @ 0x000d838e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status bit, calls an unknown function, and sets/clears several byte flags while
 *   waiting for specific bits to change.
 * summary:
 *   The function first spins until bit 3 of DAT_00000004 is clear. It then calls
 *   busy_wait_on_mode_flag with argument 0xe. It reads two bytes (DAT_00000079 and
 *   DAT_00000085), clears DAT_00000078 and DAT_00000084, sets DAT_0000007a and DAT_00000086
 *   to 0x23, and sets bit 1 in both DAT_00000079 and DAT_00000085. It then waits for bit 6
 *   to be set in both saved bytes, and finally waits for bit 3 of DAT_00000004 to be set
 *   again. The role of the DAT globals and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_and_toggle_status_flags(void)

{
  byte bVar1;
  byte bVar2;
  
  do {
  } while ((DAT_00000004 & 8) == 0);
  busy_wait_on_mode_flag(0xe);
  bVar2 = DAT_00000085;
  bVar1 = DAT_00000079;
  DAT_00000078 = 0;
  DAT_0000007a = 0x23;
  DAT_00000084 = 0;
  DAT_00000086 = 0x23;
  DAT_00000079 = DAT_00000079 | 2;
  DAT_00000085 = DAT_00000085 | 2;
  do {
  } while ((bVar1 & 0x40) == 0);
  do {
  } while ((bVar2 & 0x40) == 0);
  do {
  } while ((DAT_00000004 & 8) != 0);
  return;
}
