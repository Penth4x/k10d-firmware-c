/* @k10d check_and_run_state_transitions_000f0174 @ 0x000f0174
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates specific bit flags in global state variables and conditionally invokes a
 *   series of transition handler functions.
 * summary:
 *   The function checks if bit 0 is set and bit 1 is clear in DAT_0003c066, and if bit 5 is
 *   clear in DAT_0003c395. If these conditions are met, it calls three base functions
 *   (call_subroutine_with_0x40, FUN_000d5fbe, call_subroutine_with_arg_0x42) and then
 *   performs additional conditional actions based on bits in DAT_0003c038, DAT_0003c02f,
 *   and DAT_0003c391. It clears bit 6 of DAT_0003c038 before calling FUN_000d60e0 if that
 *   bit was set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_run_state_transitions_000f0174(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_subroutine_with_0x40();
    FUN_000d5fbe();
    call_subroutine_with_arg_0x42();
    if ((DAT_0003c038 & 0x40) != 0) {
      DAT_0003c038 = DAT_0003c038 & 0xbf;
      FUN_000d60e0();
    }
    if ((DAT_0003c02f & 1) != 0) {
      FUN_000d5ff0();
    }
    if ((DAT_0003c391 & 2) != 0) {
      call_subroutine_with_arg_0x56();
      call_d5afc_with_0x57();
      call_d5afc_with_0x51();
    }
  }
  return;
}
