/* @k10d check_two_condition_flags_103962e4 @ 0x103962e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Combines two values from param_1 and param_3, then tests one of two flags in the
 *   result, returning 1 if the flag is set or param_2 is invalid.
 * summary:
 *   The function calls add_offset_to_pointer_104d65b6 on param_3 and
 *   map_index_to_code_and_dispatch on param_1, passing both results to
 *   find_entry_in_fixed_table to produce a combined value. It then branches on param_2: if
 *   1 or 2, it calls read_byte_at_offset_104d5d8e with the combined value and the
 *   corresponding flag index, returning 0 if the call returns 0, otherwise 1. If param_2 is
 *   0 or any other value, it returns 1 unconditionally. The specific meaning of the flags
 *   and the combined value is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_condition_flags_103962e4(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  uVar1 = add_offset_to_pointer_104d65b6(param_3);
  uVar2 = map_index_to_code_and_dispatch(param_1);
  uVar1 = find_entry_in_fixed_table(uVar1,uVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar3 = read_byte_at_offset_104d5d8e(uVar1,1);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
    else if (param_2 == 2) {
      iVar3 = read_byte_at_offset_104d5d8e(uVar1,2);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}
