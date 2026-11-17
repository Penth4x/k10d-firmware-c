/* @k10d iterate_and_call_subroutine @ 0x000d44bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls update_status_flags_and_write_state for a sequence of 20 values (0-19) if
 *   specific flag conditions are met.
 * summary:
 *   The function checks three global flags (DAT_0003c3b1, DAT_0003f286, DAT_0003cbef). If
 *   the condition is true, it loops 4 times, calling update_status_flags_and_write_state
 *   with arguments 0 through 19 (skipping values stored in DAT_0003cf0c and DAT_0003cf0d
 *   under certain conditions). It finally clears DAT_0003cb80. The specific role of
 *   update_status_flags_and_write_state is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_subroutine(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (((DAT_0003c3b1 == '\x01') && ((DAT_0003f286 & 0x10) != 0)) || ((DAT_0003cbef & 0x20) != 0)) {
    uVar1 = 0;
    iVar3 = 4;
    do {
      if (((uVar1 != DAT_0003cf0c) && (uVar1 != DAT_0003cf0d)) &&
         ((DAT_0003cf0d < 0x11 || (((int)uVar1 < 10 || (0xf < (int)uVar1)))))) {
        update_status_flags_and_write_state(uVar1);
      }
      uVar2 = uVar1 + 1;
      if (((uVar2 != DAT_0003cf0c) && (uVar2 != DAT_0003cf0d)) &&
         ((DAT_0003cf0d < 0x11 || (((int)uVar2 < 10 || (0xf < (int)uVar2)))))) {
        update_status_flags_and_write_state(uVar2);
      }
      uVar2 = uVar1 + 2;
      if (((uVar2 != DAT_0003cf0c) && (uVar2 != DAT_0003cf0d)) &&
         ((DAT_0003cf0d < 0x11 || (((int)uVar2 < 10 || (0xf < (int)uVar2)))))) {
        update_status_flags_and_write_state(uVar2);
      }
      uVar2 = uVar1 + 3;
      if (((uVar2 != DAT_0003cf0c) && (uVar2 != DAT_0003cf0d)) &&
         ((DAT_0003cf0d < 0x11 || (((int)uVar2 < 10 || (0xf < (int)uVar2)))))) {
        update_status_flags_and_write_state(uVar2);
      }
      uVar2 = uVar1 + 4;
      if (((uVar2 != DAT_0003cf0c) && (uVar2 != DAT_0003cf0d)) &&
         ((DAT_0003cf0d < 0x11 || (((int)uVar2 < 10 || (0xf < (int)uVar2)))))) {
        update_status_flags_and_write_state(uVar2);
      }
      uVar1 = uVar1 + 5;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    DAT_0003cb80 = 0;
  }
  return;
}
