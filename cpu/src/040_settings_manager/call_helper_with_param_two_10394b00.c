/* @k10d call_helper_with_param_two_10394b00 @ 0x10394b00
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper to obtain a value, then passes it and param_2 to a second
 *   unnamed helper.
 * summary:
 *   The function makes a single call to get_or_create_sram_object_1040a240 with no
 *   arguments, capturing the return value in a local variable. It then calls
 *   set_flag_from_pointer, passing the captured value as the first argument and the input
 *   parameter param_2 as the second argument. No other operations, memory accesses, or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param_two_10394b00(uint32_t param_1,int *param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_sram_object_1040a240();
  set_flag_from_pointer(uVar1,param_2);
  return;
}
