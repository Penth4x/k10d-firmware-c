/* @k10d set_dat_40100b00_flag @ 0x1044ec48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_40100b00_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40100b00 = 0;
  }
  else {
    _DAT_40100b00 = 0x8000;
  }
  return;
}
