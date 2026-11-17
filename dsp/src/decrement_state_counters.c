/* @k10d decrement_state_counters @ 0x000c50d6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Conditionally decrements two global byte counters by 2 if they match specific high
 *   values.
 * summary:
 *   The function checks DAT_0003c492 and DAT_0003c493 against specific constants (0x06,
 *   0x0d, 0x16 and 0x0a). If a match is found, it subtracts 2 from the value (e.g., 0x06
 *   becomes 0x04). No other side effects or memory writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_state_counters(void)

{
  if (DAT_0003c492 == '\x06') {
    DAT_0003c492 = '\x04';
  }
  else if (DAT_0003c492 == '\r') {
    DAT_0003c492 = '\f';
  }
  else if (DAT_0003c492 == '\x16') {
    DAT_0003c492 = '\x0f';
  }
  if (DAT_0003c493 == '\n') {
    DAT_0003c493 = '\b';
  }
  return;
}
