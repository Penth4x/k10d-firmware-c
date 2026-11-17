/* @k10d set_bit_15_if_check_passes @ 0x1044c290
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 15 of a 16-bit register at 0x40050000 based on param_2, if a status
 *   check returns zero.
 * summary:
 *   Calls check_ram40050004_bits_15_14 to perform a status check. If the check returns 0,
 *   it modifies the 16-bit value at 0x40050000 by clearing bit 15 and setting it if param_2
 *   is non-zero. Returns true if the check passed (returned 0), false otherwise. The
 *   register at 0x40050000 is not listed in the verified memory regions, so its specific
 *   role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_bit_15_if_check_passes(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = check_ram40050004_bits_15_14();
  if (iVar1 == 0) {
    uRam40050000 = uRam40050000 & 0x7fff | (ushort)(param_2 != 0) << 0xf;
  }
  return iVar1 == 0;
}
