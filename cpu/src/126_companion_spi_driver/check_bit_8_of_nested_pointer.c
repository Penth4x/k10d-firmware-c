/* @k10d check_bit_8_of_nested_pointer @ 0x1044b5ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit_8_of_nested_pointer(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(ushort *)(*(int *)((int)param_1 + 8) + 0x42) & 0x100) != 0;
}
