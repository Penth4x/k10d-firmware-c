/* @k10d forward_param_to_callee_10515fbc @ 0x10515fbc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x58 of param_1 and param_2 to remove_node_from_list.
 * summary:
 *   This is a thin wrapper that dereferences param_1 at offset 0x58 and forwards that value
 *   along with param_2 to the callee remove_node_from_list. No other operations, side
 *   effects, or state modifications are visible in the pseudocode. The specific role of the
 *   callee and the data at offset 0x58 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_callee_10515fbc(int param_1,void *param_2)

{
  remove_node_from_list(*(int *)(param_1 + 0x58),param_2);
  return;
}
