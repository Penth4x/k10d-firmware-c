/* @k10d initialize_four_config_blocks @ 0x100f018e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of 16 constants and pointers into four adjacent memory regions.
 * summary:
 *   The function performs a series of direct stores to globals at 0x600-0x610, 0x640-0x650,
 *   0x680-0x690, and 0x6f8. It sets 0x40 into four consecutive 4-byte slots in the 0x640
 *   block, writes distinct 24-bit values into the 0x680 block, and stores a pointer to
 *   0x10000165 along with three 32-bit values in the 0x600 block. No callees are invoked,
 *   and the specific role of these memory regions is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_four_config_blocks(void)

{
  _DAT_00000640 = 0x40;
  _DAT_00000680 = 0x5504400;
  _DAT_00000600 = (uintptr_t)(&DAT_10000165/*ROM*/);
  _DAT_00000648 = 0x40;
  _DAT_00000688 = 0x5504400;
  _DAT_00000608 = 0x20000165;
  _DAT_000006f8 = 4;
  _DAT_0000064c = 0x40;
  _DAT_0000068c = 0x1105502;
  _DAT_0000060c = 0x400001bd;
  _DAT_00000650 = 0x40;
  _DAT_00000690 = 0x2205506;
  _DAT_00000610 = 0x500001bd;
  return;
}
