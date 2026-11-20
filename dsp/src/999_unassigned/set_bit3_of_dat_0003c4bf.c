/* @k10d set_bit3_of_dat_0003c4bf @ 0x000dfe2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets or clears bit 3 of DAT_0003c4bf based on param_1, then calls
 *   select_entry_and_apply and copies the value to DAT_0003c4ef.
 * summary:
 *   The function conditionally sets (param_1==0) or clears (param_1!=0) bit 3 (value 8) of
 *   the global DAT_0003c4bf. It then calls select_entry_and_apply with argument 0xf and
 *   stores the updated DAT_0003c4bf into DAT_0003c4ef. The roles of the two DAT globals and
 *   the callee are not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit3_of_dat_0003c4bf(int param_1)

{
  if (param_1 == 0) {
    DAT_0003c4bf = DAT_0003c4bf | 8;
  }
  else {
    DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  }
  select_entry_and_apply(0xf);
  DAT_0003c4ef = DAT_0003c4bf;
  return;
}
