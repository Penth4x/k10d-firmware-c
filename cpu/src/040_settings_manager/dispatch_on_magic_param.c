/* @k10d dispatch_on_magic_param @ 0x1039ab8c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the result of map_index_to_0x50b0003_offset if param_2 equals 0x50b0000,
 *   otherwise returns 0.
 * summary:
 *   The function checks if the second argument matches the constant 0x50b0000. If it does,
 *   it calls map_index_to_0x50b0003_offset and returns its result. If not, it returns 0.
 *   The first argument is unused. The specific role of map_index_to_0x50b0003_offset and
 *   the meaning of the constant are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_magic_param(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x50b0000) {
    uVar1 = map_index_to_0x50b0003_offset(__frv_reg_unset(4));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
