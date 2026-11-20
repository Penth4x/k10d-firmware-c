/* @k10d update_status_flag_bits_000cb4c6 @ 0x000cb4c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates specific bits in DAT_0003c4d0 and DAT_0003c4db based on conditions from
 *   DAT_0003c393 and other globals.
 * summary:
 *   The function clears the lower two bits of DAT_0003c4d0. It then conditionally sets bit
 *   1 (value 2) of DAT_0003c4d0 based on combinations of DAT_0003c39b, DAT_0003c393, and
 *   _DAT_0003c398. It also conditionally sets bit 0 (value 1) of DAT_0003c4d0 and modifies
 *   bit 0 of DAT_0003c4db based on bits in DAT_0003c393, DAT_0003c395, DAT_0003c036, and
 *   DAT_0003c4d3. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flag_bits_000cb4c6(void)

{
  DAT_0003c4d0 = DAT_0003c4d0 & 0xfc;
  if (((DAT_0003c39b == '\0') && ((DAT_0003c393 & 0x20) != 0)) && (_DAT_0003c398 != 0)) {
    DAT_0003c4d0 = DAT_0003c4d0 | 2;
  }
  else if ((DAT_0003c393 & 8) != 0) {
    DAT_0003c4d0 = DAT_0003c4d0 | 2;
  }
  if (((DAT_0003c393 & 2) == 0) || ((DAT_0003c395 & 4) == 0)) {
    if (((DAT_0003c393 & 8) != 0) && ((DAT_0003c036 & 0x80) == 0)) {
      DAT_0003c4d0 = DAT_0003c4d0 | 1;
      DAT_0003c4db = DAT_0003c4db & 0xfe;
    }
  }
  else if (((DAT_0003c393 & 4) != 0) && ((DAT_0003c4d3 & 8) == 0)) {
    DAT_0003c4d0 = DAT_0003c4d0 | 1;
    DAT_0003c4db = DAT_0003c4db | 1;
  }
  return;
}
