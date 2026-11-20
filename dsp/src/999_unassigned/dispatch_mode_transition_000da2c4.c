/* @k10d dispatch_mode_transition_000da2c4 @ 0x000da2c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks state flags and dispatches to mode-specific handlers based on a mode index.
 * summary:
 *   The function evaluates a combination of flags in DAT_0003c589 and DAT_0003c58b. If the
 *   conditions are met, it switches on DAT_0003c492 to call FUN_000dabe6 for specific mode
 *   values. For a subset of modes, it performs a sequence of operations involving
 *   set_three_byte_flags_000ecde4, update_status_flags_and_counters_000de274, and a polling
 *   loop on DAT_0000004f. It concludes by calling set_flag_bits_and_clear_counters
 *   unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_000da2c4(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((DAT_0003c589 & 1) != 0) && ((DAT_0003c58b & 2) != 0)) && ((DAT_0003c58b & 8) == 0)) {
    switch(DAT_0003c492) {
    case 4:
    case 5:
    case 6:
    case 0x10:
      FUN_000dabe6();
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x16:
      bVar1 = true;
      FUN_000dabe6();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x11);
        _DAT_0003c270 = _DAT_000000d8;
        set_three_byte_flags_000ecde4();
        update_status_flags_and_counters_000de274(_DAT_0003c270);
        do {
        } while ((DAT_0000004f & 4) == 0);
        DAT_0000004f = DAT_0000004f & 0xfb;
        update_status_flags_and_counters_000de274(1000);
        FUN_000dab0e();
        _DAT_0003c1e8 = 0;
        do {
          if ((DAT_0000004f & 4) != 0) {
            _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
            DAT_0000004f = DAT_0000004f & 0xfb;
            update_status_flags_and_counters_000de274(1000);
          }
        } while (_DAT_0003c1e8 < 10);
      }
      else {
        busy_wait_on_mode_flag(1000);
        FUN_000dab0e();
        FUN_000d5642(10);
      }
    }
  }
  if ((!bVar1) && ((DAT_0003c4de & 0x10) != 0)) {
    FUN_000dafe6();
  }
  set_flag_bits_and_clear_counters();
  return;
}
