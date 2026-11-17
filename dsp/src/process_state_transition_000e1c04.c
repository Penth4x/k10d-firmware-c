/* @k10d process_state_transition_000e1c04 @ 0x000e1c04
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates a state counter and toggles control flags based on status bits and helper
 *   function results.
 * summary:
 *   The function checks bit 6 of DAT_0003c114 and, if set, calls clear_bit7_and_call_helper
 *   and wait_for_flag_with_timeout_000e22da, setting DAT_0003c122 to 2 on success. It then
 *   conditionally calls wait_for_flag_bits and poll_flag_and_set_state with argument 100,
 *   modifying flags in DAT_00000403, DAT_00000503, and DAT_00000003. Finally, it increments
 *   DAT_0003c122 if non-zero and calls FUN_000e1798, returning the updated value of
 *   DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char process_state_transition_000e1c04(void)

{
  int iVar1;
  
  if ((DAT_0003c114 & 0x40) != 0) {
    clear_bit7_and_call_helper();
    iVar1 = wait_for_flag_with_timeout_000e22da();
    if (iVar1 == 0) {
      DAT_0003c122 = '\x02';
    }
  }
  if ((DAT_0003c122 == '\0') && (iVar1 = wait_for_flag_bits(100), iVar1 == 0)) {
    DAT_00000403 = DAT_00000403 | 0x10;
    DAT_00000503 = DAT_00000503 & 0xef;
    DAT_00000003 = DAT_00000003 & 0xef;
    iVar1 = poll_flag_and_set_state(100);
    if (iVar1 == 0) {
      DAT_00000003 = DAT_00000003 | 0x10;
      poll_flag_and_set_status(5);
    }
    DAT_00000403 = DAT_00000403 & 0xef;
    DAT_00000503 = DAT_00000503 | 0x10;
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + ' ';
    FUN_000e1798();
  }
  return DAT_0003c122;
}
