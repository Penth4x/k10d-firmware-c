/* @k10d update_ram_40050042_low_bits @ 0x1044c81a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Merges the lower 12 bits of param_2 into RAM 0x40050042 if a status check passes.
 * summary:
 *   Calls check_ram40050004_bits_15_14 to check a condition. If the result is zero, it
 *   performs a read-modify-write on the global uRam40050042, preserving the upper 4 bits
 *   and replacing the lower 12 bits with the value from param_2 (masked with 0xffe).
 *   Returns true if the initial check passed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool update_ram_40050042_low_bits(uint32_t param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = check_ram40050004_bits_15_14();
  if (iVar1 == 0) {
    uRam40050042 = uRam40050042 & 0xf000 | param_2 & 0xffe;
  }
  return iVar1 == 0;
}
