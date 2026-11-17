/* @k10d update_status_flags_and_dispatch_000e70d2 @ 0x000e70d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates bit flags in DAT_0003c07f and DAT_0003c022 based on state variables and
 *   conditionally calls FUN_000cdfe8.
 * summary:
 *   The function manipulates specific bits in global variables DAT_0003c07f, DAT_0003c07e,
 *   DAT_0003f55e, and DAT_0003c022. It checks conditions involving DAT_0003c447,
 *   DAT_0003c44a, DAT_0003c4d0, and a comparison between DAT_0003c041 and DAT_0003c455. If
 *   specific conditions are met, it calls FUN_000cdfe8 and clears bit 4 of DAT_0003c022.
 *   The function returns 0 or 1 depending on the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_status_flags_and_dispatch_000e70d2(void)

{
  DAT_0003c07f = DAT_0003c07f & 0xef;
  if ((DAT_00000001 & 2) == 0) {
    if (((DAT_0003c447 == '\x01') || ((DAT_0003c44a == '\x01' && (DAT_0003c041 < DAT_0003c455)))) ||
       (((DAT_0003c4d0 & 0x20) != 0 && (DAT_0003c041 < DAT_0003c455)))) {
      DAT_0003c07f = DAT_0003c07f | 0x10;
    }
    else {
      DAT_0003c07e = DAT_0003c07e & 0xbf;
      DAT_0003f55e = DAT_0003f55e & 0xf7;
    }
  }
  else {
    DAT_0003c07e = DAT_0003c07e & 0xbf;
  }
  if ((DAT_0003c022 & 0x10) == 0) {
    DAT_0003c022 = DAT_0003c022 & 0xfd;
    return 0;
  }
  if ((DAT_00000001 & 2) != 0) {
    if (DAT_0003c455 <= DAT_0003c041) {
      DAT_0003c041 = 0;
    }
    FUN_000cdfe8();
    DAT_0003c022 = DAT_0003c022 & 0xef;
    return 0;
  }
  if (DAT_0003c447 != '\x01') {
    if ((DAT_0003c44a == '\x01') && (DAT_0003c041 < DAT_0003c455)) goto LAB_000e7186;
    if (((DAT_0003c4d0 & 0x20) == 0) || (DAT_0003c455 <= DAT_0003c041)) {
      return 1;
    }
  }
  if (DAT_0003c455 <= DAT_0003c041) {
    DAT_0003c041 = 0;
  }
LAB_000e7186:
  FUN_000cdfe8();
  DAT_0003c022 = DAT_0003c022 & 0xef;
  return 0;
}
