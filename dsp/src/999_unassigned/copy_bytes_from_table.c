/* @k10d copy_bytes_from_table @ 0x000d67d6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies a variable number of bytes from a static table to a destination buffer.
 * summary:
 *   Reads a count from _DAT_0003c328 and a destination pointer from _DAT_0003c324. If the
 *   count is non-zero, it iterates up to that count, copying bytes from the table at
 *   DAT_0003c284 (starting at offset 6) into the destination buffer. No other side effects
 *   or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_bytes_from_table(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (_DAT_0003c328 != 0) {
    iVar2 = 6;
    do {
      *(uint8_t *)(uVar1 + _DAT_0003c324) = (&DAT_0003c284)[iVar2];
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 < _DAT_0003c328);
  }
  return;
}
