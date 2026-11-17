/* @k10d call_helper_with_param_two_104df0fa @ 0x104df0fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper to get a value, then passes it and param_2 to another helper,
 *   returning 1.
 * summary:
 *   The function calls get_or_init_sram_block_10391bfa to obtain a value, then calls
 *   query_object_state_flag_10391c6c with that value and the second input parameter. It
 *   unconditionally returns 1. The specific roles of the callees are unknown, so the
 *   operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_param_two_104df0fa(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_block_10391bfa();
  query_object_state_flag_10391c6c((void *)uVar1,param_2);
  return 1;
}
