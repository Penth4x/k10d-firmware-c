/* @k10d call_two_helpers_and_return_second @ 0x103945ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper, then calls a second helper and returns its result.
 * summary:
 *   The function performs no local computation. It first calls
 *   get_or_create_sram_object_1040a240, discarding its return value, then calls
 *   init_object_subsystem_1040a438 and returns that value in r4. Without names or behavior
 *   for the callees, the specific subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_second(void)

{
  uint32_t uVar1;
  
  get_or_create_sram_object_1040a240();
  uVar1 = init_object_subsystem_1040a438(__frv_reg_unset(4));
  return uVar1;
}
