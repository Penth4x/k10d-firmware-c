/* @k10d set_byte_bit6 @ 0x1044b916
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_bit6(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *param_1 & 0xbf;
  }
  else {
    bVar1 = *param_1 | 0x40;
  }
  *param_1 = bVar1;
  return;
}
