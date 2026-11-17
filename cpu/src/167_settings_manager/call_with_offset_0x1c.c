/* @k10d call_with_offset_0x1c @ 0x10477f70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x1c of the input object and passes it to a helper
 *   function.
 * summary:
 *   This function extracts a 32-bit value from the memory location at param_1 + 0x1c. It
 *   then calls check_two_condition_flags_104733da with that value as its argument and
 *   returns the result. The specific role of the object or the helper function is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_offset_0x1c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_two_condition_flags_104733da(*(uint32_t *)(param_1 + 0x1c));
  return uVar1;
}
