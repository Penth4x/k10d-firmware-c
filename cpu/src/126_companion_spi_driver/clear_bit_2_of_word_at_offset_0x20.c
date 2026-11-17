/* @k10d clear_bit_2_of_word_at_offset_0x20 @ 0x104405fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_2_of_word_at_offset_0x20(void *param_1)

{
  **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) & 0xfffb;
  return;
}
