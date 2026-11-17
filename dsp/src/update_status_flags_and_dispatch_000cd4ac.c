/* @k10d update_status_flags_and_dispatch_000cd4ac @ 0x000cd4ac
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Updates several bit flags in DAT_0003ce07 and DAT_0003ce09 based on conditions in
 *   DAT_0003c1eb and DAT_0003ce00, then calls merge_mask_bits_and_notify.
 * summary:
 *   The function manipulates bits in DAT_0003ce07 (bit 6) and DAT_0003ce09 (bit 1)
 *   depending on the state of DAT_0003c1eb, DAT_0003ce00, DAT_0003ce06, and DAT_0003c028.
 *   It also copies _DAT_0003ce6e to _DAT_0003ce6a under certain conditions. It calls
 *   dispatch_mode_transition_000dfc72 with a computed bit test on DAT_0003ce07, and finally
 *   calls merge_mask_bits_and_notify with _DAT_0003ce6a and a flag (0 or 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_flags_and_dispatch_000cd4ac(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((DAT_0003c1eb & 2) == 0) {
    if (((DAT_0003ce06 & 0x10) == 0) || ((DAT_0003ce00 & 0x20) != 0)) {
      if ((DAT_0003ce09 & 2) != 0) {
        dispatch_mode_transition_000dfc72(2,-1 < (int)((uint)DAT_0003ce07 << 0x19));
      }
    }
    else {
      if ((DAT_0003c028 & 1) == 0) {
        DAT_0003c4bf = DAT_0003c4bf & 0xf7;
      }
      else {
        DAT_0003c4bf = DAT_0003c4bf | 8;
      }
      if ((DAT_0003c028 & 1) == 0) {
        DAT_0003ce07 = DAT_0003ce07 & 0xbf;
      }
      else {
        DAT_0003ce07 = DAT_0003ce07 | 0x40;
      }
      _DAT_0003ce6a = _DAT_0003ce6e;
    }
    DAT_0003ce09 = DAT_0003ce09 & 0xfd;
    if ((((DAT_0003ce00 & 0x40) != 0) && ((DAT_0003ce06 & 0x20) == 0)) &&
       ((DAT_0003c022 & 0x10) == 0)) {
      uVar1 = 1;
    }
  }
  else {
    dispatch_mode_transition_000dfc72(2,-1 < (int)((uint)DAT_0003ce07 << 0x19));
    if ((DAT_0003c1eb & 0x20) == 0) {
      DAT_0003ce07 = DAT_0003ce07 & 0xbf;
    }
    DAT_0003ce09 = DAT_0003ce09 & 0xfd;
    if (_DAT_0003ce6a == 0) {
      _DAT_0003ce6a = _DAT_0003ce6e;
    }
    _DAT_0003ce6c = _DAT_0003ce6a;
  }
  merge_mask_bits_and_notify(_DAT_0003ce6a,uVar1);
  return;
}
