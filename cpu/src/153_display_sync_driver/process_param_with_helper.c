/* @k10d process_param_with_helper @ 0x1046c918
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a local structure, passes it to a processing function with param_1, then
 *   finalizes the structure.
 * summary:
 *   The function calls alloc_and_init_small_struct_1045c524 to initialize a local stack
 *   buffer (auStack_10) with a constant from DAT_105a5c18. It then calls
 *   query_and_apply_param_state, passing the original parameter and the initialized buffer.
 *   Finally, it calls free_heap_if_flag_set_1045c56c with the buffer and a value of 2,
 *   likely to clean up or finalize the state. The specific subsystem is not identifiable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_param_with_helper(uint32_t param_1)

{
  uintptr_t sp;
  uint16_t auStack_10 [4];
  
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,0,0,0,0);
  query_and_apply_param_state(param_1,auStack_10);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
