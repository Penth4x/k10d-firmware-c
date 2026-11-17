/* @k10d set_bit15_of_word_at_offset_0x18 @ 0x10441f92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit15_of_word_at_offset_0x18(int param_1)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0x7fff | 0x8000;
  return;
}
