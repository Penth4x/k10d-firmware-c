/* @k10d copy_four_bytes_between_dat @ 0x000ed784
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies four 16-bit values from DAT_0003c208-0003c20b to DAT_00000401-00000503.
 * summary:
 *   The function performs four direct 16-bit assignments, moving values from the source
 *   block at 0x0003c208 to the destination block at 0x00000401. No callees are invoked and
 *   no control flow is present. The specific roles of the DAT globals are not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes_between_dat(void)

{
  DAT_00000401 = DAT_0003c208;
  DAT_00000501 = DAT_0003c20a;
  DAT_00000403 = DAT_0003c209;
  DAT_00000503 = DAT_0003c20b;
  return;
}
