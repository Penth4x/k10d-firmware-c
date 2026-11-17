/* @k10d register_two_rodata_pointers_and_call_helper @ 0x104ddf34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Writes two rodata pointers to param_2, calls a helper with param_3, and registers a
 *   computed value.
 * summary:
 *   The function calls append_string_to_buffer twice with param_2 and two distinct rodata
 *   addresses (0x105bb058 and 0x105bb068). It then calls add_offset_to_param_104d6ef6 with
 *   param_3. It invokes a function at 0x104d7a12, passes its return value to
 *   build_and_apply_param_string along with param_2, the constant 1, and in_r7. Finally, it
 *   calls append_string_to_buffer two more times with param_2 and rodata addresses
 *   0x105bb074 and 0x105bb080. The specific roles of the callees and the rodata contents
 *   are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_rodata_pointers_and_call_helper(uint32_t param_1,int *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(void *)0x105bb058/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105bb068/*ROM*/);
  add_offset_to_param_104d6ef6(param_3);
  uVar1 = (*(code *)0x104d7a12/*ROM*/)();
  build_and_apply_param_string(param_2,(void *)uVar1,1,(void *)r7_in);
  append_string_to_buffer(param_2,(void *)0x105bb074/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105bb080/*ROM*/);
  return;
}
