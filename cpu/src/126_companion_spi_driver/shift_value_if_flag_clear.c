/* @k10d shift_value_if_flag_clear @ 0x10449a62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int shift_value_if_flag_clear(void *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0xf6) == '\0') {
    param_2 = param_2 << 9;
  }
  return param_2;
}
