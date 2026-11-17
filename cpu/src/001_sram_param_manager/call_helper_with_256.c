/* @k10d call_helper_with_256 @ 0x100f17ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x100.
 * summary:
 *   This function is a thin wrapper that invokes store_halfword_at_dat_offset with the
 *   immediate value 0x100 (256). It performs no other operations and returns immediately.
 *   The specific role of the callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_256(void)

{
  store_halfword_at_dat_offset(0x100);
  return;
}
