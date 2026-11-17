/* @k10d call_single_helper_104185ec @ 0x104185ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls debug_mode_wrapper and returns its result unchanged.
 * summary:
 *   A one-line wrapper that invokes debug_mode_wrapper with no arguments and returns the
 *   value in r4. No local state is modified and no other side effects are visible in this
 *   function. The role of debug_mode_wrapper is unknown, so the wrapper's semantic role
 *   cannot be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_104185ec(void)

{
  uint32_t uVar1;
  
  uVar1 = debug_mode_wrapper();
  return uVar1;
}
