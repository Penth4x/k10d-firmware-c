/* @k10d map_mode_value_to_index @ 0x1051cbb8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps an integer at offset 0x20 of param_3 to a 0/1/2 index and passes it to
 *   write_word_to_dynamic_array.
 * summary:
 *   Reads the 32-bit value at param_3 + 0x20. If it equals 2, sets local uVar1 to 1; if it
 *   equals 1, sets uVar1 to 2; otherwise uVar1 remains 0. Calls write_word_to_dynamic_array
 *   with param_2, 0, and uVar1. The specific camera subsystem is not determinable from the
 *   pseudocode or the unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_value_to_index(uint32_t param_1,void *param_2,int param_3)

{
  uint16_t uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_3 + 0x20) == 2) {
    uVar1 = 1;
  }
  else if (*(int *)(param_3 + 0x20) == 1) {
    uVar1 = 2;
  }
  write_word_to_dynamic_array((int)param_2,0,uVar1);
  return;
}
