/* @k10d extract_bits_5_to_7_from_byte @ 0x1044bc3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int extract_bits_5_to_7_from_byte(byte *param_1)

{
  int iVar1;
  
  iVar1 = extract_high_two_bits(param_1);
  if (iVar1 == 0) {
    iVar1 = (int)(uint)param_1[9] >> 5;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
