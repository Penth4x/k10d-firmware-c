/* @k10d select_table_entry_by_mask @ 0x000c6d62
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects an entry from a table at 0x000fa108 using bits 4-5 of a global index and stores
 *   the pointer in a global.
 * summary:
 *   The function reads the global DAT_0003c037, masks it with 0x3f, and shifts right by 4
 *   to extract a 2-bit index (0-3). It uses this index to select one of four pointers from
 *   the table starting at 0x000fa108 and stores the result in DAT_0003c461. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_table_entry_by_mask(void)

{
  DAT_0003c461 = (&DAT_000fa108)[(DAT_0003c037 & 0x3f) >> 4];
  return;
}
