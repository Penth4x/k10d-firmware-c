/* @k10d update_status_flags_000e5cc2 @ 0x000e5cc2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears and conditionally sets bits in a cluster of status/control bytes based on
 *   complex logical conditions.
 * summary:
 *   The function initializes DAT_0003c034 to 0 and clears specific bits in DAT_0003c022,
 *   DAT_0003c05d, DAT_0003c067, and DAT_0003c021. It then evaluates a series of bitwise
 *   conditions on various DAT_0003cxxx globals to set specific bits in these registers,
 *   including setting DAT_0003c034 to 0x4b or 0xb. Finally, it clears bit 3 of DAT_0003c021
 *   and calls update_status_flag_bit0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_000e5cc2(void)

{
  DAT_0003c034 = 0;
  DAT_0003c022 = DAT_0003c022 & 0xfb;
  DAT_0003c05d = DAT_0003c05d & 0xfe;
  DAT_0003c067 = DAT_0003c067 & 0x7f;
  DAT_0003c021 = DAT_0003c021 & 0xfd;
  if (((DAT_0003c030 & 4) == 0) && ((DAT_0003c02f & 1) == 0)) {
    if (((DAT_0003c02b & 2) == 0) && ((DAT_0003c020 & 0x10) != 0)) {
      DAT_0003c034 = 0x4b;
    }
    else {
      DAT_0003c034 = 0xb;
    }
    if ((((((DAT_0003c030 & 0xb) != 0xb) || ((DAT_0003c000 & 0xb6) != 0xb6)) ||
         ((DAT_0003c035 & 0x9f) != 0x9f)) ||
        (((DAT_0003c035 & 0x7f) >> 5 != (DAT_0003c039 & 0x7f) >> 5 ||
         ((int)((uint)DAT_0003c021 << 0x1a) < 0)))) ||
       (((DAT_0003c037 & 0x4b) != 0x4b ||
        (((DAT_0003c036 & 0x80) != 0x80 || ((DAT_0003c036 & 0x1e) != (DAT_0003c03a & 0x1e))))))) {
      DAT_0003c022 = DAT_0003c022 | 4;
    }
    if (DAT_0003c081 == '\x05') {
      DAT_0003c081 = '\0';
      DAT_0003c022 = DAT_0003c022 | 4;
    }
    if (((DAT_0003c022 & 4) != 0) || ((DAT_0003c000 & 1) == 0)) {
      DAT_0003c05d = DAT_0003c05d | 1;
    }
    if (((DAT_0003c035 & 0x80) == 0) || ((DAT_0003c000 & 0x20) == 0)) {
      DAT_0003c067 = DAT_0003c067 | 0x80;
    }
    if (((DAT_0003f504 & 0x10) == 0) &&
       ((((((DAT_0003c129 & 1) != 0 && ((DAT_0003c127 & 1) == 0)) && (DAT_0003c3b5 == '\0')) ||
         ((((DAT_0003c4d3 & 8) != 0 && ((DAT_0003c07f & 1) == 0)) && ((DAT_0003c393 & 2) != 0)))) ||
        (((((DAT_0003c02b & 0x20) != 0 && (((DAT_0003c393 & 2) != 0 || ((DAT_0003c393 & 4) != 0))))
          || ((DAT_0003c393 & 8) != 0)) || (((DAT_0003c4df & 1) != 0 && ((DAT_0003c393 & 2) != 0))))
        )))) {
      DAT_0003c021 = DAT_0003c021 | 2;
    }
  }
  DAT_0003c021 = DAT_0003c021 & 0xdf;
  update_status_flag_bit0();
  return;
}
