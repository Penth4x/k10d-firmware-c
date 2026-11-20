/* @k10d FUN_000cd8be @ 0x000cd8be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd8be(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  DAT_0003ce07 = DAT_0003ce07 & 0xbf;
  DAT_0003ce7e = DAT_0003ce7e & 0xfe;
  DAT_0003ce08 = DAT_0003ce08 & 0xfd;
  DAT_0003ce10 = 1;
  conditional_call_gate();
  if ((DAT_0003ce00 & 0x40) != 0) {
    FUN_000cc6d6();
    FUN_000d19f0();
    DAT_0003ce08 = DAT_0003ce08 | 0x10;
    DAT_0003ce06 = DAT_0003ce06 & 0xef | 0x40;
    DAT_0003ce10 = 3;
    if ((DAT_0003c447 == '\x01') && (DAT_0003ce2f == 0)) {
      DAT_0003ce2f = DAT_0003cbef & 0xf;
    }
  }
  if (((DAT_0003ce00 & 0x40) == 0) || (DAT_0003c447 != '\x01')) {
    clear_flag_bit_and_counter();
  }
  sVar1 = _DAT_0003ce18;
  iVar3 = 0x12 - (uint)(DAT_0003c564 >> 3);
  if (-1 < iVar3) {
    sVar2 = 1;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      sVar2 = sVar2 << 1;
    }
  }
  _DAT_0003ce38 = compute_offset_with_flag();
  _DAT_0003ce38 = _DAT_0003ce38 + sVar1;
  _DAT_0003ce18 = (DAT_0003f4aa & 0xf) + sVar2 + _DAT_0003c1f2;
  sVar2 = compute_offset_from_flags();
  _DAT_0003ce34 = _DAT_0003ce38;
  accumulate_signed_offsets();
  copy_two_record_blocks();
  _DAT_0003ce50 = _DAT_0003ce52;
  _DAT_0003ce3a = -sVar2;
  _DAT_0003ce30 = -sVar2;
  return;
}
