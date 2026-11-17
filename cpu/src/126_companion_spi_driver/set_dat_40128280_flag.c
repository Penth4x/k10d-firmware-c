/* @k10d set_dat_40128280_flag @ 0x1044e102
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes either 0 or 0x1000 to the global variable _DAT_40128280 based on the boolean
 *   value of param_2.
 * summary:
 *   The function checks if param_2 is zero. If it is, it sets _DAT_40128280 to 0;
 *   otherwise, it sets it to 0x1000. There are no other side effects or callees. The role
 *   of _DAT_40128280 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_40128280_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40128280 = 0;
  }
  else {
    _DAT_40128280 = 0x1000;
  }
  return;
}
