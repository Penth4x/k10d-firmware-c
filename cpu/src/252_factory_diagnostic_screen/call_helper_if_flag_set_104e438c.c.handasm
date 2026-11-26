/* @k10d call_helper_if_flag_set_104e438c @ 0x104e438c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper when the first argument is non-null and the low bit of the
 *   second argument is set.
 * summary:
 *   The function checks that param_1 is non-zero and that bit 0 of param_2 is set. If both
 *   conditions hold, it calls release_heap_block_104e6378 with no arguments. No other side
 *   effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_104e438c(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    release_heap_block_104e6378((void *)__frv_reg_unset(4));
  }
  return;
}
