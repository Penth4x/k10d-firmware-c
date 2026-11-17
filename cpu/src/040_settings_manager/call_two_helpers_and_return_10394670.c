/* @k10d call_two_helpers_and_return_10394670 @ 0x10394670
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then calls a second helper and returns its result.
 * summary:
 *   The function performs no local computation. It invokes
 *   get_or_create_sram_object_1040a240 for side effects, then invokes
 *   call_single_helper_1040a63a and returns the value in r4. No camera subsystem is
 *   identifiable from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_10394670(void)

{
  uint32_t uVar1;
  
  get_or_create_sram_object_1040a240();
  uVar1 = call_single_helper_1040a63a();
  return uVar1;
}
