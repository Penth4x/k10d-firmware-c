/* @k10d call_two_helpers_with_flag @ 0x104aa036
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing a boolean derived from param_3 to the second.
 * summary:
 *   The function first calls call_helper_with_constant_three_104aa08c with param_1 and
 *   param_2. It then obtains a pointer from initialize_singleton_object_1045d6a0 and calls
 *   write_object_field_byte with the value at offset 8 of that pointer, the constant 10,
 *   and a boolean indicating whether param_3 is non-zero. No direct memory writes or
 *   complex logic are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_flag(uint32_t param_1,uint8_t param_2,int param_3)

{
  int iVar1;
  
  call_helper_with_constant_three_104aa08c(param_1,param_2);
  iVar1 = initialize_singleton_object_1045d6a0();
  write_object_field_byte((void *)(*(uint32_t *)(iVar1 + 8)),10,param_3 != 0);
  return;
}
