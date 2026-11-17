/* @k10d initialize_6b000000_block @ 0x100f02bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Clears four low-address globals and writes specific 32-bit constants to the 0x6b000000
 *   memory region.
 * summary:
 *   The function sets DAT_00000038 through DAT_00000041 to zero. It then writes a sequence
 *   of values (0x7000000, 0x3000000, 0x3000000, 0x7000000, 0x1f000000, 0x7000000) to
 *   consecutive 32-bit offsets starting at 0x6b000000. The role of the 0x6b000000 region is
 *   not defined in the project brief, and the specific constants do not clearly map to a
 *   known camera subsystem without further context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_6b000000_block(void)

{
  DAT_00000041 = 0;
  DAT_00000040 = 0;
  DAT_00000039 = 0;
  DAT_00000038 = 0;
  _DAT_6b000000 = 0x7000000;
  _DAT_6b000004 = 0x3000000;
  _DAT_6b000008 = 0x3000000;
  _DAT_6b00000c = 0x7000000;
  _DAT_6b000010 = 0x1f000000;
  _DAT_6b000014 = 0x7000000;
  return;
}
