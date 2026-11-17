/* @k10d set_dat_40128200_flag @ 0x1044d882
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes 0x4000 or 0 to the global DAT_40128200 based on whether param_2 is zero.
 * summary:
 *   The function takes two parameters but only uses param_2 as a boolean condition. If
 *   param_2 is 0, it clears the global DAT_40128200; otherwise, it sets it to 0x4000. No
 *   other side effects or callees are present. The role of DAT_40128200 is unknown from
 *   this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_40128200_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40128200 = 0;
  }
  else {
    _DAT_40128200 = 0x4000;
  }
  return;
}
