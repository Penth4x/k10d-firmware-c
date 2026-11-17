/* @k10d set_flag_by_mode_index @ 0x000f5ffc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in three flag words based on the value of a mode index.
 * summary:
 *   Reads the 8-bit value at DAT_0003c447 and uses it as a switch index. Depending on the
 *   case, it ORs the value 2 or 0x10 into one of three adjacent byte variables
 *   (DAT_0003c4bb, DAT_0003c4bf, DAT_0003c4b7). The function has no callees and only
 *   modifies these local/global state variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_by_mode_index(void)

{
  switch(DAT_0003c447) {
  case 0:
    DAT_0003c4bb = DAT_0003c4bb | 2;
    break;
  case 1:
    DAT_0003c4bf = DAT_0003c4bf | 2;
    DAT_0003c4bb = DAT_0003c4bb | 2;
    break;
  case 2:
  case 3:
    DAT_0003c4bf = DAT_0003c4bf | 0x10;
    break;
  case 4:
  case 5:
    DAT_0003c4b7 = DAT_0003c4b7 | 0x10;
  }
  return;
}
