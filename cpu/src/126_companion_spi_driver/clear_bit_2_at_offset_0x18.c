/* @k10d clear_bit_2_at_offset_0x18 @ 0x1043c07c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_2_at_offset_0x18(int param_1)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xfffb;
  return;
}
