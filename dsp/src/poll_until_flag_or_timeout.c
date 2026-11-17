/* @k10d poll_until_flag_or_timeout @ 0x000dba96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status flag via a helper function up to 8000 times, returning success if the
 *   flag is set.
 * summary:
 *   Checks a bit in DAT_0003c036; if clear, initializes DAT_0003c198 and loops calling
 *   update_state_flag_and_dispatch_000db35a and FUN_000d5642(1) up to 8000 times. Exits
 *   early if bit 2 of DAT_0003c198 is set, returning 0 (failure) in that case, or 1
 *   (success) if the loop completes. Also clears bits 0-1 of DAT_0000000b and sets specific
 *   values in DAT_0000013a-c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_flag_or_timeout(void)

{
  ushort uVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  uVar1 = 0;
  if ((DAT_0003c036 & 1) == 0) {
    DAT_0003c198 = 0;
    do {
      update_state_flag_and_dispatch_000db35a();
      if ((DAT_0003c198 & 4) != 0) {
        uVar2 = 0;
        break;
      }
      FUN_000d5642(1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8000);
    DAT_0000000b = DAT_0000000b & 0xfc;
    DAT_0000013e = 0;
    DAT_0000013a = 0xc0;
    DAT_0000013c = 0x2f;
  }
  return uVar2;
}
