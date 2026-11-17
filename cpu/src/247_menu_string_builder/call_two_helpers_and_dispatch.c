/* @k10d call_two_helpers_and_dispatch @ 0x104dd9ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with fixed and variable arguments, then calls a third
 *   helper with a computed value.
 * summary:
 *   The function calls append_string_to_buffer with param_2 and a fixed address, then calls
 *   add_offset_to_pointer_104d6882 with param_3. It retrieves a value from an unknown
 *   function at 0x104d8afc and passes it to build_and_apply_param_string along with
 *   param_2, the constant 1, and in_r7. Finally, it calls append_string_to_buffer again
 *   with param_2 and a different fixed address. The specific roles of the callees are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_and_dispatch(uint32_t param_1,int *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(void *)0x105baf94/*ROM*/);
  add_offset_to_pointer_104d6882(param_3);
  uVar1 = (*(code *)0x104d8afc/*ROM*/)();
  build_and_apply_param_string(param_2,(void *)uVar1,1,(void *)r7_in);
  append_string_to_buffer(param_2,(void *)0x105bafa0/*ROM*/);
  return;
}
