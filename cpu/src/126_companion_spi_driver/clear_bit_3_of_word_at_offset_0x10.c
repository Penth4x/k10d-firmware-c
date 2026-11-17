/* @k10d clear_bit_3_of_word_at_offset_0x10 @ 0x10441886
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_3_of_word_at_offset_0x10(int param_1)

{
  **(byte **)(param_1 + 0x10) = **(byte **)(param_1 + 0x10) & 0xf7;
  return;
}
