/* @k10d clear_struct_fields_and_subblock @ 0x10478de2
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes two 4-byte fields at offsets 0xea44/0xea4c and clears a 0xea24-byte sub-block at
 *   offset 0x20.
 * summary:
 *   The function writes 0 to two 32-bit fields at param_1+0xea44 and param_1+0xea4c, then
 *   calls fill_byte_array with (param_1+0x20, 0, 0xea24), which appears to zero or
 *   initialize a large sub-structure. No camera-specific MMIO or subsystem behavior is
 *   visible in the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_fields_and_subblock(int param_1)

{
  *(uint32_t *)(param_1 + 0xea44) = 0;
  *(uint32_t *)(param_1 + 0xea4c) = 0;
  fill_byte_array((void *)(param_1 + 0x20),0,0xea24);
  return;
}
