/* @k10d call_with_global_arg @ 0x10485842
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_with_global_arg(void)

{
  call_two_param_helpers(_DAT_800102bc/*SDRAM*/);
  return;
}
