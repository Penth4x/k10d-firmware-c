/* @k10d write_byte_and_call_helper_100f098c @ 0x100f098c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes 0x80 to DAT_50000106 and calls set_error_flag_and_halt with argument 10.
 * summary:
 *   The function sets the global DAT_50000106 to the value 0x80. It then invokes the callee
 *   set_error_flag_and_halt, passing the integer constant 10 as the first argument. No
 *   other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_and_call_helper_100f098c(void)

{
  DAT_50000106 = 0x80;
  set_error_flag_and_halt(10);
  return;
}
