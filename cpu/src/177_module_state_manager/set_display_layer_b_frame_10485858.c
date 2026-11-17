/* @k10d set_display_layer_b_frame_10485858 @ 0x10485858
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_display_layer_b_frame_10485858(void)

{
  write_three_config_values(_DAT_800102bc/*SDRAM*/,uRam800102b0);
  display_set_layer_b_frame(_DAT_800102bc/*SDRAM*/,_DAT_800102a0/*SDRAM*/);
  return;
}
