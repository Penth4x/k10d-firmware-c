/* @k10d copy_two_globals_and_set_flag @ 0x000efc92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies two 16-bit values from DAT_0003f3de/df into globals and sets bit 3 of
 *   DAT_00000425.
 * summary:
 *   The function performs a small block of global assignments: DAT_0003c1ff and
 *   DAT_00000144 are set to DAT_0003f3df, DAT_00000142 is set to DAT_0003f3de, and
 *   _DAT_00000146 is set to 0xcc00. It then ORs bit 3 (value 8) into DAT_00000425. No MMIO,
 *   no callees, no branching.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_two_globals_and_set_flag(void)

{
  DAT_0003c1ff = DAT_0003f3df;
  DAT_00000142 = DAT_0003f3de;
  DAT_00000144 = DAT_0003f3df;
  _DAT_00000146 = 0xcc00;
  DAT_00000425 = DAT_00000425 | 8;
  return;
}
