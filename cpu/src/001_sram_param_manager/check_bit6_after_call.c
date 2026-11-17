/* @k10d check_bit6_after_call @ 0x100f08a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function with argument 10, then returns whether bit 6 of a global flag
 *   is clear.
 * summary:
 *   The function invokes set_error_flag_and_halt with the constant 10. It then reads the
 *   global variable DAT_50000107 and tests bit 6 (mask 0x40). The function returns true if
 *   that bit is 0, false otherwise. The specific role of the global flag and the callee is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_bit6_after_call(void)

{
  set_error_flag_and_halt(10);
  return (DAT_50000107 & 0x40) == 0;
}
