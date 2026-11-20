/* @k10d dispatch_on_state_value_000c3740 @ 0x000c3740
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears two status bits in DAT_0003c581, calls FUN_000c3d86, then branches to one of ten
 *   handlers based on DAT_0003c440.
 * summary:
 *   The function first zeroes DAT_0003c58c and masks DAT_0003c581 with 0xfc (clearing the
 *   low two bits). It then invokes FUN_000c3d86 unconditionally. A switch statement on the
 *   value of DAT_0003c440 (ranging from 0 to 0x11) selects one of ten distinct callee
 *   functions to execute. The specific roles of the callees and the meaning of the state
 *   variable are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_value_000c3740(void)

{
  DAT_0003c58c = 0;
  DAT_0003c581 = DAT_0003c581 & 0xfc;
  FUN_000c3d86();
  switch(DAT_0003c440) {
  case 0:
  case 1:
  case 6:
    compute_and_store_offset_pair();
    break;
  case 2:
    copy_or_compute_state_word();
    break;
  case 3:
    compute_two_derived_values_000c39d0();
    break;
  case 4:
    copy_two_globals_conditionally();
    break;
  case 5:
    compute_two_derived_values_000c3a0e();
    break;
  case 7:
    FUN_000c37e0();
    break;
  case 8:
    branch_on_flag_bit0();
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    update_dat_0003c564();
    break;
  case 0x11:
    set_flag_from_two_bit_conditions();
  }
  return;
}
