/* @k10d clear_bit_10_of_word_at_offset_0x20 @ 0x10440536
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_10_of_word_at_offset_0x20(int param_1)

{
  **(ushort **)(param_1 + 0x20) = **(ushort **)(param_1 + 0x20) & 0xf7ff;
  return;
}
