/* @k10d update_status_flags_and_dispatch_000ceeac @ 0x000ceeac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates several global flag bytes based on input conditions and calls helper functions
 *   to handle specific states.
 * summary:
 *   The function manipulates bits in global variables DAT_0003ce09, DAT_0003ce01,
 *   DAT_0003ce07, and DAT_0003ce05. It calls FUN_000d0cb6 unconditionally. Depending on the
 *   state of DAT_0003cf03 and DAT_0003c4dd, it calls clear_flag_and_call_handler_000ce7bc
 *   and potentially FUN_000cd21e, check_and_set_state_flag_000d0cfe, or FUN_000d04ba. It
 *   returns a small integer code (0xe, 0x10, 0x11, or the result of FUN_000cd21e).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t update_status_flags_and_dispatch_000ceeac(void)

{
  uint32_t uVar1;
  
  uVar1 = 0xe;
  if ((DAT_0003c036 & 1) == 0) {
    DAT_0003ce09 = DAT_0003ce09 | 4;
  }
  else if ((DAT_0003ce09 & 4) != 0) {
    DAT_0003ce09 = DAT_0003ce09 & 0xfb;
  }
  if ((DAT_0003f287 & 0x80) != 0) {
    DAT_0003ce09 = DAT_0003ce09 | 0x80;
  }
  DAT_0003ce01 = DAT_0003ce01 & 0xdf;
  DAT_0003ce07 = DAT_0003ce07 & 0xfb;
  DAT_0003ce05 = DAT_0003ce05 & 0xbf;
  FUN_000d0cb6();
  _DAT_0003cfc8 = 0;
  if (((DAT_0003cf03 & 1) == 0) && ((DAT_0003c4dd & 2) == 0)) {
    clear_flag_and_call_handler_000ce7bc();
    uVar1 = 0x10;
    _DAT_0003cf2a = _DAT_0003f2a8;
    if ((DAT_0003ce08 & 0x20) != 0) {
      _DAT_0003cf2a = _DAT_0003f2a8 >> 1;
    }
    if ((DAT_0003ce01 & 1) == 0) {
      if ((((DAT_0003ce01 & 0x80) == 0) || ((DAT_0003ce01 & 0x40) == 0)) &&
         ((DAT_0003f2d8 & 0x80) == 0)) {
        if ((DAT_0003f284 & 4) != 0) {
          uVar1 = FUN_000cd21e();
        }
      }
      else {
        DAT_0003ce05 = DAT_0003ce05 | 0x40;
        if ((DAT_0003ce09 & 1) == 0) {
          uVar1 = check_and_set_state_flag_000d0cfe();
        }
        else {
          FUN_000d04ba(0);
          FUN_000d04ba(1);
          DAT_0003ce17 = DAT_0003f48d;
          DAT_0003ce08 = DAT_0003ce08 | 2;
          uVar1 = 0x11;
        }
      }
    }
    else {
      _DAT_0003cf2a = (ushort)DAT_0003f488;
    }
  }
  return uVar1;
}
