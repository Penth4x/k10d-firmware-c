/* @k10d build_and_apply_two_stage_update @ 0x10485e3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a 32-byte buffer via a helper and then passes it to a second helper with an
 *   extra parameter.
 * summary:
 *   The function allocates a 32-byte stack buffer and calls
 *   format_string_to_buffer_10545140 to populate it using param_1, param_2, and param_4. It
 *   then calls iterate_string_calling_helper, passing the populated buffer, param_3, and
 *   param_4. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a two-stage buffer construction and application.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_apply_two_stage_update(void *param_1,char *param_2,uint32_t param_3,void *param_4)

{
  uintptr_t sp;
  char acStack_28 [32];
  
  format_string_to_buffer_10545140(acStack_28,param_2,param_1,param_4);
  iterate_string_calling_helper(acStack_28,param_3,param_4);
  return;
}
