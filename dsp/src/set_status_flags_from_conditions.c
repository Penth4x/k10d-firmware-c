/* @k10d set_status_flags_from_conditions @ 0x000c8e60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets bits 5, 6, and 7 of a status byte based on the values of three other global
 *   variables.
 * summary:
 *   The function checks three global variables (DAT_0003c3ac, DAT_0003c3b5, DAT_0003c3bd)
 *   and conditionally sets bits 0x20, 0x80, and 0x40 in DAT_0003c371. It has no callees and
 *   only performs bitwise OR operations on these globals. The specific meaning of these
 *   flags is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_flags_from_conditions(void)

{
  if (DAT_0003c3ac == '\x01') {
    DAT_0003c371 = DAT_0003c371 | 0x20;
  }
  if (DAT_0003c3b5 == '\x01') {
    DAT_0003c371 = DAT_0003c371 | 0x80;
  }
  if ((DAT_0003c3bd != '\0') && (DAT_0003c3bd != '\x04')) {
    DAT_0003c371 = DAT_0003c371 | 0x40;
  }
  return;
}
