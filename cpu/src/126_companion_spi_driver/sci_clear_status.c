/* @k10d sci_clear_status @ 0x1043c08c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clear_status_bits_2_and_7)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bits 2 and 7 of the 16-bit value at offset 0x18 in the object pointed to by
 *   param_1.
 * summary:
 *   The function performs a bitwise AND with 0xff7b on the ushort located at param_1 +
 *   0x18. This operation clears bit 2 (value 0x0004) and bit 7 (value 0x0080) while
 *   preserving all other bits. No other memory locations are accessed and no functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sci_clear_status(int param_1)

{
  **(ushort **)(param_1 + 0x18) = **(ushort **)(param_1 + 0x18) & 0xff7b;
  return;
}
