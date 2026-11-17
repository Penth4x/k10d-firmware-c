/* @k10d call_helper_with_fixed_args_104fb03c @ 0x104fb03c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the input pointer and two fixed constants, returning the helper's
 *   result.
 * summary:
 *   This is a thin wrapper that forwards param_1 to event_dispatcher along with the
 *   constants -0x7fffffe6 (0x8000001a) and 1, then returns the callee's return value. It is
 *   invoked by the verified hw_irq_source_demux, suggesting it handles a specific interrupt
 *   source, but the exact role of the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_args_104fb03c(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = event_dispatcher(param_1,-0x7fffffe6,1);
  return uVar1;
}
