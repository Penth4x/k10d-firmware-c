/* @k10d dispatch_two_state_actions @ 0x104a1cf0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Checks a short flag and calls one of two handlers based on its value, returning 1 on
 *   match or 0 otherwise.
 * summary:
 *   The function reads the first short of param_2. If it equals 1, it calls
 *   write_four_bytes_from_flag; if it equals 2, it calls write_four_bytes_via_helper. In
 *   both matching cases it returns 1, and returns 0 for any other value. param_1 is unused
 *   in the visible logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_state_actions(uint32_t param_1,short *param_2)

{
  uint32_t uVar1;
  
  if (*param_2 == 1) {
    write_four_bytes_from_flag(__frv_reg_unset(4), __frv_reg_unset(5));
    uVar1 = 1;
  }
  else if (*param_2 == 2) {
    write_four_bytes_via_helper(__frv_reg_unset(4), __frv_reg_unset(5));
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
