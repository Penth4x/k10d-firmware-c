/* @k10d set_flag_and_call_helper_100f09ba @ 0x100f09ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_100f09ba(void)

{
  DAT_50000106 = 0x80;
  set_error_flag_and_halt(10);
  return;
}
