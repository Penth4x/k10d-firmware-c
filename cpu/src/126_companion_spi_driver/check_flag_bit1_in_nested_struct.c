/* @k10d check_flag_bit1_in_nested_struct @ 0x1044b1bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_flag_bit1_in_nested_struct(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(ushort *)(*(int *)((int)param_1 + 8) + 0x2c) & 2) != 0;
}
