/* @k10d dispatch_state_transition_000db42a @ 0x000db42a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a state machine in DAT_0003c198 based on the return value of
 *   read_and_classify_two_samples.
 * summary:
 *   The function calls read_and_classify_two_samples to retrieve a state code (0-3 or
 *   other). It then modifies the lower bits of DAT_0003c198 (masking with 0xf8 or 0x78) and
 *   sets specific bits (1, 3, or 7) depending on the code and the state of DAT_0003ce62. It
 *   branches to either toggle_bit7_and_check_state or clear_flag_and_reset_state to handle
 *   the transition. The specific meaning of the state bits and the callees is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000db42a(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = read_and_classify_two_samples();
  if (iVar2 == 0) {
    DAT_0003c198 = DAT_0003c198 & 0x78;
    toggle_bit7_and_check_state();
  }
  else if (iVar2 == 4) {
    toggle_bit7_and_check_state();
  }
  else if (iVar2 == 1) {
    bVar1 = DAT_0003c198 & 0xf8 | 1;
    if (((DAT_0003c198 & 0x80) == 0) || ((DAT_0003ce62 & 2) != 0)) {
      DAT_0003c198 = bVar1;
      toggle_bit7_and_check_state();
    }
    else {
      DAT_0003c198 = bVar1;
      clear_flag_and_reset_state();
    }
  }
  else if (iVar2 == 2) {
    bVar1 = DAT_0003c198 & 0xf8 | 3;
    if (((DAT_0003c198 & 0x80) == 0) && ((DAT_0003ce62 & 2) == 0)) {
      DAT_0003c198 = bVar1;
      toggle_bit7_and_check_state();
    }
    else {
      DAT_0003ce62 = DAT_0003ce62 & 0xfd;
      DAT_0003c198 = bVar1;
      clear_flag_and_reset_state();
    }
  }
  else if (iVar2 == 3) {
    DAT_0003c198 = DAT_0003c198 | 7;
    clear_flag_and_reset_state();
  }
  else {
    clear_flag_and_reset_state();
  }
  return;
}
