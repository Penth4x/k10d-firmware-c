/* @k10d set_bits_3_4_in_word_10442090 @ 0x10442090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_3_4_in_word_10442090(int param_1,ushort param_2)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xffe7 | param_2 & 0x18;
  return;
}
