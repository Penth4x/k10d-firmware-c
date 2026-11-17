/* @k10d check_param_against_two_values @ 0x103937ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value from param_1 and param_3, then checks it against 1 or 2 based on
 *   param_2, returning 0 on match.
 * summary:
 *   The function calls add_offset_to_pointer_104d65b6(param_3) and
 *   map_mode_index_to_flag_1039367e(param_1), passing the results to
 *   find_entry_in_fixed_table to produce an intermediate value. If param_2 is 1 or 2, it
 *   calls read_byte_at_offset_104d5d8e with that intermediate value and the corresponding
 *   constant (1 or 2). If read_byte_at_offset_104d5d8e returns 0, the function returns 0;
 *   otherwise it returns 1. If param_2 is 0 or any other value, it returns 1 immediately
 *   after the initial computation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_param_against_two_values(void *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  uVar1 = add_offset_to_pointer_104d65b6(param_3);
  uVar2 = map_mode_index_to_flag_1039367e(param_1);
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
