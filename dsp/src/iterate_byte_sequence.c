/* @k10d iterate_byte_sequence @ 0x000e194a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes a sequence of bytes from param_1 by calling update_state_and_wait_flag in a
 *   loop until a termination condition is met.
 * summary:
 *   The function first checks global state flags (DAT_0003c121, DAT_00000484) and
 *   conditionally calls busy_wait_on_mode_flag or sets a bit in DAT_00000060. It then
 *   clears bit 1 of bRam00000000. It determines a loop count based on DAT_0003c128 and a
 *   lookup table, then iterates, passing each byte of param_1 to
 *   update_state_and_wait_flag. The loop continues while DAT_0003c122 is zero. Finally, it
 *   increments DAT_0003c122 by 0x50 ('P') if non-zero and returns it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char iterate_byte_sequence(uint param_1)

{
  ushort uVar1;
  
  if (DAT_0003c121 == 0x6e) {
    if ((DAT_00000484 & 3) == 2) {
      busy_wait_on_mode_flag(0x24);
    }
  }
  else {
    DAT_00000060 = DAT_00000060 | 4;
  }
  bRam00000000 = bRam00000000 & 0xf7;
  if ((DAT_0003c128 & 0x80) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (ushort)(byte)(&DAT_000fc570)[DAT_0003c121 & 0xf];
  }
  do {
    update_state_and_wait_flag(param_1 & 0xff);
    param_1 = param_1 >> 8 & 0xffff;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
  } while (DAT_0003c122 == '\0');
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + 'P';
  }
  return DAT_0003c122;
}
