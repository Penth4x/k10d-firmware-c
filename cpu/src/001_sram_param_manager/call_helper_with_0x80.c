/* @k10d call_helper_with_0x80 @ 0x100f17f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x80.
 * summary:
 *   This function is a thin wrapper that invokes store_halfword_at_dat_offset with the
 *   immediate value 0x80. It has no other logic, local variables, or side effects beyond
 *   the call. The role of store_halfword_at_dat_offset is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x80(void)

{
  store_halfword_at_dat_offset(0x80);
  return;
}
