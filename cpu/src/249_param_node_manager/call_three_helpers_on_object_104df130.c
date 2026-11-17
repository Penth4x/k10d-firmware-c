/* @k10d call_three_helpers_on_object_104df130 @ 0x104df130
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions, passing a derived pointer from the object's second
 *   field to the first.
 * summary:
 *   The function reads the integer at offset 4 of the object pointed to by param_1, adds
 *   0x1c, and passes the result to kernel_diag_taskstack. It then calls
 *   get_or_init_sram_block_10391bfa and call_helper_with_offset_10391cbe with no arguments.
 *   As virtual slot 5 of cls_105bb2e4, it likely performs a specific state transition or
 *   operation defined by the class, but the exact role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_object_104df130(int param_1)

{
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 0x1c));
  get_or_init_sram_block_10391bfa();
  call_helper_with_offset_10391cbe();
  return;
}
