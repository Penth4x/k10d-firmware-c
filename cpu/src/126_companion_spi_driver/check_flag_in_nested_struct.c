/* @k10d check_flag_in_nested_struct @ 0x1044b310
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads a single bit from a byte in a struct pointed to by a field at offset 8 of
 *   param_1.
 * summary:
 *   The function clears the global DAT_00000300 to 0. It then dereferences the pointer
 *   stored at offset 8 of param_1, adds 0x2f to that address, and checks if bit 0 of the
 *   byte at that location is set. The result is returned as a boolean. No camera-specific
 *   subsystems or MMIO regions are accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_flag_in_nested_struct(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(byte *)(*(int *)((int)param_1 + 8) + 0x2f) & 1) != 0;
}
