/* @k10d select_and_apply_nibble_params @ 0x000f5b28
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Selects a 16-bit index from lookup tables based on state flags and applies four
 *   associated 4-byte parameter sets via or_bytes_into_four_globals_000f6ad6.
 * summary:
 *   The function reads state flags (DAT_0003f324, DAT_0003f327, DAT_0003c022, DAT_0003c440)
 *   to determine a base offset and a 16-bit index from lookup tables at 0x000fa916,
 *   0x000fa926, or 0x000fa942. It extracts four 4-bit nibbles from this index and uses them
 *   to index into four separate arrays of 4-byte structures. Each of these four 4-byte
 *   values is passed to or_bytes_into_four_globals_000f6ad6. The function also sets bits in
 *   DAT_0003c4bb or DAT_0003c4b8 depending on DAT_0003f327.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_apply_nibble_params(void)

{
  ushort uVar1;
  uint8_t uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = 0x48;
  }
  if ((DAT_0003f327 & 1) == 0) {
    DAT_0003c4bb = DAT_0003c4bb | 1;
  }
  else {
    DAT_0003c4b8 = DAT_0003c4b8 | 2;
  }
  if (((DAT_0003c022 & 1) != 0) ||
     ((DAT_0003c440 != '\a' && (((DAT_0003c4db & 0x20) == 0 || ((DAT_0003c410 & 0x40) == 0)))))) {
    uVar2 = DAT_0003c566;
    if ((DAT_0003c022 & 1) == 0) {
      uVar2 = DAT_0003c483;
    }
    uVar3 = clamp_value_to_range_000d9ac0(uVar2,0x20,uVar4);
    if (((DAT_0003c440 == '\x06') || (DAT_0003c440 == '\a')) || (DAT_0003c3c8 != '\0')) {
      if (DAT_0003c3ac == '\0') {
        uVar1 = *(ushort *)(&DAT_000fa926 + ((uVar3 + 2 >> 2) - 6) * 2);
        uVar3 = uVar1 & 0xf;
        uVar7 = uVar1 >> 4 & 0xf;
        uVar6 = uVar1 >> 8 & 0xf;
        uVar5 = (uint)(uVar1 >> 0xc);
      }
      else {
        uVar1 = *(ushort *)
                 (&DAT_000fa942 +
                 ((uVar3 >> 3) * 3 + (uint)(byte)(&DAT_000fc8f0)[uVar3 & 7] + -9) * 2);
        uVar3 = uVar1 & 0xf;
        uVar7 = uVar1 >> 4 & 0xf;
        uVar6 = uVar1 >> 8 & 0xf;
        uVar5 = (uint)(uVar1 >> 0xc);
      }
    }
    else {
      uVar1 = *(ushort *)(&DAT_000fa916 + ((uVar3 + 3 >> 3) - 3) * 2);
      uVar3 = uVar1 & 0xf;
      uVar7 = uVar1 >> 4 & 0xf;
      uVar6 = uVar1 >> 8 & 0xf;
      uVar5 = (uint)(uVar1 >> 0xc);
    }
    if (DAT_0003c440 == '\x06') {
      if (((((DAT_0003c580 & 8) != 0) || ((DAT_0003c58b & 0x20) != 0)) ||
          (((DAT_0003c580 & 4) != 0 || (((DAT_0003c581 & 2) != 0 || ((DAT_0003c581 & 1) != 0))))))
         && ((DAT_0003c028 & 2) == 0)) {
        uVar3 = DAT_000fa940 & 0xf;
        uVar7 = DAT_000fa940 >> 4 & 0xf;
        uVar6 = DAT_000fa940 >> 8 & 0xf;
        uVar5 = (uint)(DAT_000fa940 >> 0xc);
      }
    }
    else if ((DAT_0003c4db & 2) != 0) {
      if (DAT_0003c4a6 < 9) {
        uVar3 = 0xd;
        uVar7 = 0xd;
        uVar6 = 0xd;
        uVar5 = 0xd;
      }
      else {
        DAT_0003c4db = DAT_0003c4db & 0xfd;
        DAT_0003c4a6 = 0;
      }
    }
    or_bytes_into_four_globals_000f6ad6((&DAT_000faa82)[uVar3],(&DAT_000faa91)[uVar3],(&DAT_000faaa0)[uVar3],
                 (&DAT_000faaaf)[uVar3]);
    or_bytes_into_four_globals_000f6ad6((&DAT_000faabe)[uVar7],(&DAT_000faacd)[uVar7],(&DAT_000faadc)[uVar7],
                 (&DAT_000faaeb)[uVar7]);
    or_bytes_into_four_globals_000f6ad6((&DAT_000faafa)[uVar6],(&DAT_000fab09)[uVar6],(&DAT_000fab18)[uVar6],
                 (&DAT_000fab27)[uVar6]);
    or_bytes_into_four_globals_000f6ad6((&DAT_000fab36)[uVar5],(&DAT_000fab45)[uVar5],(&DAT_000fab54)[uVar5],
                 (&DAT_000fab63)[uVar5]);
  }
  return;
}
