/* @k10d forward_two_params_with_offset_10515f7e @ 0x10515f7e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Forwards two parameters to a callee, adding 0x78 to the first argument.
 * summary:
 *   This is a thin wrapper that calls remove_entry_from_array_105169e8 with param_1 + 0x78
 *   and param_2 unchanged. It performs no other operations, side effects, or state
 *   modifications. The caller is release_buffer_slot_by_index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_params_with_offset_10515f7e(int param_1,int param_2)

{
  remove_entry_from_array_105169e8(param_1 + 0x78,param_2);
  return;
}
