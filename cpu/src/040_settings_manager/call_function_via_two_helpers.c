/* @k10d call_function_via_two_helpers @ 0x10394aaa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Chains two helper calls and invokes a function pointer at a fixed ROM address with the
 *   result and two parameters.
 * summary:
 *   The function calls get_value_from_object to obtain a value, passes it to
 *   add_offset_to_pointer_104df392, and then calls the code pointer located at 0x1052bdda
 *   with the second helper's return value along with param_2 and param_3. The specific
 *   roles of the helpers and the target function pointer are unknown, so the operation is
 *   described mechanically as a chained indirect call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_via_two_helpers(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  (*(code *)0x1052bdda/*ROM*/)(iVar1,param_2,param_3);
  return;
}
