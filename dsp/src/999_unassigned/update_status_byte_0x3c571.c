/* @k10d update_status_byte_0x3c571 @ 0x000c3e92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets DAT_0x3c571 to 0x80 or 0x78 based on bit tests of DAT_0x3c492, DAT_0x3c181,
 *   DAT_0x3c588, and DAT_0x3c589.
 * summary:
 *   The function initializes DAT_0x3c571 to 0x80. It then evaluates a series of conditional
 *   branches checking specific bits in DAT_0x3c492, DAT_0x3c181, DAT_0x3c588, and
 *   DAT_0x3c589. If certain combinations of bits are set or clear, it overwrites
 *   DAT_0x3c571 with 0x78. No other side effects or memory writes are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_0x3c571(void)

{
  DAT_0003c571 = 0x80;
  if ((DAT_0003c492 == '\x05') || ((DAT_0003c492 == '\x04' && ((DAT_0003c181 & 0x80) != 0)))) {
    if (((DAT_0003c181 & 0x40) != 0) || ((DAT_0003c589 & 0x40) != 0)) {
      DAT_0003c571 = 0x78;
    }
  }
  else if (((DAT_0003c181 & 0x80) == 0) &&
          (((DAT_0003c588 & 0x20) == 0 && ((DAT_0003c588 & 0x40) == 0)))) {
    if (((DAT_0003c181 & 0x40) != 0) || ((DAT_0003c589 & 0x40) != 0)) {
      DAT_0003c571 = 0x78;
    }
  }
  else {
    DAT_0003c571 = 0x78;
  }
  return;
}
