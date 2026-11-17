/* @k10d set_flag_bits_in_struct_1044b3ae @ 0x1044b3ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_bits_in_struct_1044b3ae(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x34) =
       *(ushort *)(*(int *)((int)param_1 + 8) + 0x34) | param_2 & 0x81ff;
  return;
}
