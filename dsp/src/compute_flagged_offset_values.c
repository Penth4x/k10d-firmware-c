/* @k10d compute_flagged_offset_values @ 0x000c2a06
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes integer offsets and character values from configuration bytes and stores them
 *   in global variables.
 * summary:
 *   The function reads multiple bytes from the 0x0003c1xx range and performs arithmetic to
 *   derive values stored in globals 0x0003f580-0x0003f588 and 0x0003c575-0x0003c577. It
 *   conditionally calls set_flag_from_state_byte and compute_char_from_flag_bits based on
 *   bits in DAT_0003c126 and DAT_0003c127. The specific meaning of the computed values is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_flagged_offset_values(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iStack_20;
  uint uStack_1c;
  
  uVar2 = (DAT_0003c129 & 7) >> 1;
  uStack_1c = 0;
  iStack_20 = 0;
  uVar4 = 0;
  DAT_0003c582 = DAT_0003c582 & 0xfc;
  if (((DAT_0003c127 & 8) == 0) || (DAT_0003c440 == '\x11')) {
    _DAT_0003f588 = 0;
    cVar3 = (&DAT_000f9b50)[uVar2];
    _DAT_0003f580 = ((DAT_0003c129 & 0x7f) >> 4) * 4 + (int)(char)(&DAT_000f9b54)[uVar2];
    if (0x30 < (int)_DAT_0003f580) {
      _DAT_0003f580 = 4;
    }
    uVar2 = _DAT_0003f580 << 1;
    _DAT_0003f584 = uVar2;
  }
  else {
    uVar4 = (DAT_0003c10b & 3) * 2;
    uVar2 = DAT_0003c10d & 0x7f;
    uStack_1c = DAT_0003c112 & 0x7f;
    uVar1 = (uint)DAT_0003c111;
    iStack_20 = (uVar1 & 0x1f) * 2;
    _DAT_0003f580 = uVar2 + uVar4 >> 1;
    cVar3 = (DAT_0003c109 & 0xf) * '\x04' + '(';
    _DAT_0003f588 = uVar2 + ((DAT_0003c10c & 0x7c) >> 1);
    _DAT_0003f584 = uVar2;
    set_flag_from_state_byte();
    if ((DAT_0003c126 & 8) != 0) {
      _DAT_0003f584 = iStack_20 + uVar2;
      cVar3 = cVar3 + (char)(uVar1 & 0x1f);
      if (uVar2 < uStack_1c) {
        _DAT_0003f580 = uStack_1c + iStack_20 >> 1;
      }
      else {
        _DAT_0003f580 = _DAT_0003f584 >> 1;
      }
    }
  }
  if ((DAT_0003c126 & 2) != 0) {
    _DAT_0003f584 = uVar2 + ((DAT_0003c10c & 0x7c) >> 1);
    if (uVar2 < (DAT_0003c10d & 0x7f)) {
      uVar4 = (DAT_0003c10d & 0x7f) - uVar2;
    }
    else {
      uVar4 = 0;
    }
    _DAT_0003f588 = _DAT_0003f584 + uVar4;
    _DAT_0003f580 = _DAT_0003f588 >> 1;
    cVar3 = cVar3 + (char)((DAT_0003c10c & 0x7c) >> 2);
  }
  DAT_0003c577 = cVar3 + 'D';
  DAT_0003c575 = (char)_DAT_0003f580 + 'D';
  DAT_0003c576 = DAT_0003c575;
  if ((((DAT_0003c127 & 8) != 0) && (DAT_0003c440 != '\x11')) &&
     (compute_char_from_flag_bits(), (DAT_0003c126 & 8) != 0)) {
    if (uVar2 < uStack_1c) {
      DAT_0003c575 = (char)((iStack_20 + uStack_1c + 4 & 0xfff8) >> 1) + 'D';
    }
    else {
      DAT_0003c575 = (char)((iStack_20 + 4U & 0xf8) >> 1) + DAT_0003c575;
    }
  }
  DAT_0003c561 = (char)(uVar4 >> 1);
  return;
}
