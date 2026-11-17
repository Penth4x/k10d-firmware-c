/* @k10d gate176_bit0 @ 0x1044bef0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_bit0_of_gate176)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 0 of the value returned by gate176_getter is set.
 * summary:
 *   Calls gate176_getter with param_1 and tests the least significant bit of the returned
 *   byte. The caller sd_select_bus_width uses this result as a branch condition during SD
 *   card initialization. The role of gate176_getter is unknown, so the specific meaning of
 *   bit 0 cannot be determined from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool gate176_bit0(void *param_1)

{
  byte bVar1;
  
  bVar1 = gate176_getter(param_1);
  return (bVar1 & 1) != 0;
}
