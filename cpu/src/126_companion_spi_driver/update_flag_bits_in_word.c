/* @k10d update_flag_bits_in_word @ 0x1043ef5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bits_in_word(void *param_1,ushort param_2,ushort param_3)

{
  **(ushort **)((int)param_1 + 0x2c) =
       **(ushort **)((int)param_1 + 0x2c) & ((param_3 | 0x10) ^ 0xffff) |
       (param_2 | 0x10) & (param_3 | 0x10);
  return;
}
