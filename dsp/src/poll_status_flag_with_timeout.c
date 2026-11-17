/* @k10d poll_status_flag_with_timeout @ 0x000eff50
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Polls a status flag in a loop with a timeout, calling helper functions each iteration.
 * summary:
 *   Checks a mode byte and flag bit to determine if a polling sequence should run. If
 *   active, it sets a local flag, initializes several global state variables, and enters a
 *   loop that decrements a counter (0x10 or 0x18 iterations). Each iteration calls
 *   FUN_000f0086 and dispatch_on_flag_bits_000f00ec, then checks FUN_000f002a. If that
 *   returns non-zero, it calls update_camera_state_flags and exits with success. Otherwise,
 *   it waits for a bit in DAT_000000ed to be set, with a timeout mechanism involving
 *   update_status_flags_and_counters_000de274. Finally, it calls cleanup functions and
 *   clears the local flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_status_flag_with_timeout(void)

{
  int iVar1;
  short sVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((DAT_0003c447 == '\x03') || ((DAT_0003c447 == '\x05' && ((DAT_0003c022 & 0x40) != 0)))) {
    DAT_0003c023 = DAT_0003c023 | 1;
    clear_bit_5_of_0x3c021_000e3aac();
    DAT_00000401 = DAT_00000401 & 0xfb;
    sVar2 = 0x10;
    if ((DAT_0003c447 == '\x05') && ((DAT_0003c022 & 0x40) != 0)) {
      sVar2 = 0x18;
    }
    DAT_000000d8 = 0;
    DAT_000000ea = 0x12;
    DAT_000000ec = 1;
    DAT_000000db = 0xb;
    while (sVar2 != 0) {
      sVar2 = sVar2 + -1;
      FUN_000f0086(sVar2);
      dispatch_on_flag_bits_000f00ec(sVar2);
      iVar1 = FUN_000f002a();
      if (iVar1 != 0) {
        update_camera_state_flags();
        uVar3 = 1;
        break;
      }
      while ((DAT_000000ed & 0x40) == 0) {
        if ((((DAT_0003f3e1 & 1) == 0) && ((DAT_0003c396 & 0x10) == 0)) && ((DAT_0000004f & 4) != 0)
           ) {
          DAT_0000004f = DAT_0000004f & 0xfb;
          update_status_flags_and_counters_000de274(1000);
        }
      }
      DAT_000000ed = DAT_000000ed & 0xbf;
    }
    check_flag_and_call_sub();
    update_bit7_from_dat_0003c00f();
    DAT_0003c023 = DAT_0003c023 & 0xfe;
  }
  return uVar3;
}
