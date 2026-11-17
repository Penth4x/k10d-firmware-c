/* @k10d clear_state_on_control_char @ 0x000c515e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets a state byte and clears specific bits in two other bytes if the state byte holds
 *   a control character.
 * summary:
 *   Checks if DAT_0003c493 is 0x08, 0x09, or 0x0a. If so, sets DAT_0003c493 to 0xff, masks
 *   DAT_0003c588 with 0x9f, and masks DAT_0003c181 with 0x3f. Finally, sets DAT_0003c492 to
 *   4. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_state_on_control_char(void)

{
  if (DAT_0003c493 == '\b') {
    DAT_0003c493 = -1;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
  }
  else if (DAT_0003c493 == '\t') {
    DAT_0003c493 = -1;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
  }
  else if (DAT_0003c493 == '\n') {
    DAT_0003c493 = -1;
    DAT_0003c588 = DAT_0003c588 & 0x9f;
    DAT_0003c181 = DAT_0003c181 & 0x3f;
  }
  DAT_0003c492 = 4;
  return;
}
