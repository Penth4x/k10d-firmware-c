/* @k10d forward_params_via_offset @ 0x1050b89a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x28 of param_1 and forwards it with param_2 and param_3 to
 *   prepare_and_dispatch_event_105154de.
 * summary:
 *   The function dereferences param_1 + 0x28 to obtain a pointer, then calls
 *   prepare_and_dispatch_event_105154de with that pointer, a zero, param_2, param_3, and a
 *   trailing zero. It acts as a thin wrapper that indirections the first argument through a
 *   struct field before delegating to the callee. No other side effects or globals are
 *   touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_via_offset(int param_1,uint32_t param_2,uint32_t param_3)

{
  prepare_and_dispatch_event_105154de(*(uint32_t *)(param_1 + 0x28),0,param_2,param_3,0);
  return;
}
