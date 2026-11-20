/* @k10d copy_buffer_with_transform @ 0x000d6800
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a variable-length buffer from DAT_0003c324 to DAT_0003c2ce, applying a per-word
 *   transformation via FUN_000e9fd2.
 * summary:
 *   Clamps the length stored in DAT_0003c328 to a maximum of 0x21 (33). Writes the source
 *   pointer and clamped length to DAT_0003c2ca and DAT_0003c2cc. Iterates through the
 *   source buffer, calling FUN_000e9fd2 on each 16-bit word and storing the result
 *   sequentially into the destination buffer starting at DAT_0003c2ce.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_buffer_with_transform(void)

{
  uint16_t uVar1;
  uint uVar2;
  int iVar3;
  
  if (0x21 < _DAT_0003c328) {
    _DAT_0003c328 = 0x21;
  }
  _DAT_0003c2ca = (uint16_t)_DAT_0003c324;
  _DAT_0003c2cc = _DAT_0003c328;
  uVar2 = 0;
  if (_DAT_0003c328 != 0) {
    iVar3 = 0;
    do {
      uVar1 = FUN_000e9fd2(_DAT_0003c324 + uVar2 & 0xffff);
      *(uint16_t *)(&DAT_0003c2ce + iVar3) = uVar1;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 2;
    } while (uVar2 < _DAT_0003c328);
  }
  return;
}
