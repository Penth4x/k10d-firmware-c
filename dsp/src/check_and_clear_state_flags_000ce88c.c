/* @k10d check_and_clear_state_flags_000ce88c @ 0x000ce88c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates specific bit patterns in global state variables and conditionally clears
 *   flags while calling helper functions.
 * summary:
 *   The function checks if bit 1 of DAT_0003c066 is clear, bit 0 is set, and bit 5 of
 *   DAT_0003c395 is clear. If these conditions are met, it synchronizes _DAT_0003ce84 with
 *   _DAT_0003ce86 and calls FUN_000d5fe6 if they differ or if bit 1 of DAT_0003c391 is set.
 *   It then checks if bit 0 of DAT_0003c330 is set and bit 0 of DAT_0003c008 is clear; if
 *   so, it clears bit 0 of DAT_0003c330, clears bit 6 of DAT_0003c06e, and calls
 *   call_subroutine_with_0x40 and call_subroutine_with_0x78.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_and_clear_state_flags_000ce88c(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    if ((_DAT_0003ce84 != _DAT_0003ce86) || ((DAT_0003c391 & 2) != 0)) {
      _DAT_0003ce84 = _DAT_0003ce86;
      FUN_000d5fe6();
    }
    if (((DAT_0003c330 & 1) != 0) && ((DAT_0003c008 & 1) == 0)) {
      DAT_0003c330 = DAT_0003c330 & 0xfe;
      DAT_0003c06e = DAT_0003c06e & 0xbf;
      call_subroutine_with_0x40();
      call_subroutine_with_0x78();
    }
  }
  return;
}
