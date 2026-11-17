/* @k10d copy_byte_to_two_globals_000f3d9c @ 0x000f3d9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies the value of DAT_0003c47c into DAT_0003c47b and DAT_0003c47a.
 * summary:
 *   The function performs two simple memory assignments, reading from DAT_0003c47c and
 *   writing to DAT_0003c47b and DAT_0003c47a. No other operations, branches, or function
 *   calls are present. The roles of these global variables are not determinable from the
 *   provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_byte_to_two_globals_000f3d9c(void)

{
  DAT_0003c47b = DAT_0003c47c;
  DAT_0003c47a = DAT_0003c47c;
  return;
}
