/* @k10d forward_event_to_subobject @ 0x104706c4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Forwards an event to the sub-object pointer stored at offset 0x3c with a fixed flag of
 *   1.
 * summary:
 *   Reads a pointer from param_1 + 0x3c and calls dispatch_sr_command with that pointer,
 *   param_2, and the constant 1. The callee's role is unknown, so the operation is
 *   described mechanically as forwarding a value to a sub-object. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_event_to_subobject(int param_1,uint32_t param_2)

{
  dispatch_sr_command(*(uint32_t *)(param_1 + 0x3c),param_2,1);
  return;
}
