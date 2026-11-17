/* @k10d update_bitmask_status_byte @ 0x000ea1ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates a global status byte by setting or clearing bit 1 based on the presence of bits
 *   in two input masks.
 * summary:
 *   The function calls wait_if_flag_is_two, then iterates through the lower 8 bits of
 *   param_1 and the bits defined by _DAT_0003c01a in param_2. For each bit, it sets bit 1
 *   of bRam00000000 if the input bit is set, or clears it if the input bit is clear. It
 *   calls wait_if_flag_is_two again before returning. The role of wait_if_flag_is_two and
 *   the specific meaning of bRam00000000 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_bitmask_status_byte(uint param_1,uint param_2)

{
  uint uVar1;
  
  wait_if_flag_is_two();
  uVar1 = 8;
  do {
    if ((param_1 & 0xffff & uVar1) == 0) {
      bRam00000000 = bRam00000000 & 0xfd;
    }
    else {
      bRam00000000 = bRam00000000 | 2;
    }
    uVar1 = uVar1 >> 1;
    bRam00000000 = bRam00000000 & 0xfb;
  } while (uVar1 != 0);
  uVar1 = (uint)_DAT_0003c01a;
  if (_DAT_0003c01a != 0) {
    do {
      if ((param_2 & uVar1) == 0) {
        bRam00000000 = bRam00000000 & 0xfd;
      }
      else {
        bRam00000000 = bRam00000000 | 2;
      }
      uVar1 = uVar1 >> 1;
    } while (uVar1 != 0);
  }
  wait_if_flag_is_two();
  return;
}
