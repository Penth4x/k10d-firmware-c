/* @k10d poll_status_and_dispatch_event @ 0x000d4622
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Clears status bits, polls a 16-entry event queue with a timeout, and dispatches the
 *   first valid event to a handler chain.
 * summary:
 *   The function first calls update_status_flags_and_write_state 16 times to clear or
 *   initialize a series of state variables. It then clears specific bits in DAT_0003cb80
 *   and DAT_0003cbef. A loop polls DAT_0003cb80 and related bytes up to 16 times, waiting
 *   for a condition where bit 0 or bit 3 is set and bit 4 is clear. If the timeout is
 *   reached or a valid event is found, it calls check_keypad_state to retrieve an event ID.
 *   If the ID is valid and not 4, it calls select_min_value_from_table, then passes the
 *   result to update_short_at_offset_0x3cbf2, load_two_byte_pair_from_table, and
 *   update_state_flags_and_copy_params, finishing with compute_signed_product_with_offset.
 *   If bit 0 is not set, it calls clear_six_word_globals_000d41b0 instead.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_status_and_dispatch_event(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x11;
  do {
    update_status_flags_and_write_state(iVar2);
    update_status_flags_and_write_state(iVar2 + 1);
    update_status_flags_and_write_state(iVar2 + 2);
    iVar2 = iVar2 + 3;
    iVar3 = iVar3 + -3;
  } while (2 < iVar3);
  do {
    update_status_flags_and_write_state(iVar2);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  DAT_0003cb80 = DAT_0003cb80 & 0xf6;
  DAT_0003cbef = DAT_0003cbef & 0xef;
  iVar2 = 0;
  while ((((bVar1 = DAT_0003cb80, (*(byte *)(iVar2 + 0x3cb81) & 1) == 0 ||
           (bVar1 = DAT_0003cb80 | 1, (*(byte *)(iVar2 + 0x3cb81) & 8) == 0)) ||
          ((*(byte *)(iVar2 + 0x3cbb8) & 0x10) != 0)) ||
         (((DAT_0003cb80 = DAT_0003cb80 | 9, bVar1 = DAT_0003cb80, iVar2 == 0x10 || (iVar2 == 9)) ||
          ((DAT_0003f25a & 2) != 0))))) {
    DAT_0003cb80 = bVar1;
    iVar2 = iVar2 + 1;
    if (0x10 < iVar2) {
LAB_000d4698:
      if ((DAT_0003cb80 & 1) == 0) {
        clear_six_word_globals_000d41b0();
      }
      else {
        iVar2 = check_keypad_state();
        if (-1 < iVar2) {
          if (iVar2 != 4) {
            iVar2 = select_min_value_from_table();
          }
          update_short_at_offset_0x3cbf2(iVar2);
          load_two_byte_pair_from_table(iVar2);
          update_state_flags_and_copy_params(iVar2);
          compute_signed_product_with_offset();
        }
      }
      return;
    }
  }
  DAT_0003cbef = DAT_0003cbef | 0x10;
  goto LAB_000d4698;
}
