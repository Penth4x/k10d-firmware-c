/* @k10d set_flag_from_bool_104706f6 @ 0x104706f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 161_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Converts a boolean parameter to a 0/2 value and passes it to a helper function.
 * summary:
 *   The function checks if param_2 is zero. If it is, it sets a local variable to 0;
 *   otherwise, it sets it to 2. It then calls call_helper_with_offset_args_10463110 with
 *   the value at offset 0x2c of the object pointed to by param_1 and the computed local
 *   variable. The specific role of call_helper_with_offset_args_10463110 is unknown, but
 *   the mechanical behavior is a simple conditional assignment and function call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_bool_104706f6(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  call_helper_with_offset_args_10463110(*(uint32_t *)(param_1 + 0x2c),uVar1);
  return;
}
