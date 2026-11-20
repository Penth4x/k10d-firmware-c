/* @k10d initialize_dat_0003f368_block @ 0x000dd36c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a fixed set of constant values to a contiguous block of DAT_0003f3xx globals.
 * summary:
 *   The function performs a series of direct stores to globals in the 0x0003f368-0x0003f3bf
 *   range, setting specific byte, short, and word values. It has no callees and no
 *   parameters, acting as a pure initialization routine for this memory region. The caller
 *   is write_config_constants_and_call_helper, but the specific role of these globals is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_dat_0003f368_block(void)

{
  DAT_0003f368 = 0x40;
  _DAT_0003f37e = 0x219;
  _DAT_0003f390 = 0x40;
  _DAT_0003f392 = 0x80;
  _DAT_0003f394 = 0x100;
  _DAT_0003f396 = 0x40;
  _DAT_0003f398 = 0x80;
  _DAT_0003f39a = 0x100;
  _DAT_0003f39c = 0x200;
  _DAT_0003f39e = 0x400;
  _DAT_0003f3b6 = 2000;
  _DAT_0003f3b8 = 0x23a;
  _DAT_0003f3b2 = 0x800;
  _DAT_0003f3b4 = 0x800;
  DAT_0003f36e = 0x3c;
  DAT_0003f36f = 5;
  _DAT_0003f36a = 0xd00;
  DAT_0003f3bc = 0;
  DAT_0003f3bd = 0x16;
  DAT_0003f3be = 0;
  DAT_0003f3bf = 0x12;
  return;
}
