/* @k10d set_flag_0x10_if_bit0_clear @ 0x000e89ae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bit 4 of DAT_0003c021 and clears bit 6 of DAT_0003c022 when bit 0 of DAT_0003c02f
 *   is clear, after conditionally calling two helpers.
 * summary:
 *   The function first checks bit 4 of DAT_0003c021; if clear, it checks bit 6 of
 *   DAT_0003c00f and calls call_subroutine_with_arg_9 and update_state_flags_and_dispatch
 *   if that bit is also clear. It then checks bit 0 of DAT_0003c02f; if clear, it zeroes
 *   DAT_0003c024, clears bit 6 of DAT_0003c022, and sets bit 4 of DAT_0003c021. The callees
 *   are unnamed, so their specific roles are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_0x10_if_bit0_clear(void)

{
  if ((DAT_0003c021 & 0x10) == 0) {
    if ((DAT_0003c00f & 0x40) == 0) {
      call_subroutine_with_arg_9();
      update_state_flags_and_dispatch();
    }
    if ((DAT_0003c02f & 1) == 0) {
      _DAT_0003c024 = 0;
      DAT_0003c022 = DAT_0003c022 & 0xbf;
      DAT_0003c021 = DAT_0003c021 | 0x10;
    }
  }
  return;
}
