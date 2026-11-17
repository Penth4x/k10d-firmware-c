/* @k10d query_and_set_flag_104a535e @ 0x104a535e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a value from an object field and sets a boolean flag in a second object based
 *   on the result.
 * summary:
 *   The function reads an integer from offset 0x44 of the object pointed to by param_1 and
 *   passes it to settings_getter with a constant argument of 0xa8. It then calls
 *   write_word_to_dynamic_array with param_2, 0, and a boolean value indicating whether the
 *   result of the first call was equal to 1. The specific roles of the objects and the
 *   callees are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_set_flag_104a535e(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xa8);
  write_word_to_dynamic_array(param_2,0,(ushort)(cVar1 == '\x01'));
  return;
}
