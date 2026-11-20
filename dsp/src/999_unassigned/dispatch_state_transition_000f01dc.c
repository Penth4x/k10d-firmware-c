/* @k10d dispatch_state_transition_000f01dc @ 0x000f01dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Stores a parameter in a global and conditionally invokes a sequence of handler
 *   functions based on flag bits in control words.
 * summary:
 *   The function checks specific bit patterns in DAT_0003c066 and DAT_0003c395. If the
 *   conditions are met, it stores param_1 into DAT_0003c085 and calls a series of functions
 *   (call_subroutine_with_0x40 through call_d5afc_with_0x53). It then conditionally clears
 *   bit 6 of DAT_0003c038 and calls FUN_000d60e0, or calls FUN_000d5ff0 if bit 0 of
 *   DAT_0003c02f is set. Finally, it clears DAT_0003c085 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000f01dc(uint8_t param_1)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    DAT_0003c085 = param_1;
    call_subroutine_with_0x40();
    FUN_000d5fbe();
    call_subroutine_with_arg_0x42();
    call_d5afc_with_0x43();
    call_subroutine_with_0x46();
    call_d5afc_with_0x47();
    call_d5afc_with_0x53();
    if ((DAT_0003c038 & 0x40) != 0) {
      DAT_0003c038 = DAT_0003c038 & 0xbf;
      FUN_000d60e0();
    }
    if ((DAT_0003c02f & 1) != 0) {
      FUN_000d5ff0();
    }
    if ((DAT_0003c391 & 2) != 0) {
      call_d5afc_with_0x4d();
      call_d5afc_with_0x4f();
      call_d5afc_with_0x54();
      call_subroutine_with_arg_0x56();
      call_d5afc_with_0x57();
      call_d5afc_with_0x51();
    }
  }
  DAT_0003c085 = 0;
  return;
}
