/* @k10d copy_field_and_call_helper @ 0x1045b73e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies the 4-byte value at offset 4 of the first object into a stack buffer and passes
 *   it to a helper.
 * summary:
 *   Reads the word at (*param_1 + 4) and stores it in a local stack variable. It then calls
 *   insert_node_at_head with param_1, the address of that local variable, and param_2. The
 *   function acts as a thin wrapper that extracts a specific field from the first argument
 *   before delegating to the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_and_call_helper(int *param_1,int *param_2)

{
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_10 = *(uint32_t *)(*param_1 + 4);
  uStack_c = uStack_10;
  insert_node_at_head(param_1,&uStack_10,param_2);
  return;
}
