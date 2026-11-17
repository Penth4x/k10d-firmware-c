/* @k10d test_flag_set @ 0x104398c0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_flag_bit_set)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if a specific bit in a flag byte is set, using a mask byte at offset 0x1c.
 * summary:
 *   The function takes a pointer to a structure, reads a byte at offset 0x10 (the flag
 *   value) and a byte at offset 0x1c (the mask). It performs a bitwise AND between these
 *   two values and returns a boolean indicating if the result is non-zero. This is a
 *   standard pattern for checking if a specific bit or set of bits is active in a status or
 *   control word.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_set(void *param_1)

{
                    /* Purpose: Test flag set. Returns true if bit in [obj+0x10] & mask [obj+0x1c]
                       is SET.
                       Params: param_1 = object pointer.
                       Returns: bool. */
  return (**(byte **)((int)param_1 + 0x10) & *(byte *)((int)param_1 + 0x1c)) != 0;
}
