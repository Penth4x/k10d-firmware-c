/* @k10d call_three_helpers_with_params @ 0x1052bfea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions passing the two input parameters and a value from a
 *   getter.
 * summary:
 *   The function calls build_path_with_slash with param_1 and param_2, then calls
 *   get_shared_sram_buffer to obtain a value, and finally passes that value and param_2 to
 *   search_string_in_object_list. It is virtual method slot 10 of class cls_105f9f74. No
 *   specific camera subsystem behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_with_params(uint32_t param_1,char *param_2)

{
  uint32_t uVar1;
  
  build_path_with_slash(param_1,param_2);
  uVar1 = get_shared_sram_buffer();
  search_string_in_object_list(uVar1,param_2);
  return;
}
