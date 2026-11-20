/* @k10d process_state_transition_000d1212 @ 0x000d1212
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a state machine based on flags in DAT_0003ce05 and DAT_0003ce01 to trigger
 *   specific subroutines.
 * summary:
 *   The function checks multiple bit flags in global variables to determine the current
 *   state. Depending on the flags, it calls various subroutines like
 *   update_state_flags_and_offset, FUN_000d184e, or FUN_000d19f0, and updates other global
 *   state variables. It returns a small integer (0, 1, 3, or 8) indicating the outcome or
 *   next state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t process_state_transition_000d1212(void)

{
  uint8_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = 8;
  _DAT_0003ce38 = 0;
  iVar5 = compute_state_index_value();
  if ((-1 < iVar5) && ((DAT_0003ce05 & 0x40) == 0)) {
    _DAT_0003ce1a = _DAT_0003ce1c;
    if ((DAT_0003ce05 & 2) == 0) {
      update_state_flags_and_offset(0xffff);
      FUN_000d184e();
    }
    if ((DAT_0003ce01 & 1) != 0) {
      while ((DAT_0003ce05 & 0x10) != 0) {
        process_state_transition_000f71a6();
        if ((DAT_0003ce01 & 1) == 0) {
          return 8;
        }
      }
      iVar5 = check_two_flag_bits_000ce7a6();
      if (((iVar5 != 0) || ((DAT_00000005 & 4) != 0)) ||
         (((DAT_0003ce06 & 0x20) == 0 &&
          ((((DAT_0003f282 & 8) != 0 || ((DAT_0003ce08 & 8) == 0)) || (DAT_0003ce2f != '\0')))))) {
        _DAT_0003ce24 = _DAT_0003ce30;
        FUN_000f7094();
        DAT_0003ce02 = DAT_0003ce02 & 0x7f;
        DAT_0003ce06 = DAT_0003ce06 | 2;
        iVar5 = poll_event_and_dispatch_000cbe84(1,0);
        return iVar5 == 0;
      }
      FUN_000cc5c6();
      FUN_000cc938();
      do {
      } while ((DAT_0003ce01 & 4) != 0);
      clear_bit1_of_dat_0003ce01();
      uVar2 = (uint)_DAT_0003ce18;
      do {
        uVar3 = (uint)_DAT_0003ce32;
        iVar5 = FUN_000d1c10(_DAT_0003ce30,-uVar2);
        uVar4 = (uint)_DAT_0003ce2c;
        iVar6 = FUN_000d1cb8(_DAT_0003ce30);
        if (-1 < (int)(iVar6 + ((uVar3 + iVar5) - uVar4))) break;
      } while ((uint)_DAT_0003ce18 + -uVar2 < 0x33);
      DAT_0003ce06 = DAT_0003ce06 | 0x40;
      if ((DAT_0003c447 == '\x01') && ((DAT_0003ce05 & 0x20) != 0)) {
        DAT_0003ce02 = DAT_0003ce02 | 0x80;
        _DAT_0003ce1a = _DAT_0003ce1a + _DAT_0003ce2c;
      }
      FUN_000d19f0();
      uVar1 = 3;
    }
  }
  return uVar1;
}
