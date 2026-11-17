/* @k10d query_and_set_flag_104a52a2 @ 0x104a52a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a value from an object field and sets a boolean flag in a second object based
 *   on the result.
 * summary:
 *   The function reads an integer from offset 0x44 of the object pointed to by param_1 and
 *   passes it to settings_getter with a constant argument of 0x96. The return value of this
 *   call is compared to 1. The result of this comparison (converted to a ushort 0 or 1) is
 *   passed as the third argument to write_word_to_dynamic_array, along with param_2 and 0.
 *   The specific roles of the objects and the callees are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_and_set_flag_104a52a2(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x96);
  write_word_to_dynamic_array(param_2,0,(ushort)(cVar1 == '\x01'));
  return;
}
