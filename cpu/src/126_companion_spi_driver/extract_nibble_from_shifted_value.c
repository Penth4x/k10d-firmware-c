/* @k10d extract_nibble_from_shifted_value @ 0x10446fe8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_nibble_from_shifted_value(uint32_t param_x0)
{
  int iVar1;
  
  iVar1 = read_byte_at_offset_14((uint32_t)param_x0);
  return iVar1 >> 4 & 0xf;
}
