/* @k10d clear_flag_and_conditional_call @ 0x000c1726
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears a global flag and conditionally calls two other functions based on bit 5 of
 *   another global.
 * summary:
 *   The function sets DAT_0003c569 to 0. It then checks if bit 5 (0x20) is set in
 *   DAT_0003c4d0. If the bit is set, it calls lookup_table_entry_by_index and
 *   apply_signed_value_mode. The roles of the global variables and the callees are not
 *   known from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_conditional_call(void)

{
  DAT_0003c569 = 0;
  if ((DAT_0003c4d0 & 0x20) != 0) {
    lookup_table_entry_by_index();
    apply_signed_value_mode(__frv_reg_unset(4));
  }
  return;
}
