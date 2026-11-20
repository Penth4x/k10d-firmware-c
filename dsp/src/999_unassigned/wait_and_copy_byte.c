/* @k10d wait_and_copy_byte @ 0x000e9ce4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Waits for two flags in DAT_00000060 to be set, copying a byte from DAT_00000062 into
 *   DAT_0003c215 and DAT_0003c217.
 * summary:
 *   The function performs two sequential busy-wait loops, polling bits 3 and 4 of the
 *   global DAT_00000060. Between the waits, it constructs a 32-bit value in DAT_00000061 by
 *   combining DAT_0003c217 and DAT_00000062. It stores the byte from DAT_00000062 into
 *   DAT_0003c215 at the start and into DAT_0003c217 after the second wait. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_and_copy_byte(void)

{
  DAT_0003c215 = (char)_DAT_00000062;
  do {
  } while ((DAT_00000060 & 8) == 0);
  _DAT_00000061 = CONCAT13(DAT_0003c217,_DAT_00000062);
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  DAT_0003c217 = (char)_DAT_00000062;
  return;
}
