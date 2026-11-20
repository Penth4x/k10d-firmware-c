/* @k10d poll_four_word_sequence @ 0x000cbf3e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Writes four 16-bit values to an unknown global and polls a status flag in a nested
 *   loop.
 * summary:
 *   The function checks bit 1 of DAT_0003c391 and bit 3 of DAT_0003c33b to gate its
 *   behavior. If active, it sets bit 1 of DAT_0003ce80 and iterates over four 16-bit
 *   constants (0xb80, 0xf0, 0x2880, 0x72ee), writing each to _DAT_0003c404 and calling
 *   dispatch_pending_event_flags_000d71a6, or calling call_subroutine_with_mode_delay up to
 *   50 times per word if the flag clears. It then toggles bit 1 of DAT_0003ce80 around a
 *   final call to call_subroutine_with_mode_delay. The specific hardware or protocol role
 *   is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_four_word_sequence(void)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t local_28 [4];
  
  if ((DAT_0003c391 & 2) == 0) {
    DAT_0003ce80 = DAT_0003ce80 & 0xfd;
  }
  else {
    if ((DAT_0003c33b & 8) != 0) {
      DAT_0003ce80 = DAT_0003ce80 | 2;
      local_28[0] = 0xb80;
      local_28[1] = 0xf0;
      local_28[2] = 0x2880;
      local_28[3] = 0x72ee;
      iVar2 = 0;
      do {
        iVar1 = 0;
        do {
          if ((DAT_0003c33b & 8) != 0) {
            _DAT_0003c404 = (uint16_t)*(uint32_t *)((int)local_28 + iVar2);
            dispatch_pending_event_flags_000d71a6();
            break;
          }
          call_subroutine_with_mode_delay();
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x32);
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x10);
    }
    if ((DAT_0003ce80 & 2) != 0) {
      DAT_0003ce80 = DAT_0003ce80 & 0xfd;
      call_subroutine_with_mode_delay();
      DAT_0003ce80 = DAT_0003ce80 | 2;
    }
  }
  return;
}
