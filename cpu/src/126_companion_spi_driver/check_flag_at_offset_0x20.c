/* @k10d check_flag_at_offset_0x20 @ 0x1043fe72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 4 of the byte at offset 0x20 in the object pointed to by param_1 is
 *   set.
 * summary:
 *   The function performs a single memory read from param_1 + 0x20 and tests bit 4 (mask
 *   0x10). It has no callees and no side effects. The specific meaning of the flag is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_at_offset_0x20(int param_1)

{
  return (**(byte **)(param_1 + 0x20) & 0x10) != 0;
}
