/* @k10d check_and_set_flag_104a58b4 @ 0x104a58b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Checks a condition via a helper and sets a boolean flag in a target structure.
 * summary:
 *   The function calls settings_getter with a value from offset 0x44 of param_1 and the
 *   constant 0xc2. It then calls write_word_to_dynamic_array with param_2, 0, and a boolean
 *   result indicating whether the first call returned non-zero. The specific roles of the
 *   helpers and the data structures are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_104a58b4(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xc2);
  write_word_to_dynamic_array(param_2,0,(ushort)(cVar1 != '\0'));
  return;
}
