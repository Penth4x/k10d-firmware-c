/* @k10d select_table_by_masked_index_000c6d7a @ 0x000c6d7a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects a pointer from a table using a masked and shifted value from a global variable.
 * summary:
 *   The function reads the global variable DAT_0003c035, masks it with 0x7f, and shifts it
 *   right by 5 bits to create an index. It then uses this index to select a pointer from
 *   the table starting at DAT_000fa10c and stores the result in DAT_0003c464. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_table_by_masked_index_000c6d7a(void)

{
  DAT_0003c464 = (&DAT_000fa10c)[(DAT_0003c035 & 0x7f) >> 5];
  return;
}
