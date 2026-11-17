/* @k10d check_flag_bit_in_nested_struct @ 0x1044ad52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_flag_bit_in_nested_struct(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(uint *)(*(int *)((int)param_1 + 8) + 0x24) & 1) == 0;
}
