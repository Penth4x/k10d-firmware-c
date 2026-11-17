/* @k10d forward_params_via_offset_0x28 @ 0x1050b8bc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from param_1+0x28 and forwards it with three additional arguments to a
 *   callee.
 * summary:
 *   The function dereferences the 4-byte value at offset 0x28 of the structure pointed to
 *   by param_1. It passes this dereferenced value as the first argument to
 *   prepare_and_dispatch_event_105154de, along with param_2, param_3, and param_4. It acts
 *   as a simple wrapper or thunk that indirections the first argument through a struct
 *   member before calling the underlying routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_via_offset_0x28(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  prepare_and_dispatch_event_105154de(*(uint32_t *)(param_1 + 0x28),0,param_2,param_3,param_4);
  return;
}
