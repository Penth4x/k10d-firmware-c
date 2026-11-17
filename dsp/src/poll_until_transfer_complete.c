/* @k10d poll_until_transfer_complete @ 0x000e8bbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Repeatedly calls a helper until it returns non-zero, incrementing two counters and
 *   clearing a status bit between attempts.
 * summary:
 *   The function checks if the value pointed to by param_2 is less than or equal to
 *   param_4. If so, it enters a loop calling decrement_counter_on_mismatch with param_1 and
 *   a local variable set to 5. While the callee returns 0, it increments *param_2 and
 *   *param_3, waits for bit 2 of DAT_00000057 to be set, then clears that bit. The loop
 *   exits when decrement_counter_on_mismatch returns non-zero or when *param_2 exceeds
 *   param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_until_transfer_complete(short param_1,ushort *param_2,short *param_3,int param_4)

{
  int iVar1;
  uintptr_t sp;
  uint16_t uStack_1e;
  
  uStack_1e = 5;
  if ((int)(uint)*param_2 <= param_4) {
    iVar1 = decrement_counter_on_mismatch((int)param_1,&uStack_1e);
    while (iVar1 == 0) {
      *param_2 = *param_2 + 1;
      *param_3 = *param_3 + 1;
      do {
      } while ((DAT_00000057 & 4) == 0);
      DAT_00000057 = DAT_00000057 & 0xfb;
      if (param_4 < (int)(uint)*param_2) {
        return;
      }
      iVar1 = decrement_counter_on_mismatch((int)param_1,&uStack_1e);
    }
  }
  return;
}
