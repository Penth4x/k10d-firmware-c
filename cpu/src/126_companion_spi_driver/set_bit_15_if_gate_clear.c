/* @k10d set_bit_15_if_gate_clear @ 0x1044c78a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 15 of uRam40050040 based on param_2 when a gate function returns
 *   zero.
 * summary:
 *   Calls check_ram40050004_bits_15_14 as a gate; if it returns 0, updates bit 15 of
 *   uRam40050040 to reflect whether param_2 is zero. Returns true when the gate is clear
 *   (iVar1 == 0). The role of uRam40050040 and check_ram40050004_bits_15_14 is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_bit_15_if_gate_clear(uint32_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = check_ram40050004_bits_15_14();
  if (iVar1 == 0) {
    uRam40050040 = uRam40050040 & 0x7fff | (ushort)(param_2 == 0) << 0xf;
  }
  return iVar1 == 0;
}
