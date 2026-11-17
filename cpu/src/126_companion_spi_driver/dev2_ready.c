/* @k10d dev2_ready @ 0x1043fd24
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_bit0_of_ptr_at_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 0 of the byte pointed to by *(param_1 + 0x1c) is set.
 * summary:
 *   The function dereferences the pointer stored at offset 0x1c of the object passed in
 *   param_1 and tests bit 0 of the resulting byte. It has no callees and performs no
 *   writes. The prior note suggesting this is an EEPROM ready poll at 0x5c005000 is not
 *   supported by the pseudocode, which uses an indirect pointer rather than a fixed MMIO
 *   address.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dev2_ready(int param_1)

{
  return (**(byte **)(param_1 + 0x1c) & 1) != 0;
}
