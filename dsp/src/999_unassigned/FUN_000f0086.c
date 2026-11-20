/* @k10d FUN_000f0086 @ 0x000f0086
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f0086(uint param_1)

{
  if ((((DAT_0003c3a9 == '\0') && ((DAT_0003c396 & 1) == 0)) && (DAT_0003c447 != '\x05')) ||
     (((DAT_0003c3aa == '\0' && ((DAT_0003c396 & 1) == 0)) &&
      ((DAT_0003c447 == '\x05' && ((DAT_0003c022 & 0x40) != 0)))))) {
    if ((DAT_0003c447 != '\x02') || (param_1 < 0x10)) {
      param_1 = param_1 << 1;
    }
    write_two_bit_field_to_dat_0003c008(param_1 & 2);
  }
  return;
}
