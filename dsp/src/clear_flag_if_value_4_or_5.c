/* @k10d clear_flag_if_value_4_or_5 @ 0x000f3314
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets DAT_0003c440 and DAT_0003c441 to zero if DAT_0003c440 is 4 or 5.
 * summary:
 *   Checks the byte at DAT_0003c440; if it equals 0x04 or 0x05, it sets DAT_0003c440 to 0
 *   and DAT_0003c441 to 0. No other side effects or callees are present. The role of the
 *   underlying state is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_value_4_or_5(void)

{
  if ((DAT_0003c440 == '\x04') || (DAT_0003c440 == '\x05')) {
    DAT_0003c440 = '\0';
    DAT_0003c441 = 0;
  }
  return;
}
