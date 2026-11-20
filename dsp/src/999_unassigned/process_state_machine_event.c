/* @k10d process_state_machine_event @ 0x000cbbce
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a state machine condition and updates status flags based on the result.
 * summary:
 *   The function calls xor_with_low_nibble_shifted with a value derived from DAT_0003ce02
 *   to determine a state. Depending on the return value (0, 3, or other), it modifies bits
 *   in DAT_0003ce02, DAT_0003ce06, and DAT_0003ce00, and calls various subroutines like
 *   FUN_000cd58c, check_and_set_bit4_flag, and clear_bit1_of_dat_0003ce01. It returns a
 *   status code (0, 3, or 10) indicating the outcome of the state transition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_state_machine_event(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  FUN_000f6ffe();
  iVar1 = xor_with_low_nibble_shifted(DAT_0003ce02 & 3);
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      DAT_0003ce02 = DAT_0003ce02 & 0xfc;
    }
    if ((DAT_0003ce06 & 0x20) != 0) {
      DAT_0003ce06 = DAT_0003ce06 & 0xfd;
    }
    FUN_000cd58c();
    iVar2 = 0;
    if (((DAT_0003ce06 & 2) != 0) && ((DAT_0003ce00 & 0x20) == 0)) {
      iVar1 = extract_and_pass_nibble();
      if (iVar1 == 3) {
        if ((DAT_0003ce00 & 8) == 0) {
          DAT_0003ce11 = DAT_0003ce11 + -1;
          if (DAT_0003ce11 == '\0') {
            DAT_0003ce00 = DAT_0003ce00 | 8;
            iVar2 = check_and_set_bit4_flag();
          }
          else {
            update_nibble_and_flag_state();
          }
        }
        else {
          iVar2 = 10;
        }
        if (iVar2 == 10) {
          DAT_0003ce06 = DAT_0003ce06 | 0x10;
          clear_bit1_of_dat_0003ce01();
          DAT_0003ce06 = DAT_0003ce06 | 0x40;
          iVar2 = 3;
        }
      }
      else if ((iVar1 == 0) && ((DAT_0003ce05 & 0x40) == 0)) {
        iVar2 = tick_state_machine();
      }
      update_state_flags_000ccdc8(iVar1);
    }
  }
  return iVar2;
}
