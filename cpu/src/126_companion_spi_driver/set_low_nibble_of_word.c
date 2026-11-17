/* @k10d set_low_nibble_of_word @ 0x10441f7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_low_nibble_of_word(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x10) = **(ushort **)(param_1 + 0x10) & 0xfff0 | param_2 & 0xf;
  return;
}
