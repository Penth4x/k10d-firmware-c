/* @k10d set_low_three_bits_of_word @ 0x104420a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_low_three_bits_of_word(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xfff8 | param_2 & 7;
  return;
}
