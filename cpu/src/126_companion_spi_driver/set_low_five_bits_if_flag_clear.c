/* @k10d set_low_five_bits_if_flag_clear @ 0x1044c8b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_low_five_bits_if_flag_clear(uint32_t param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = check_ram40050004_bits_15_14();
  if (iVar1 == 0) {
    uRam40050044 = uRam40050044 & 0xffe0 | param_2 & 0x1f;
  }
  return iVar1 == 0;
}
