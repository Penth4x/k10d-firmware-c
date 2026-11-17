/* @k10d call_subroutine_with_offset_0x60 @ 0x104b4a2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x60 of the input structure and passes it to a helper
 *   function.
 * summary:
 *   The function extracts a 32-bit value from the memory location at param_1 + 0x60. It
 *   then calls call_helper_with_two_args_104b55d8 with this extracted value as its
 *   argument. The return value of call_helper_with_two_args_104b55d8 is returned directly
 *   by this function. The specific role of the data at offset 0x60 and the helper function
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_0x60(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = call_helper_with_two_args_104b55d8(*(uint32_t *)(param_1 + 0x60));
  return uVar1;
}
