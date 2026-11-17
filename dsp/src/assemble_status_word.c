/* @k10d assemble_status_word @ 0x000c20ba
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Constructs a multi-byte status word by OR-ing flags from various DAT globals into
 *   DAT_0003c180.
 * summary:
 *   The function reads several byte-wide flags from DAT_0003c440, DAT_0003c181, and
 *   DAT_0003c58b to populate bits in DAT_0003c180. It also updates DAT_0003c181 with a
 *   shifted value from DAT_0003c483 and calls map_raw_value_to_byte_level to set
 *   DAT_0003c182. Finally, it conditionally calls compute_clamped_offset_000c2238 or
 *   compute_clamped_offset_000c21d4 to set DAT_0003c183 based on the value of DAT_0003c492
 *   and other flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void assemble_status_word(void)

{
  DAT_0003c180 = DAT_0003c180 | (&DAT_000f9ac8)[DAT_0003c440];
  if (((DAT_0003c181 & 0x80) != 0) || ((DAT_0003c181 & 0x40) != 0)) {
    DAT_0003c180 = DAT_0003c180 | 6;
  }
  if ((DAT_0003c58b & 2) != 0) {
    DAT_0003c180 = DAT_0003c180 | 1;
  }
  DAT_0003c181 = (byte)(DAT_0003c483 + 8 >> 1) | DAT_0003c181;
  DAT_0003c182 = map_raw_value_to_byte_level();
  if ((((DAT_0003c127 & 2) == 0) && ((DAT_0003c127 & 1) == 0)) && ((DAT_0003c129 & 1) == 0)) {
    if (((DAT_0003c492 == '\x06') || (DAT_0003c492 == '\r')) || (DAT_0003c492 == '\x16')) {
      DAT_0003c183 = compute_clamped_offset_000c2238(__frv_reg_unset(4));
    }
    else {
      DAT_0003c183 = compute_clamped_offset_000c21d4(DAT_0003c565,0);
    }
  }
  return;
}
