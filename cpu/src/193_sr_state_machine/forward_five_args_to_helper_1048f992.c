/* @k10d forward_five_args_to_helper_1048f992 @ 0x1048f992
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Forwards its five arguments unchanged to a single callee at 0x1044538e.
 * summary:
 *   The function takes an object pointer (param_1) and four additional values, then calls
 *   write_display_layer_b_registers with the field at offset 0x14 of the object plus the
 *   four parameters. It performs no other computation, memory access, or state change. The
 *   callee's role is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_five_args_to_helper_1048f992(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  write_display_layer_b_registers(*(uint32_t *)(param_1 + 0x14),param_2,param_3,param_4,param_5);
  return;
}
