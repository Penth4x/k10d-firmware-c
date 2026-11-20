/* @k10d update_status_flags_and_counters_000cdcf4 @ 0x000cdcf4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates internal state flags and counters based on current status bits and calls helper
 *   functions.
 * summary:
 *   The function manipulates several global status bytes (DAT_0003ce07, DAT_0003ce02,
 *   DAT_0003ce04, DAT_0003ce08) using bitwise operations. It calls
 *   reset_state_and_dispatch, update_indexed_counter_state, and accumulate_signed_offsets
 *   unconditionally, and conditionally calls adjust_counter_by_flag based on specific flag
 *   combinations. It also updates counter-like values in DAT_0003cc30 and DAT_0003ce60
 *   under certain conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_and_counters_000cdcf4(void)

{
  ushort uVar1;
  uint16_t uVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  
  sVar3 = _DAT_0003ce60;
  uVar2 = _DAT_0003ce18;
  uVar1 = _DAT_0003cc30;
  DAT_0003ce07 = DAT_0003ce07 | 1;
  reset_state_and_dispatch();
  DAT_0003ce14 = (char)_DAT_0003ce18 - (char)uVar2;
  DAT_0003ce07 = DAT_0003ce07 & 0xfe;
  update_indexed_counter_state();
  accumulate_signed_offsets();
  cVar5 = '\x01';
  if ((DAT_0003cb80 & 1) == 0) {
    DAT_0003ce07 = DAT_0003ce07 & 0xf7;
    if ((((DAT_0003ce01 & 0x20) != 0) || ((DAT_0003ce62 & 8) != 0)) || ((DAT_0003ce02 & 8) != 0)) {
      cVar5 = '\x02';
    }
  }
  else {
    DAT_0003ce04 = DAT_0003ce04 & 0xf7;
    if ((_DAT_0003ce60 < 0) && ((DAT_0003c127 & 8) != 0)) {
      bVar4 = false;
      if ((DAT_0003cc6e != '\x11') && (DAT_0003cc6e != '\n')) {
        bVar4 = true;
      }
      if (((!bVar4) && ((DAT_0003c102 & 7) == 3)) &&
         ((((DAT_0003ce00 & 0x40) != 0 && ((DAT_0003ce02 & 2) != 0)) ||
          (((DAT_0003ce00 & 0x40) == 0 && ((DAT_0003f286 & 0x40) != 0)))))) {
        adjust_counter_by_flag();
      }
    }
    if (((DAT_0003ce07 & 8) != 0) && (uVar1 < _DAT_0003cc30)) {
      _DAT_0003cc30 = uVar1;
      _DAT_0003ce60 = sVar3;
    }
    if (_DAT_0003ce60 < 0) {
      cVar5 = '\x02';
    }
  }
  DAT_0003ce02 = DAT_0003ce02 & 0xf3 | cVar5 << 2;
  DAT_0003ce08 = DAT_0003ce08 & 0xbf;
  update_state_flag_bits();
  return;
}
