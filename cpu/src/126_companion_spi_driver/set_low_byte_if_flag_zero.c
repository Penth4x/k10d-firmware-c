/* @k10d set_low_byte_if_flag_zero @ 0x1044c8f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_low_byte_if_flag_zero(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = check_ram40050004_bits_15_14();
  if ((iVar1 == 0) && (param_2 != 0)) {
    uRam40050046 = uRam40050046 & 0xff00 | (ushort)param_2 & 0xff;
    uVar2 = 1;
  }
  return uVar2;
}
