/* @k10d compute_and_emit_indexed_values @ 0x000f543c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * purpose:
 *   Computes three clamped indices from state flags and calls a function with OR-combined
 *   table lookups.
 * summary:
 *   The function reads and modifies several byte-sized state variables (DAT_0003c4b1,
 *   DAT_0003c4b5, etc.) based on the values of DAT_0003c3ac and DAT_0003c44e. It calculates
 *   three indices (param_1, iVar9, iVar7) which are clamped to the range 0-15 and adjusted
 *   based on combinations of DAT_0003c3c4 and DAT_0003c041. Finally, it calls
 *   update_four_byte_flags with four arguments derived from OR-ing bytes at these indices
 *   from four different tables (DAT_000fab72, DAT_000fab82, DAT_000fab92, DAT_000faba2).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_emit_indexed_values(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = DAT_0003c4b1 | 1;
  bVar2 = DAT_0003c4bd | 1;
  bVar6 = DAT_0003c4b9 | 0x80;
  bVar3 = DAT_0003c4b5 | 0x85;
  bVar4 = DAT_0003c4b7 | 8;
  bVar5 = DAT_0003c4bb | 8;
  iVar8 = param_1;
  iVar9 = param_1;
  if (DAT_0003c3ac == '\0') {
    DAT_0003c4b1 = DAT_0003c4b1 | 7;
    DAT_0003c4b5 = bVar3;
    DAT_0003c4bd = bVar2;
    if (DAT_0003c44e == '\0') {
      iVar8 = param_1 + 1;
      iVar9 = param_1 + -1;
    }
    else if (DAT_0003c44e == '\x01') {
      iVar8 = param_1 + 2;
      iVar9 = param_1 + -2;
    }
    else if (DAT_0003c44e == '\x02') {
      iVar8 = param_1 + 3;
      iVar9 = param_1 + -3;
    }
    else if (DAT_0003c44e == '\x03') {
      iVar8 = param_1 + 4;
      iVar9 = param_1 + -4;
    }
    else if (DAT_0003c44e == '\x04') {
      iVar8 = param_1 + 5;
      iVar9 = param_1 + -5;
    }
    else if (DAT_0003c44e == '\x05') {
      iVar8 = param_1 + 6;
      iVar9 = param_1 + -6;
    }
  }
  else {
    DAT_0003c4b5 = DAT_0003c4b5 | 0x87;
    DAT_0003c4bd = DAT_0003c4bd | 7;
    DAT_0003c4b1 = bVar1;
    if (DAT_0003c44e == '\0') {
      iVar8 = param_1 + 1;
      iVar9 = param_1 + -1;
    }
    else if (DAT_0003c44e == '\x01') {
      iVar8 = param_1 + 2;
      iVar9 = param_1 + -2;
    }
    else if (DAT_0003c44e == '\x02') {
      iVar8 = param_1 + 3;
      iVar9 = param_1 + -3;
    }
    else if (DAT_0003c44e == '\x03') {
      iVar8 = param_1 + 4;
      iVar9 = param_1 + -4;
    }
    else if (DAT_0003c44e == '\x04') {
      iVar8 = param_1 + 5;
      iVar9 = param_1 + -5;
    }
    else if (DAT_0003c44e == '\x05') {
      iVar8 = param_1 + 6;
      iVar9 = param_1 + -6;
    }
  }
  if (((iVar9 < 1) && (iVar9 = 0xf, (DAT_0003c028 & 2) == 0)) && ((DAT_0003c022 & 1) != 0)) {
    DAT_0003c4b5 = DAT_0003c4b5 & 0x7f;
    bVar4 = DAT_0003c4b7 & 0xf7;
  }
  DAT_0003c4b7 = bVar4;
  if (((0xd < iVar8) && (iVar8 = 0xf, (DAT_0003c028 & 2) == 0)) && ((DAT_0003c022 & 1) != 0)) {
    bVar6 = DAT_0003c4b9 & 0x7f;
    bVar5 = DAT_0003c4bb & 0xf7;
  }
  DAT_0003c4bb = bVar5;
  DAT_0003c4b9 = bVar6;
  iVar7 = iVar8;
  iVar10 = iVar9;
  if (((DAT_0003c022 & 1) != 0) && ((DAT_0003c028 & 2) == 0)) {
    if (((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x01')) ||
         ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\0')))) ||
        ((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x02')))) ||
       ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x02')))) {
      iVar7 = 0xf;
    }
    else if ((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x02')) ||
             ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x02')))) ||
            (((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\0')) ||
             ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x01')))))) {
      iVar7 = 0xf;
      iVar10 = iVar8;
    }
    else if (((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\0')) ||
              ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x01')))) ||
             ((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x01')))) ||
            ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\0')))) {
      iVar7 = 0xf;
      iVar10 = iVar8;
      param_1 = iVar9;
    }
  }
  update_four_byte_flags((&DAT_000fab72)[param_1] | (&DAT_000fab72)[iVar10] | (&DAT_000fab72)[iVar7],
               (&DAT_000fab82)[param_1] | (&DAT_000fab82)[iVar10] | (&DAT_000fab82)[iVar7],
               (&DAT_000fab92)[param_1] | (&DAT_000fab92)[iVar10] | (&DAT_000fab92)[iVar7],
               (&DAT_000faba2)[param_1] | (&DAT_000faba2)[iVar10] | (&DAT_000faba2)[iVar7]);
  return;
}
