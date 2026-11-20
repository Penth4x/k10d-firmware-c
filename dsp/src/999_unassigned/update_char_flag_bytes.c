/* @k10d update_char_flag_bytes @ 0x000c4510
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Sets or clears bit 5 of two flag bytes based on character codes and a status register.
 * summary:
 *   Checks DAT_0003c493 for specific ASCII values (tab, backspace, newline) and calls
 *   set_state_and_flag_bit to clear bit 5 of DAT_0003c588. Sets DAT_0003c492 to 0 or 4
 *   based on bits 5-6 of DAT_0003c191. Sets or clears bit 5 of DAT_0003c589 based on
 *   DAT_0003c46d matching the same character codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_char_flag_bytes(void)

{
  if (DAT_0003c493 == '\t') {
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if (DAT_0003c493 == '\b') {
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if (DAT_0003c493 == '\n') {
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if ((DAT_0003c191 & 0x60) == 0) {
    DAT_0003c492 = 0;
  }
  else {
    DAT_0003c492 = 4;
  }
  if (DAT_0003c46d == '\b') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else if (DAT_0003c46d == '\t') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else if (DAT_0003c46d == '\n') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else {
    DAT_0003c589 = DAT_0003c589 & 0xdf;
  }
  return;
}
