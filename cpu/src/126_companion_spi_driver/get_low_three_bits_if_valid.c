/* @k10d get_low_three_bits_if_valid @ 0x1044bc1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte get_low_three_bits_if_valid(byte *param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    bVar2 = param_1[8] & 7;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}
