/* @k10d apply_signed_value_mode @ 0x000c177e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Selects a transformation of DAT_0003c452 based on param_1 and passes the result to
 *   adjust_clamped_counters.
 * summary:
 *   The function branches on param_1 (0-4) to compute a value from DAT_0003c452 (double,
 *   identity, zero, negate, or double-negate) and stores it in DAT_0003c569. It then calls
 *   adjust_clamped_counters with a flag (1 or 0) and the computed value. If param_1 is >=5
 *   and bit 1 of DAT_0003c4de is set, it copies DAT_0003c47d to DAT_0003c496. The role of
 *   the DAT globals and adjust_clamped_counters is not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_signed_value_mode(int param_1)

{
  if (param_1 == 0) {
    DAT_0003c569 = DAT_0003c452 << 1;
    adjust_clamped_counters(1,(uint)DAT_0003c452 << 1);
  }
  else if (param_1 == 1) {
    DAT_0003c569 = DAT_0003c452;
    adjust_clamped_counters(1,DAT_0003c452);
  }
  else if (param_1 == 2) {
    adjust_clamped_counters(1,0);
  }
  else if (param_1 == 3) {
    DAT_0003c569 = -DAT_0003c452;
    adjust_clamped_counters(0,DAT_0003c452);
  }
  else if (param_1 == 4) {
    DAT_0003c569 = DAT_0003c452 * -2;
    adjust_clamped_counters(0,(uint)DAT_0003c452 << 1);
  }
  else if ((DAT_0003c4de & 2) != 0) {
    DAT_0003c496 = DAT_0003c47d;
  }
  return;
}
