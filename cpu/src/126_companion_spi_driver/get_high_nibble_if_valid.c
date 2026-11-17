/* @k10d get_high_nibble_if_valid @ 0x1044b7f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_high_nibble_if_valid(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x40) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(uint)*(byte *)(param_1 + 10) >> 4;
  }
  return iVar1;
}
