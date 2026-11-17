/* @k10d set_bit_12_in_word_at_offset_0x18 @ 0x10442028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_12_in_word_at_offset_0x18(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x800;
  }
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xf7ff | uVar1;
  return;
}
