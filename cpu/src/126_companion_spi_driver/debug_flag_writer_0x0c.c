/* @k10d debug_flag_writer_0x0c @ 0x104358c4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_magic_to_offset_0xc)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit magic constant (0x5aa5a55a or 0xffffffff) to offset 0xc of a structure.
 * summary:
 *   The function takes a base pointer (param_1) and a flag (param_2). If param_2 is zero,
 *   it writes 0xffffffff to *(param_1 + 0xc); otherwise, it writes 0x5aa5a55a. The constant
 *   0x5aa5a55a is a common pattern used for memory initialization or as a 'magic'
 *   identifier for valid data structures. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void debug_flag_writer_0x0c(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x5aa5a55a;
  }
  *(uint32_t *)(param_1 + 0xc) = uVar1;
  return;
}
