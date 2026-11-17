/* @k10d set_bits_8_9_in_word @ 0x10441f46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_8_9_in_word(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x10) = **(ushort **)(param_1 + 0x10) & 0xfcff | param_2 & 0x300;
  return;
}
