/* @k10d clear_status_bit_mask @ 0x1044b50a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears specific bits in a 16-bit status field within a struct and resets a global flag.
 * summary:
 *   The function first sets the global variable _DAT_00000300 to 0. It then accesses a
 *   16-bit value at offset 0x3a within a sub-structure pointed to by the field at offset 8
 *   of param_1. It performs a bitwise AND with the inverse of the lower 9 bits of param_2
 *   (param_2 & 0x1ff ^ 0xffff), effectively clearing the bits specified in param_2 within
 *   that status field. No other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_status_bit_mask(void *param_1,ushort param_2)

{
  _DAT_00000300 = 0;
  *(ushort *)(*(int *)((int)param_1 + 8) + 0x3a) =
       *(ushort *)(*(int *)((int)param_1 + 8) + 0x3a) & (param_2 & 0x1ff ^ 0xffff);
  return;
}
