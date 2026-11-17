/* @k10d poll_status_and_clear_flags @ 0x000d0e62
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status function in a loop while specific global flags are set, clearing them
 *   upon a zero return.
 * summary:
 *   The function checks two global flags (DAT_0003ce06 and DAT_0003ce62) before entering a
 *   loop. It repeatedly calls poll_event_and_dispatch_000cbe84 and
 *   update_state_flag_and_dispatch_000db35a, manipulating bits in DAT_000000d1 and
 *   DAT_000000f6. If update_state_flag_and_dispatch_000db35a returns 0, it calls
 *   FUN_000d0eea and clears bit 1 of DAT_0003ce62. The loop exits if the initial flags
 *   change or if poll_event_and_dispatch_000cbe84 returns non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t poll_status_and_clear_flags(uint32_t param_1)

{
  uint8_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (((DAT_0003ce06 & 1) == 0) && ((DAT_0003ce62 & 7) != 0)) {
    while (iVar2 = poll_event_and_dispatch_000cbe84(param_1,1), uVar1 = DAT_0003ce10, iVar2 == 0) {
      DAT_000000d1 = DAT_000000d1 & 0xfe;
      DAT_000000f6 = DAT_000000f6 & 0x7f;
      iVar2 = update_state_flag_and_dispatch_000db35a();
      if (iVar2 == 0) {
        FUN_000d0eea();
        DAT_0003ce62 = DAT_0003ce62 & 0xfd;
        DAT_0003ce10 = (uint8_t)param_1;
      }
      DAT_000000d1 = DAT_000000d1 | 1;
      DAT_000000f6 = DAT_000000f6 | 0x80;
      if (DAT_0003ce64 == '\0') {
        DAT_0003ce64 = DAT_0003c19a;
      }
      if ((DAT_0003ce06 & 1) != 0) {
        return 0;
      }
      if ((DAT_0003ce62 & 7) == 0) {
        return 0;
      }
    }
  }
  return uVar1;
}
