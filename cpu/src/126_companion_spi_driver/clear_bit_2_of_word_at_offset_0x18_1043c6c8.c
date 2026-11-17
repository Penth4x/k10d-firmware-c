/* @k10d clear_bit_2_of_word_at_offset_0x18_1043c6c8 @ 0x1043c6c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_2_of_word_at_offset_0x18_1043c6c8(int param_1)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xfffb;
  return;
}
