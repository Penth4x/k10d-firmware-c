/* @k10d set_flag_if_bit1_set @ 0x000f638c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 2 of DAT_0003c4bb if bit 1 of DAT_0003c07e is set.
 * summary:
 *   Checks bit 1 of the global DAT_0003c07e. If that bit is set, it ORs the value 4 (bit 2)
 *   into the global DAT_0003c4bb. No other operations or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_bit1_set(void)

{
  if ((DAT_0003c07e & 2) != 0) {
    DAT_0003c4bb = DAT_0003c4bb | 4;
  }
  return;
}
