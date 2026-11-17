/* @k10d clear_bit_5_of_word_at_offset_0x2c @ 0x1043eda8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_5_of_word_at_offset_0x2c(int param_1)

{
  **(ushort **)(param_1 + 0x2c) = **(ushort **)(param_1 + 0x2c) & 0xffef;
  return;
}
