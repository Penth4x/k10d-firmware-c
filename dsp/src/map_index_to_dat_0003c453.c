/* @k10d map_index_to_dat_0003c453 @ 0x000c8500
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a value to DAT_0003c453 based on param_1 and the state of DAT_0003c3ac.
 * summary:
 *   The function checks the value of DAT_0003c3ac. If it is zero, it maps param_1 (0-3) to
 *   values 4, 8, 0xc, or 0x10 respectively, otherwise 0. If DAT_0003c3ac is non-zero, it
 *   maps param_1 (0-5) to values 3, 5, 8, 0xb, 0xd, or 0x10 respectively, otherwise 0. The
 *   result is stored in DAT_0003c453. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_index_to_dat_0003c453(int param_1)

{
  if (DAT_0003c3ac == '\0') {
    if (param_1 == 0) {
      DAT_0003c453 = 4;
    }
    else if (param_1 == 1) {
      DAT_0003c453 = 8;
    }
    else if (param_1 == 2) {
      DAT_0003c453 = 0xc;
    }
    else if (param_1 == 3) {
      DAT_0003c453 = 0x10;
    }
    else {
      DAT_0003c453 = 0;
    }
  }
  else if (param_1 == 0) {
    DAT_0003c453 = 3;
  }
  else if (param_1 == 1) {
    DAT_0003c453 = 5;
  }
  else if (param_1 == 2) {
    DAT_0003c453 = 8;
  }
  else if (param_1 == 3) {
    DAT_0003c453 = 0xb;
  }
  else if (param_1 == 4) {
    DAT_0003c453 = 0xd;
  }
  else if (param_1 == 5) {
    DAT_0003c453 = 0x10;
  }
  else {
    DAT_0003c453 = 0;
  }
  return;
}
