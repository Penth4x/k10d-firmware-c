/* @k10d poll_keypad_with_retry @ 0x000f2d5c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Checks two status flags, then polls a key input routine up to three times, writing the
 *   result to a global byte.
 * summary:
 *   The function first checks bits 0x20 and 0x40 in DAT_0003c126 and DAT_0003c143. If both
 *   are set, it calls FUN_000f3072, then enters a loop (max 3 iterations) that clears
 *   DAT_0003c122, sets bit 1 of bRam00000000, and calls wait_and_write_byte_000e0fec with
 *   param_1 and param_2 to read key data. If DAT_0003c122 equals 0x08 (backspace), it calls
 *   configure_two_parameter_state and busy_wait_on_mode_flag, decrementing the retry
 *   counter; otherwise it exits the loop. Finally it calls clear_bit_and_set_flag and
 *   returns the value in DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char poll_keypad_with_retry(byte param_1,uint8_t param_2)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_00000420;
  bVar2 = false;
  iVar4 = 0;
  iVar3 = 3;
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_000f3072();
    do {
      DAT_0003c122 = '\0';
      bRam00000000 = bRam00000000 & 0xf7 | 2;
      if ((param_1 & 0xf0) == 0x80) {
        iVar4 = wait_for_flag_and_set_state_000e1d48(5);
      }
      if (iVar4 == 0) {
        wait_and_write_byte_000e0fec(param_1);
        wait_and_write_byte_000e0fec(param_2);
        if ((param_1 & 0xf0) == 0x80) {
          iVar4 = wait_for_flag_and_set_state_000e1d14(200);
        }
      }
      if (DAT_0003c122 == '\b') {
        configure_two_parameter_state(0,1);
        configure_two_parameter_state(1,1);
        iVar3 = iVar3 + -1;
        busy_wait_on_mode_flag(0x14);
      }
      else {
        iVar3 = 0;
      }
    } while (iVar3 != 0);
    clear_bit_and_set_flag();
  }
  DAT_00000420 = uVar1;
  return DAT_0003c122;
}
