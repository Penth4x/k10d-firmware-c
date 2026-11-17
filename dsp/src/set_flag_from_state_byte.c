/* @k10d set_flag_from_state_byte @ 0x000c2c86
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 0 or bit 1 of a flag byte based on the value of a state byte.
 * summary:
 *   Checks the byte at DAT_0003c113. If it equals 0x03, it sets bit 0 of DAT_0003c582. If
 *   it equals 0x18, it sets bit 1 of DAT_0003c582. No other actions are taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_state_byte(void)

{
  if (DAT_0003c113 == '\x03') {
    DAT_0003c582 = DAT_0003c582 | 1;
  }
  if (DAT_0003c113 == '\x18') {
    DAT_0003c582 = DAT_0003c582 | 2;
  }
  return;
}
