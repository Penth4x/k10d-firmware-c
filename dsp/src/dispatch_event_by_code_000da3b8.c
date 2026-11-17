/* @k10d dispatch_event_by_code_000da3b8 @ 0x000da3b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Routes execution to one of three handlers based on byte values in DAT_0003c492 and
 *   DAT_0003c493.
 * summary:
 *   The function checks specific bit flags in DAT_0003c589 and DAT_0003c58b to determine
 *   which branch to take. It compares byte values at DAT_0003c492 and DAT_0003c493 against
 *   constants like 0x0a, 0x0d, 0x06, 0x16, 0x10, 0x04, and 0x05. Depending on the match, it
 *   calls compute_clamped_index_000c4a06, initialize_interrupt_context, or FUN_000dab0e,
 *   and always calls set_flag_bits_and_clear_counters at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_code_000da3b8(void)

{
  if ((((DAT_0003c589 & 1) == 0) || ((DAT_0003c58b & 2) == 0)) || ((DAT_0003c58b & 8) != 0)) {
    if (DAT_0003c493 == '\n') {
      _DAT_0003c19c = compute_clamped_index_000c4a06();
    }
    else if ((((DAT_0003c193 & 1) != 0) && ((DAT_0003c58b & 2) != 0)) && ((DAT_0003c58b & 8) == 0))
    {
      initialize_interrupt_context();
    }
  }
  else if (((DAT_0003c492 == '\r') || (DAT_0003c492 == '\x06')) || (DAT_0003c492 == '\x16')) {
    _DAT_0003c19c = compute_clamped_index_000c4a06();
  }
  else if (DAT_0003c492 != '\x10') {
    if ((DAT_0003c492 == '\x04') || (DAT_0003c492 == '\x05')) {
      FUN_000dab0e();
    }
    else {
      initialize_interrupt_context();
    }
  }
  set_flag_bits_and_clear_counters();
  return;
}
