/* @k10d debug_flag_reader_0x18 @ 0x1043595e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_magic_at_offset_0x18)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores a value into a struct field and checks if the field at offset 0x18 equals the
 *   magic constant 0x5aa5a55a.
 * summary:
 *   The function writes the value in register r0 to the memory location pointed to by (r13
 *   + param_1). It then reads the 32-bit value at offset 0x18 from param_1 and compares it
 *   to 0x5aa5a55a. The result of this comparison is returned as a boolean. The constant
 *   0x5aa5a55a is a common magic number used for validation or state checking.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool debug_flag_reader_0x18(int param_1)

{
  uint32_t r0_in;
  int r13_in;
  
  *(uint32_t *)(r13_in + param_1) = r0_in;
  return *(int *)(param_1 + 0x18) == 0x5aa5a55a;
}
