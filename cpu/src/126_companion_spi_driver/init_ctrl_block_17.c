/* @k10d init_ctrl_block_17 @ 0x10439638
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_three_byte_state)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes three specific constant values to three consecutive memory locations.
 * summary:
 *   The function sets DAT_000003e0 to 0xc0, DAT_000003e7 to 3, and DAT_000003e3 to 0. It
 *   has no arguments and no return value. The specific role of these memory locations is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_ctrl_block_17(void)

{
                    /* Purpose: Initialize control block (variant 17). Sets DAT_000003e0=0xc0,
                       DAT_000003e7=3.
                       Returns: void. */
  DAT_000003e0 = 0xc0;
  DAT_000003e7 = 3;
  DAT_000003e3 = 0;
  return;
}
