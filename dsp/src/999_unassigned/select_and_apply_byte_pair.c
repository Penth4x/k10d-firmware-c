/* @k10d select_and_apply_byte_pair @ 0x000f5a7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects one of two byte pairs from indexed tables based on a flag, then calls a helper
 *   with the selected values.
 * summary:
 *   The function checks the flag at DAT_0003c3ac to choose between two sets of four byte
 *   tables (DAT_000fabf2..DAT_000fac62). It indexes these tables with param_1 to retrieve
 *   four bytes, updates several bit flags in the DAT_0003c4b1..DAT_0003c4bd range, and
 *   passes the four retrieved bytes to update_four_byte_flags. It then performs additional
 *   bit manipulations on DAT_0003c4b5, DAT_0003c4b7, DAT_0003c4b9, and DAT_0003c4bb,
 *   conditionally clearing specific bits if param_2 is 1 or 2 and DAT_0003c028 bit 1 is
 *   clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_apply_byte_pair(int param_1,int param_2)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  byte bVar5;
  byte bVar6;
  
  if (DAT_0003c3ac == '\0') {
    uVar1 = (&DAT_000fabf2)[param_1];
    uVar2 = (&DAT_000fac02)[param_1];
    uVar3 = (&DAT_000fac12)[param_1];
    uVar4 = (&DAT_000fac22)[param_1];
    DAT_0003c4b1 = DAT_0003c4b1 | 7;
    DAT_0003c4b5 = DAT_0003c4b5 | 5;
    DAT_0003c4bd = DAT_0003c4bd | 1;
  }
  else {
    DAT_0003c4b5 = DAT_0003c4b5 | 7;
    DAT_0003c4bd = DAT_0003c4bd | 7;
    uVar1 = (&DAT_000fac32)[param_1];
    uVar2 = (&DAT_000fac42)[param_1];
    uVar3 = (&DAT_000fac52)[param_1];
    uVar4 = (&DAT_000fac62)[param_1];
    DAT_0003c4b1 = DAT_0003c4b1 | 1;
  }
  update_four_byte_flags(uVar1,uVar2,uVar3,uVar4);
  bVar5 = DAT_0003c4b5 | 0x80;
  bVar6 = DAT_0003c4b7 | 8;
  if ((param_2 == 1) && ((DAT_0003c028 & 2) == 0)) {
    bVar5 = DAT_0003c4b5 & 0x7f;
    bVar6 = DAT_0003c4b7 & 0xf7;
  }
  DAT_0003c4b7 = bVar6;
  DAT_0003c4b5 = bVar5;
  bVar5 = DAT_0003c4b9 | 0x80;
  bVar6 = DAT_0003c4bb | 8;
  if ((param_2 == 2) && ((DAT_0003c028 & 2) == 0)) {
    bVar5 = DAT_0003c4b9 & 0x7f;
    bVar6 = DAT_0003c4bb & 0xf7;
  }
  DAT_0003c4bb = bVar6;
  DAT_0003c4b9 = bVar5;
  return;
}
