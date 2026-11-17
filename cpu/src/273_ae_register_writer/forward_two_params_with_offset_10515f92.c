/* @k10d forward_two_params_with_offset_10515f92 @ 0x10515f92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Forwards two parameters to a callee, adding 0xf8 to the first argument.
 * summary:
 *   This function is a thin wrapper that calls remove_entry_from_array_105169e8 with
 *   param_1 + 0xf8 and param_2. It performs no other operations, side effects, or state
 *   modifications. The caller is release_buffer_slot_by_index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_params_with_offset_10515f92(int param_1,int param_2)

{
  remove_entry_from_array_105169e8(param_1 + 0xf8,param_2);
  return;
}
