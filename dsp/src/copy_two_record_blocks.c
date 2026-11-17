/* @k10d copy_two_record_blocks @ 0x000ce6c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Copes two 6-byte records from a source buffer to a destination buffer and updates
 *   pointer offsets.
 * summary:
 *   The function checks a flag in DAT_0003f282 and a pointer in _DAT_0003ce42. If valid, it
 *   iterates twice, copying 6 bytes (three undefined2 values) from a source address derived
 *   from a table at 0x3ce44 to a destination address derived from _DAT_0003ce42. It then
 *   updates _DAT_0003ce42 to point past the copied data and writes values from
 *   _DAT_0003ce34 and _DAT_0003ce60 into the destination buffer. Finally, it clears
 *   _DAT_0003ce50.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_two_record_blocks(void)

{
  uint16_t *puVar1;
  uint16_t *puVar2;
  int iVar3;
  int iVar4;
  
  if (((DAT_0003f282 & 0x20) != 0) && (_DAT_0003ce42 != 0)) {
    if ((uint16_t *)(_DAT_0003ce42 | 0x30000) < (uint16_t *)0x3fc00) {
      iVar4 = 2;
      iVar3 = 0;
      puVar1 = (uint16_t *)(_DAT_0003ce42 | 0x30000);
      do {
        puVar2 = puVar1;
        *puVar2 = *(uint16_t *)(*(ushort *)(iVar3 + 0x3ce44) | 0x30000);
        puVar2[1] = *(uint16_t *)(*(ushort *)(iVar3 + 0x3ce46) | 0x30000);
        puVar2[2] = *(uint16_t *)(*(ushort *)(iVar3 + 0x3ce48) | 0x30000);
        iVar3 = iVar3 + 6;
        iVar4 = iVar4 + -1;
        puVar1 = puVar2 + 3;
      } while (0 < iVar4);
      puVar2[3] = _DAT_0003ce34;
      _DAT_0003ce42 = (short)puVar2 + 10;
      puVar2[4] = _DAT_0003ce60;
      if (_DAT_0003ce50 != 0) {
        puVar2[-4] = (_DAT_0003ce60 + _DAT_0003ce50) - _DAT_0003ce52;
      }
    }
    _DAT_0003ce50 = 0;
  }
  return;
}
