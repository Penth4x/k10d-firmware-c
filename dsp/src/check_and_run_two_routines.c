/* @k10d check_and_run_two_routines @ 0x000ea000
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls a check function and, if it returns non-zero, invokes two additional routines
 *   before returning the check result.
 * summary:
 *   The function calls compare_and_adjust_value_000ea04e and stores its return value. If
 *   that value is non-zero, it calls wait_for_ram_flag_bit0 and FUN_000ea14a in sequence.
 *   It returns a boolean indicating whether the initial check was non-zero. No memory
 *   writes or MMIO operations are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_run_two_routines(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = compare_and_adjust_value_000ea04e(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 != 0) {
    wait_for_ram_flag_bit0();
    FUN_000ea14a();
  }
  return iVar1 != 0;
}
