/* @k10d set_bits_10_11_in_word @ 0x10441f2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_10_11_in_word(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x10) = **(ushort **)(param_1 + 0x10) & 0xf3ff | param_2 & 0xc00;
  return;
}
