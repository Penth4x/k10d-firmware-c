/* @k10d set_flag_bits_in_struct_1044b47e @ 0x1044b47e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_bits_in_struct_1044b47e(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x36) =
       *(ushort *)(*(int *)((int)param_1 + 8) + 0x36) | param_2 & 0x1ff;
  return;
}
