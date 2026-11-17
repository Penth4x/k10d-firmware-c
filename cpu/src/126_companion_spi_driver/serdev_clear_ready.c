/* @k10d serdev_clear_ready @ 0x1043fd14
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clear_bit0_of_byte_at_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bit 0 of the byte stored at offset 0x1c in the object pointed to by param_1.
 * summary:
 *   The function performs a single in-place bitwise AND with 0xfe on the byte located at
 *   param_1 + 0x1c, effectively clearing the least significant bit. It has no callees and
 *   no other side effects. The role of the object and the specific meaning of this bit are
 *   not determinable from the provided pseudocode and caller addresses alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void serdev_clear_ready(int param_1)

{
  **(byte **)(param_1 + 0x1c) = **(byte **)(param_1 + 0x1c) & 0xfe;
  return;
}
