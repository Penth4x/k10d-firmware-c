/* @k10d update_key_state_flags_000c4400 @ 0x000c4400
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates key state flags based on key codes and status bits.
 * summary:
 *   The function checks the value of DAT_0003c493 and DAT_0003c46d, which appear to be key
 *   codes or state indicators. It calls set_state_and_flag_bit, set_state_and_clear_flag,
 *   and update_two_state_flags under specific conditions and modifies the bits in
 *   DAT_0003c588 and DAT_0003c589. The logic branches on various bit fields in
 *   DAT_0003c191, DAT_0003c18f, DAT_0003c181, and DAT_0003c18e to determine the final state
 *   of DAT_0003c492.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_key_state_flags_000c4400(void)

{
  if (DAT_0003c493 == '\b') {
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if (DAT_0003c493 == '\t') {
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if (DAT_0003c493 == '\n') {
    DAT_0003c493 = '\b';
    set_state_and_flag_bit();
    DAT_0003c588 = DAT_0003c588 & 0xdf;
  }
  else if ((DAT_0003c191 & 0x60) == 0) {
    DAT_0003c492 = 0;
  }
  else if ((DAT_0003c18f & 8) == 0) {
    set_state_and_clear_flag();
    if (DAT_0003c493 == '\x15') {
      DAT_0003c492 = 4;
    }
  }
  else if ((DAT_0003c181 & 0x40) == 0) {
    if ((((DAT_0003c18e & 0x10) == 0) || ((DAT_0003c18e & 4) != 0)) || ((DAT_0003c18f & 2) != 0)) {
      DAT_0003c492 = 4;
    }
    else {
      update_two_state_flags();
    }
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
