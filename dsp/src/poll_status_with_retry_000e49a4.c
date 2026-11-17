/* @k10d poll_status_with_retry_000e49a4 @ 0x000e49a4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Polls a status flag via update_state_flag_and_dispatch_000db35a up to four times,
 *   clearing a local bit and calling check_and_run_gated_sequence on success.
 * summary:
 *   The function first checks two flag bits in DAT_0003c036 and DAT_0003c02f, calling
 *   check_state_and_dispatch if both are clear. It then calls
 *   update_state_flag_and_dispatch_000db35a; if non-zero, it writes to DAT_00000401 and
 *   DAT_00000501, calls call_d5678_with_0x14, and enters a retry loop (max 4 iterations)
 *   that re-polls update_state_flag_and_dispatch_000db35a and calls
 *   check_and_run_gated_sequence while certain bits in DAT_0003c022 and DAT_0003c330 are
 *   clear. It clears bit 7 of DAT_0000048c each iteration and resets DAT_00000001,
 *   DAT_00000401, and DAT_00000501 before returning 1 on success or 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_status_with_retry_000e49a4(void)

{
  int iVar1;
  short sVar2;
  uint32_t uVar3;
  
  sVar2 = 4;
  uVar3 = 0;
  if (((DAT_0003c036 & 1) == 0) && ((DAT_0003c02f & 1) == 0)) {
    check_state_and_dispatch();
  }
  iVar1 = update_state_flag_and_dispatch_000db35a();
  if (iVar1 != 0) {
    DAT_00000401 = (DAT_0003c034 | 0x70) ^ 0xff;
    DAT_00000501 = DAT_0003c034;
    call_d5678_with_0x14();
    do {
      sVar2 = sVar2 + -1;
      do {
        if ((DAT_0000048c & 0x80) != 0) goto LAB_000e4a44;
        iVar1 = update_state_flag_and_dispatch_000db35a();
        if (iVar1 == 0) {
          sVar2 = 0;
          goto LAB_000e4a44;
        }
        check_and_run_gated_sequence();
      } while (((((DAT_0003c022 & 0x40) == 0) && ((DAT_0003c330 & 1) == 0)) &&
               ((DAT_0003c330 & 2) == 0)) &&
              (((DAT_0003c330 & 4) == 0 && (iVar1 = test_and_clear_bit(), iVar1 == 0))));
      uVar3 = 1;
      sVar2 = 0;
LAB_000e4a44:
      DAT_0000048c = DAT_0000048c & 0x7f;
    } while (sVar2 != 0);
    DAT_00000001 = 0;
    DAT_00000401 = 0x8f;
    DAT_00000501 = 0;
  }
  return uVar3;
}
