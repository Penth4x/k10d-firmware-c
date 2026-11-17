/* @k10d call_helper_when_second_arg_zero @ 0x10509478
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with two derived arguments only when the second parameter is zero.
 * summary:
 *   Checks if param_2 equals zero. If true, calls write_twelve_bytes_to_mmio_block with
 *   param_1 and param_1 + 4 as arguments. Otherwise, returns immediately without side
 *   effects. The role of the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_when_second_arg_zero(int param_1,int param_2)

{
  if (param_2 == 0) {
    write_twelve_bytes_to_mmio_block(param_1,(void *)(param_1 + 4));
  }
  return;
}
