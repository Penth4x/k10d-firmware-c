/* @k10d sci_strobe_ctrl @ 0x1043c1b4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed strobe_control_bits)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Updates specific bits in a 16-bit control word at offset 0x18 of an object based on two
 *   input parameters.
 * summary:
 *   The function performs a bitwise operation on the 16-bit value stored at param_1 + 0x18.
 *   It uses param_2 and param_3 to determine which bits to clear and set, with a fixed mask
 *   of 0x84 (bits 2 and 7) influencing the logic. No other memory locations are accessed
 *   and no functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sci_strobe_ctrl(void *param_1,ushort param_2,ushort param_3)

{
  **(ushort **)((int)param_1 + 0x18) =
       **(ushort **)((int)param_1 + 0x18) & ((param_3 | 0x84) ^ 0xffff) |
       (param_2 | 0x84) & (param_3 | 0x84);
  return;
}
