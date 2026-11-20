/* @k10d set_dat_0003cd5c_to_0x7f @ 0x000d252a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes the constant 0x7f to the global variable DAT_0003cd5c.
 * summary:
 *   The function performs a single store operation, setting DAT_0003cd5c to 0x7f. It has no
 *   other side effects, no callees, and no conditional logic. The role of DAT_0003cd5c is
 *   not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_dat_0003cd5c_to_0x7f(void)

{
  DAT_0003cd5c = 0x7f;
  return;
}
