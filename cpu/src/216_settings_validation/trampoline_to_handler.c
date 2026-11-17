/* @k10d trampoline_to_handler @ 0x104b4da4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Forwards execution to a single callee function.
 * summary:
 *   This function consists solely of a call to call_subroutine_with_offset_5c_104b4f40 and
 *   a return. It acts as a one-line trampoline or wrapper, passing the value in r8
 *   (unaff_r8) to the callee. No other logic, memory access, or state modification is
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void trampoline_to_handler(void)

{
  int caller_r8;
  
  call_subroutine_with_offset_5c_104b4f40(caller_r8);
  return;
}
