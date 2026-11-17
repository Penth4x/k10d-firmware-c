/* @k10d post_event_to_subobject @ 0x104709de
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Forwards a two-argument event to the sub-object pointer stored at offset 0x3c of the
 *   given structure.
 * summary:
 *   Reads a pointer from param_1 + 0x3c and calls dispatch_context_request with that
 *   pointer, a constant 0, param_2, and a constant 1. The callee's role is unknown, so the
 *   specific event type or subsystem cannot be determined. The function acts as a thin
 *   wrapper around the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void post_event_to_subobject(int param_1,uint32_t param_2)

{
  dispatch_context_request(*(uint32_t *)(param_1 + 0x3c),0,param_2,1);
  return;
}
