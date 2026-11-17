/* @k10d check_status_is_zero_1047fade @ 0x1047fade
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper and returns true if the helper's result is zero.
 * summary:
 *   The function invokes allocate_lens_fw_buffer_10541184 and compares its return value to
 *   0. It returns a boolean indicating whether the called function returned zero. No other
 *   side effects or memory accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_is_zero_1047fade(void)

{
  int iVar1;
  
  iVar1 = allocate_lens_fw_buffer_10541184();
  return iVar1 == 0;
}
