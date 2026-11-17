/* @k10d update_state_flag_and_dispatch_000db35a @ 0x000db35a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a state byte based on multiple flag conditions and calls one of three handler
 *   functions.
 * summary:
 *   The function reads several global flag bytes (DAT_0003c036, DAT_0003c02f, DAT_0003c123,
 *   DAT_0003c395) and a state byte (DAT_0003c198). It modifies DAT_0003c193 by setting bit
 *   5 (0x20) under certain conditions. Depending on the combination of flags, it calls
 *   FUN_000db3cc, check_flag_and_call_helper_000db7e6, or FUN_000db802. It returns the
 *   value of bit 7 of DAT_0003c193.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte update_state_flag_and_dispatch_000db35a(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_0003c198;
  if ((DAT_0003c036 & 1) == 0) {
    bVar1 = DAT_0003c193 | 0x20;
    if ((((DAT_0003c02f & 1) == 0) && ((DAT_0003c123 & 0x80) == 0)) && ((DAT_0003c395 & 0x10) == 0))
    {
      if ((DAT_0003c198 & 0x40) == 0) {
        DAT_0003c198 = 0x40;
        DAT_0003c193 = bVar1;
        FUN_000db3cc();
        bVar2 = DAT_0003c198;
      }
      else if ((DAT_0003c193 & 0x80) == 0) {
        DAT_0003c193 = bVar1;
        if (((DAT_0003c198 & 0x20) != 0) &&
           (bVar2 = DAT_0003c198 & 0xdf, (DAT_0003c198 & 0x10) == 0)) {
          DAT_0003c198 = DAT_0003c198 & 0xd0;
          FUN_000db3cc();
          bVar2 = DAT_0003c198;
        }
      }
      else {
        DAT_0003c193 = bVar1;
        FUN_000db3cc();
        bVar2 = DAT_0003c198;
      }
    }
    else {
      DAT_0003c193 = bVar1;
      check_flag_and_call_helper_000db7e6();
      bVar2 = DAT_0003c198;
    }
  }
  else if ((DAT_0003c193 & 0x20) != 0) {
    FUN_000db802();
    bVar2 = DAT_0003c198;
  }
  DAT_0003c198 = bVar2;
  return DAT_0003c193 >> 7;
}
