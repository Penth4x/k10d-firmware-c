/* @k10d check_bit_19_of_nested_ptr @ 0x1044ac66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears a global flag and returns true if bit 19 of a value at offset 0x24 in a nested
 *   structure is clear.
 * summary:
 *   The function first sets the global variable _DAT_00000300 to 0. It then dereferences
 *   param_1 + 8 to get a pointer, adds 0x24 to that pointer, and reads a 32-bit value. It
 *   checks if bit 19 (0x80000) of that value is 0, returning true if it is clear and false
 *   if it is set. No other callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit_19_of_nested_ptr(void *param_1)

{
  _DAT_00000300 = 0;
  return (*(uint *)(*(int *)((int)param_1 + 8) + 0x24) & 0x80000) == 0;
}
