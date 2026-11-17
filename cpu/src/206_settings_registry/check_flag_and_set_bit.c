/* @k10d check_flag_and_set_bit @ 0x104a532e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Checks a flag at offset 0x44 in a struct and sets a boolean value in a target.
 * summary:
 *   The function calls settings_getter with a pointer from param_1+0x44 and the constant
 *   0xa7. It then calls write_word_to_dynamic_array with param_2, 0, and a boolean result
 *   indicating if the first call returned 1. The specific roles of the callees and the data
 *   structures are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_set_bit(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xa7);
  write_word_to_dynamic_array(param_2,0,(ushort)(cVar1 == '\x01'));
  return;
}
