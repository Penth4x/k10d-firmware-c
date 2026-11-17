/* @k10d gate176_bit2 @ 0x1044bede
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_bit2_of_byte)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 2 (value 4) is set in the byte returned by gate176_getter.
 * summary:
 *   Calls gate176_getter with param_1 and tests whether the result has bit 2 set. The
 *   callee's role is unknown, so the specific meaning of the bit cannot be determined from
 *   this function alone. The caller sd_select_bus_width uses this to check a capability
 *   bit, but that context is not visible here.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool gate176_bit2(void *param_1)

{
  byte bVar1;
  
  bVar1 = gate176_getter(param_1);
  return (bVar1 & 4) != 0;
}
