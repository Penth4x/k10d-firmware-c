/* @k10d debug_flag_writer_0x14 @ 0x10435948
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_magic_word_to_offset_0x18)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit magic constant (0x5aa5a55a or 0xffffffff) to offset 0x18 of a
 *   structure.
 * summary:
 *   The function takes a base pointer and a flag. If the flag is zero, it writes 0xffffffff
 *   to the memory location at base+0x18; otherwise, it writes the pattern 0x5aa5a55a. This
 *   is a common idiom for initializing or invalidating a data structure field with a known
 *   signature or sentinel value. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void debug_flag_writer_0x14(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x5aa5a55a;
  }
  *(uint32_t *)(param_1 + 0x18) = uVar1;
  return;
}
