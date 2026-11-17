/* @k10d debug_flag_writer_0x08 @ 0x10435898
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_magic_to_offset_8)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit magic constant (0x5aa5a55a or 0xffffffff) to the 8th byte of the object
 *   pointed to by param_1.
 * summary:
 *   The function takes a pointer (param_1) and a flag (param_2). If the flag is zero, it
 *   writes 0xffffffff to the memory location at param_1 + 8; otherwise, it writes the
 *   pattern 0x5aa5a55a. This is a common idiom for initializing or invalidating a data
 *   structure header or sentinel value. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void debug_flag_writer_0x08(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x5aa5a55a;
  }
  *(uint32_t *)(param_1 + 8) = uVar1;
  return;
}
