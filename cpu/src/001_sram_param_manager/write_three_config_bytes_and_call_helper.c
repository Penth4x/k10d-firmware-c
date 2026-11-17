/* @k10d write_three_config_bytes_and_call_helper @ 0x100f094a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes three specific byte values to consecutive DAT globals and calls a helper with
 *   argument 10.
 * summary:
 *   The function sets DAT_50000306 to 0, DAT_50000206 to 0xf0, and DAT_50000106 to 0xe0. It
 *   then calls set_error_flag_and_halt with the integer argument 10. The roles of the DAT
 *   globals and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_config_bytes_and_call_helper(void)

{
  DAT_50000306 = 0;
  DAT_50000206 = 0xf0;
  DAT_50000106 = 0xe0;
  set_error_flag_and_halt(10);
  return;
}
