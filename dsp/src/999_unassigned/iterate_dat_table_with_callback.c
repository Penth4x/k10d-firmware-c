/* @k10d iterate_dat_table_with_callback @ 0x000d685a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Loops through a count in _DAT_0003c328, calling check_and_run_two_routines with a
 *   masked index and a value from DAT_0003c288.
 * summary:
 *   Checks if _DAT_0003c328 is non-zero. If so, iterates from 0 to that count, calling
 *   check_and_run_two_routines with the low 16 bits of (_DAT_0003c324 + index) and the
 *   16-bit value at DAT_0003c288 + (index*2). The specific role of the data or the callback
 *   is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iterate_dat_table_with_callback(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (_DAT_0003c328 != 0) {
    iVar2 = 0;
    do {
      check_and_run_two_routines(_DAT_0003c324 + uVar1 & 0xffff,*(uint16_t *)(&DAT_0003c288 + iVar2));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 2;
    } while (uVar1 < _DAT_0003c328);
  }
  return;
}
