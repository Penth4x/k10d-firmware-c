/* @k10d wait_and_set_status_flags_000d83ee @ 0x000d83ee
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status bit, calls an unknown function, and sets specific bits in two status
 *   bytes.
 * summary:
 *   The function first waits for bit 3 of DAT_00000004 to be clear. It then calls
 *   busy_wait_on_mode_flag with argument 0xe. It reads two bytes from DAT_00000079 and
 *   DAT_00000085, clears some related bytes (0x78, 0x84), sets others to 0x23 (0x7a, 0x86),
 *   and sets bit 1 in the two status bytes. Finally, it waits for bit 6 to be set in both
 *   status bytes and for bit 3 of DAT_00000004 to be set again.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_and_set_status_flags_000d83ee(void)

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
