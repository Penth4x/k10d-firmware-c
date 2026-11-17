/* @k10d set_bit7_if_gate_zero @ 0x1044c32e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_bit7_if_gate_zero(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = check_ram40050004_bits_15_14();
  if (iVar1 == 0) {
    uRam40050002 = uRam40050002 & 0xff7f | (ushort)(param_2 != 0) << 7;
  }
  return iVar1 == 0;
}
