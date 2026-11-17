/* @k10d disp_cfg_40080000 @ 0x100f0302
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_four_bytes_to_mmio_block)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes four 16-bit values (0, 0x30, 0, 0) to consecutive MMIO addresses starting at
 *   0x40080000.
 * summary:
 *   The function performs four direct memory-mapped I/O writes to the 0x40080000 region. It
 *   sets the first word to 0, the second to 0x30, and the third and fourth to 0. No callees
 *   are invoked, and the specific hardware block at 0x40080000 is not identified in the
 *   project brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void disp_cfg_40080000(void)

{
  _DAT_40080000 = 0;
  _DAT_40080002 = 0x30;
  _DAT_40080004 = 0;
  _DAT_40080006 = 0;
  return;
}
