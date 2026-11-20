/* @k10d dispatch_on_state_index_000d771a @ 0x000d771a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Switches on the value of DAT_0003c3f6 and calls one of eight handler functions.
 * summary:
 *   Reads the global DAT_0003c3f6 and branches on its value (0-7) to invoke a corresponding
 *   callee from FUN_000ed66c through FUN_000ed70a. No arguments are passed to the callees
 *   and no return value is used. The role of DAT_0003c3f6 and the specific behavior of each
 *   callee are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_index_000d771a(void)

{
  switch(DAT_0003c3f6) {
  case 0:
    FUN_000ed66c();
    break;
  case 1:
    clear_bit2_of_dat_00000005();
    break;
  case 2:
    clear_bit1_of_dat_00000005();
    break;
  case 3:
    clear_bit_23_after_call();
    break;
  case 4:
    FUN_000ed6c8();
    break;
  case 5:
    clear_bit_5_of_dat_00000005();
    break;
  case 6:
    clear_bit3_of_dat_00000005();
    break;
  case 7:
    FUN_000ed70a();
  }
  return;
}
