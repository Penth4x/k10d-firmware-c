/* @k10d copy_capped_byte_buffer @ 0x000d6792
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies up to 0x40 bytes from a source buffer to a destination buffer, clamping the
 *   length to 64.
 * summary:
 *   The function reads a length from _DAT_0003c328 and clamps it to 0x40 (64) if it exceeds
 *   that value. It stores the source pointer and clamped length into _DAT_0003c2ca and
 *   _DAT_0003c2ce respectively. It then performs a byte-wise copy loop from the source
 *   buffer to the destination buffer for the clamped number of bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_capped_byte_buffer(void)

{
  uint uVar1;
  int iVar2;
  
  if (0x40 < _DAT_0003c328) {
    _DAT_0003c328 = 0x40;
  }
  _DAT_0003c2ca = _DAT_0003c324;
  _DAT_0003c2ce = _DAT_0003c328;
  uVar1 = 0;
  if (_DAT_0003c328 != 0) {
    iVar2 = 6;
    do {
      (&DAT_0003c2ca)[iVar2] = *(uint8_t *)(uVar1 + _DAT_0003c324);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 < _DAT_0003c328);
  }
  return;
}
