/* @k10d init_mmio_ctrl_regs @ 0x1043957a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_four_bytes_to_mmio_block)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes four 16-bit values (0, 0x30, 0, 0) to consecutive MMIO addresses starting at
 *   0x40080000.
 * summary:
 *   The function performs four 16-bit MMIO writes to the 0x40080000-0x40080006 range. The
 *   address 0x40080000 is not listed in the Tier 1 memory map, so the specific hardware
 *   block is unknown. It is called from 0x10008000, likely during early initialization. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_mmio_ctrl_regs(void)

{
                    /* Purpose: Initialize MMIO control registers. Sets 0x40080002=0x30 (control),
                       others to 0.
                       Returns: void. */
  _DAT_40080000 = 0;
  _DAT_40080002 = 0x30;
  _DAT_40080004 = 0;
  _DAT_40080006 = 0;
  return;
}
