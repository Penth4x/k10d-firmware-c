/* @k10d set_high_bit_of_read_value @ 0x1048f9be
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Reads a value from an unknown helper and sets its most significant bit before
 *   returning.
 * summary:
 *   Calls read_dat_40040328_masked to obtain a 32-bit value. Performs a bitwise OR with
 *   0x80000000 to force the sign bit (bit 31) to 1. Returns the modified value. The
 *   specific subsystem or register accessed by the callee is not identifiable from this
 *   function's code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint set_high_bit_of_read_value(uint32_t param_x0)

{
  uint uVar1;
  
  uVar1 = read_dat_40040328_masked();
  return uVar1 | 0x80000000/*SDRAM*/;
}
