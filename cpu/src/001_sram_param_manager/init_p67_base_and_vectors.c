/* @k10d init_p67_base_and_vectors @ 0x100f0a70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_p67_base_and_vectors(void)

{
  _DAT_800482dc/*SDRAM*/ = &LAB_100f1d00;
  _DAT_800482d8/*SDRAM*/ = &LAB_100f1ce4;
  _DAT_800482d4/*SDRAM*/ = 0x67000000/*P67*/;
  return;
}
