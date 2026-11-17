/* @k10d copy_first_word_and_call_helper @ 0x1045b77a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies the first word of param_1 into a local variable and passes it to a helper
 *   function.
 * summary:
 *   The function reads the first 32-bit value from the pointer in param_1 and stores it in
 *   a local stack variable. It then calls insert_node_at_head with param_1, the address of
 *   the local variable, and param_2. The role of the helper function is unknown, so the
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_first_word_and_call_helper(uint32_t *param_1,int *param_2)

{
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_10 = *param_1;
  uStack_c = uStack_10;
  insert_node_at_head(param_1,&uStack_10,param_2);
  return;
}
