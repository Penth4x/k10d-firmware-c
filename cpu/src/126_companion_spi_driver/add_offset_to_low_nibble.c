/* @k10d add_offset_to_low_nibble @ 0x10446fd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int add_offset_to_low_nibble(void)

{
  uint uVar1;
  
  uVar1 = read_byte_at_offset_14(__frv_reg_unset(4));
  return (uVar1 & 0xf) + 0x7cd;
}
