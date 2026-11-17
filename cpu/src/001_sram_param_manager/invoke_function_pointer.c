/* @k10d invoke_function_pointer @ 0x100f1d1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void invoke_function_pointer(uint32_t param_x0)

{
  (*_DAT_800482dc/*SDRAM*/)();
  return;
}
