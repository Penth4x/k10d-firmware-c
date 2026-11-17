/* @k10d clear_flag_if_conditions_met @ 0x000c716c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears specific bits in DAT_0003c4d1 based on a complex set of conditions involving
 *   multiple DAT globals.
 * summary:
 *   The function evaluates a large boolean expression involving several DAT_0003cxxx
 *   globals. If the condition is true, it clears bits 0, 1, and 7 of DAT_0003c4d1 by ANDing
 *   with 0x83. It also clears these bits if bit 0 of DAT_0003c022 is not set. No callees
 *   are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flag_if_conditions_met(void)

{
  if ((((((DAT_0003c440 != '\x04') && (DAT_0003c440 != '\x05')) || (DAT_0003c441 != '\0')) &&
       ((DAT_0003c440 != '\x04' || (DAT_0003c441 != '\x05')))) &&
      ((DAT_0003c440 != '\x05' || (DAT_0003c441 != '\x04')))) &&
     ((((DAT_0003c441 != DAT_0003c440 ||
        ((((DAT_0003c440 == '\0' && (DAT_0003c445 != DAT_0003c444)) ||
          ((DAT_0003c440 == '\x11' ||
           (((DAT_0003c440 == '\x01' && ((DAT_0003c410 & 0x20) != 0)) ||
            (DAT_0003c472 != DAT_0003c471)))))) ||
         ((_DAT_0003c49c != _DAT_0003c126 || ((DAT_0003c4df & 8) != 0)))))) ||
       ((DAT_0003c4de & 1) != 0)) ||
      ((((DAT_0003c000 & 0x10) == 0 || ((DAT_0003c035 & 0x80) == 0)) ||
       (((DAT_0003c000 & 0x20) == 0 || ((DAT_0003c410 & 0x10) != 0)))))))) {
    DAT_0003c4d1 = DAT_0003c4d1 & 0x83;
  }
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c4d1 = DAT_0003c4d1 & 0x83;
  }
  return;
}
