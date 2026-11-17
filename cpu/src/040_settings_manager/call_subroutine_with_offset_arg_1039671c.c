/* @k10d call_subroutine_with_offset_arg_1039671c @ 0x1039671c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an indirect function pointer at 0x1039bd74 with param_1+0xc and returns its
 *   result.
 * summary:
 *   The function adds 0xc to its single integer argument and passes it to a code pointer
 *   located at 0x1039bd74. It returns the value produced by that indirect call. No other
 *   side effects or memory accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_arg_1039671c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1039bd74/*ROM*/)(param_1 + 0xc);
  return uVar1;
}
