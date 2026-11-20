/* @k10d copy_two_globals_conditionally @ 0x000c3a88
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Copies two global values into other globals, optionally replacing one via a conditional
 *   call.
 * summary:
 *   Writes DAT_0003c480 to DAT_0003c565 and DAT_0003c571 to DAT_0003c564. If bit 3 of
 *   DAT_0003c127 is set, it calls clamp_value_and_set_flags_000c6682 with DAT_0003c480,
 *   DAT_0003c570, and DAT_0003c571, storing the result into DAT_0003c564. No MMIO or known
 *   subsystem primitives are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_globals_conditionally(void)

{
  DAT_0003c565 = DAT_0003c480;
  DAT_0003c564 = DAT_0003c571;
  if ((DAT_0003c127 & 8) != 0) {
    DAT_0003c564 = clamp_value_and_set_flags_000c6682(DAT_0003c480,DAT_0003c570,DAT_0003c571);
  }
  return;
}
