/* @k10d clear_flag_in_struct_field @ 0x1044b43a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_flag_in_struct_field(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x38) =
       *(ushort *)(*(int *)((int)param_1 + 8) + 0x38) & (param_2 & 0x81ff ^ 0xffff);
  return;
}
