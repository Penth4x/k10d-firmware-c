/* @k10d set_bit3_of_word_at_offset_0x20 @ 0x104405ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit3_of_word_at_offset_0x20(void *param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)((int)param_1 + 0x20);
  if (param_2 == 0x20) {
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    *puVar1 = *puVar1 | 8;
  }
  return;
}
