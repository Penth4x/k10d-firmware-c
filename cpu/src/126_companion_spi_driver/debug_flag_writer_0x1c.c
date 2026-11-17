/* @k10d debug_flag_writer_0x1c @ 0x1043586c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_magic_to_offset_0x1c)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit magic constant (0x5aa5a55a or 0xffffffff) to offset 0x1c of a
 *   structure.
 * summary:
 *   The function takes a base pointer and a flag. If the flag is zero, it writes 0xffffffff
 *   to the memory location at base+0x1c; otherwise, it writes the pattern 0x5aa5a55a. This
 *   is a simple memory write operation with no other side effects or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void debug_flag_writer_0x1c(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x5aa5a55a;
  }
  *(uint32_t *)(param_1 + 0x1c) = uVar1;
  return;
}
