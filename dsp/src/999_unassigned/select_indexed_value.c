/* @k10d select_indexed_value @ 0x000c6d92
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects a value from one of two 16-entry tables based on two flag bits and stores it in
 *   a global variable.
 * summary:
 *   The function checks bit 0 of DAT_0003c022 and bit 1 of DAT_0003f327. If the first flag
 *   is clear, it writes 0 to DAT_0003c4a3. Otherwise, it uses the lower 4 bits of
 *   DAT_0003c080 as an index to select a value from either the table at 0x000fa110 or
 *   0x000fa120, depending on the second flag, and stores the result in DAT_0003c4a3. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_indexed_value(void)

{
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c4a3 = 0;
  }
  else if ((DAT_0003f327 & 2) == 0) {
    DAT_0003c4a3 = (&DAT_000fa120)[DAT_0003c080 & 0xf];
  }
  else {
    DAT_0003c4a3 = (&DAT_000fa110)[DAT_0003c080 & 0xf];
  }
  return;
}
