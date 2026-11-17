/* @k10d init_spi_register_table_15 @ 0x10439414
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_register_bank_0x50000000)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of initialization values to memory-mapped registers in the
 *   0x50000000 block.
 * summary:
 *   The function performs a series of direct writes to global variables mapped to the
 *   0x50000000 address range, setting specific values for registers at offsets 0x100-0x10f,
 *   0x200-0x20f, and 0x300-0x30f. It does not call any other functions and returns void.
 *   The specific hardware role of this register block is not identified in the project
 *   brief or pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104394dc) overlaps instruction at (ram,0x104394da)
    */
/* WARNING: Removing unreachable block (ram,0x1043945a) */
/* WARNING: Removing unreachable block (ram,0x1043945c) */
/* WARNING: Removing unreachable block (ram,0x104394dc) */
/* WARNING: Removing unreachable block (ram,0x104394de) */

void init_spi_register_table_15(void)

{
                    /* Purpose: Initialize SPI register table (variant 15). Sets up SPI
                       configuration registers for CCD timing IC.\nPattern: DAT_500001XX = addr,
                       DAT_500002XX = data, DAT_500003XX = control.\nReturns: void. */
  DAT_50000109 = 0;
  DAT_50000209 = 5;
  DAT_50000309 = 4;
  DAT_50000100 = 0;
  DAT_50000200 = 0;
  DAT_50000301 = 0xf;
  DAT_50000201 = 0x70;
  DAT_50000101 = 0;
  DAT_50000102 = 0;
  DAT_50000202 = 0xef;
  DAT_50000302 = 0xf7;
  DAT_50000103 = 0;
  DAT_50000203 = 0xff;
  DAT_50000303 = 0;
  DAT_50000104 = 0;
  DAT_50000204 = 0x7f;
  DAT_50000304 = 0;
  DAT_50000105 = 0;
  DAT_50000205 = 0xfe;
  DAT_50000305 = 0xec;
  DAT_50000106 = 0;
  DAT_50000206 = 0xe0;
  DAT_50000306 = 0x10;
  DAT_50000107 = 0;
  DAT_50000207 = 0x1f;
  DAT_50000108 = 0;
  DAT_50000208 = 0x7e;
  DAT_50000308 = 0xfe;
  DAT_5000010a = 0;
  DAT_5000020a = 0xff;
  DAT_5000010b = 0;
  DAT_5000020b = 0xff;
  DAT_5000010c = 0;
  DAT_5000020c = 0xf3;
  DAT_5000030c = 0;
  DAT_5000010d = 0;
  DAT_5000020d = 0xff;
  DAT_5000010e = 4;
  DAT_5000020e = 0xff;
  DAT_5000010f = 0;
  DAT_5000020f = 1;
  return;
}
