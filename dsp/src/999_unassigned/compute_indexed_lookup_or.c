/* @k10d compute_indexed_lookup_or @ 0x000f56ac
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes four clamped indices from a base and state flags, then ORs bytes from four
 *   parallel lookup tables and passes the results to a helper.
 * summary:
 *   The function reads byte-sized state variables (DAT_0003c4b1, etc.) and a mode selector
 *   (DAT_0003c44e) to determine offsets for four indices. It clamps these indices to a
 *   maximum of 15 and applies additional logic based on flags in DAT_0003c022 and
 *   DAT_0003c028. Finally, it ORs together bytes from four parallel lookup tables
 *   (DAT_000fab72, etc.) using the computed indices and passes the results to
 *   update_four_byte_flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_indexed_lookup_or(int param_1)

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
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  bVar1 = DAT_0003c4b1 | 1;
  bVar2 = DAT_0003c4bd | 1;
  bVar6 = DAT_0003c4b9 | 0x80;
  bVar3 = DAT_0003c4b5 | 0x85;
  bVar4 = DAT_0003c4b7 | 8;
  bVar5 = DAT_0003c4bb | 8;
  iVar9 = param_1;
  iVar10 = param_1;
  iVar12 = param_1;
  iVar13 = param_1;
  if (DAT_0003c3ac == '\0') {
    DAT_0003c4b1 = DAT_0003c4b1 | 7;
    DAT_0003c4b5 = bVar3;
    DAT_0003c4bd = bVar2;
    if (DAT_0003c44e == '\0') {
      iVar9 = param_1 + 2;
      iVar10 = param_1 + -2;
      iVar12 = param_1 + 1;
      iVar13 = param_1 + -1;
    }
    else if (DAT_0003c44e == '\x01') {
      iVar9 = param_1 + 4;
      iVar10 = param_1 + -4;
      iVar12 = param_1 + 2;
      iVar13 = param_1 + -2;
    }
    else if (DAT_0003c44e == '\x02') {
      iVar9 = param_1 + 6;
      iVar10 = param_1 + -6;
      iVar12 = param_1 + 3;
      iVar13 = param_1 + -3;
    }
    else if (DAT_0003c44e == '\x03') {
      iVar9 = param_1 + 8;
      iVar10 = param_1 + -8;
      iVar12 = param_1 + 4;
      iVar13 = param_1 + -4;
    }
  }
  else {
    DAT_0003c4b5 = DAT_0003c4b5 | 0x87;
    DAT_0003c4bd = DAT_0003c4bd | 7;
    DAT_0003c4b1 = bVar1;
    if (DAT_0003c44e == '\0') {
      iVar9 = param_1 + 2;
      iVar10 = param_1 + -2;
      iVar12 = param_1 + 1;
      iVar13 = param_1 + -1;
    }
    else if (DAT_0003c44e == '\x01') {
      iVar9 = param_1 + 4;
      iVar10 = param_1 + -4;
      iVar12 = param_1 + 2;
      iVar13 = param_1 + -2;
    }
    else if (DAT_0003c44e == '\x02') {
      iVar9 = param_1 + 6;
      iVar10 = param_1 + -6;
      iVar12 = param_1 + 3;
      iVar13 = param_1 + -3;
    }
    else if (DAT_0003c44e == '\x03') {
      iVar9 = param_1 + 8;
      iVar10 = param_1 + -8;
      iVar12 = param_1 + 4;
      iVar13 = param_1 + -4;
    }
    else if (DAT_0003c44e == '\x04') {
      iVar9 = param_1 + 10;
      iVar10 = param_1 + -10;
      iVar12 = param_1 + 5;
      iVar13 = param_1 + -5;
    }
    else if (DAT_0003c44e == '\x05') {
      iVar9 = param_1 + 0xc;
      iVar10 = param_1 + -0xc;
      iVar12 = param_1 + 6;
      iVar13 = param_1 + -6;
    }
  }
  if (iVar13 < 1) {
    iVar13 = 0xf;
  }
  if (0xd < iVar12) {
    iVar12 = 0xf;
  }
  if (((iVar10 < 1) && (iVar10 = 0xf, (DAT_0003c028 & 2) == 0)) && ((DAT_0003c022 & 1) != 0)) {
    DAT_0003c4b5 = DAT_0003c4b5 & 0x7f;
    bVar4 = DAT_0003c4b7 & 0xf7;
  }
  DAT_0003c4b7 = bVar4;
  if (((0xd < iVar9) && (iVar9 = 0xf, (DAT_0003c028 & 2) == 0)) && ((DAT_0003c022 & 1) != 0)) {
    bVar6 = DAT_0003c4b9 & 0x7f;
    bVar5 = DAT_0003c4bb & 0xf7;
  }
  DAT_0003c4bb = bVar5;
  DAT_0003c4b9 = bVar6;
  iVar7 = iVar9;
  iVar8 = iVar12;
  iVar11 = iVar10;
  iVar14 = iVar13;
  if (((DAT_0003c022 & 1) != 0) && ((DAT_0003c028 & 2) == 0)) {
    iVar8 = iVar9;
    if ((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x01')) ||
        ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x01')))) ||
       (((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x03')) ||
        ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x02')))))) {
      iVar7 = 0xf;
    }
    else if ((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x02')) ||
             ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x03')))) ||
            (((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x01')) ||
             ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x01')))))) {
      iVar7 = 0xf;
      iVar11 = iVar12;
      iVar14 = iVar10;
    }
    else if (((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x03')) ||
              ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\0')))) ||
             ((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x04')))) ||
            ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x04')))) {
      iVar7 = 0xf;
      iVar8 = iVar12;
    }
    else if ((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\x04')) ||
             ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x04')))) ||
            (((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\0')) ||
             ((DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\x03')))))) {
      iVar7 = 0xf;
      iVar11 = iVar12;
    }
    else if ((((DAT_0003c3c4 == '\0') && (DAT_0003c041 == '\0')) ||
             ((DAT_0003c3c4 == '\x01' && (DAT_0003c041 == '\x02')))) ||
            (((DAT_0003c3c4 == '\x02' && (DAT_0003c041 == '\x02')) ||
             ((iVar8 = iVar12, DAT_0003c3c4 == '\x03' && (DAT_0003c041 == '\0')))))) {
      iVar7 = 0xf;
      iVar8 = iVar9;
      iVar11 = iVar12;
      iVar14 = iVar10;
      param_1 = iVar13;
    }
  }
  update_four_byte_flags((&DAT_000fab72)[param_1] | (&DAT_000fab72)[iVar14] | (&DAT_000fab72)[iVar11] |
               (&DAT_000fab72)[iVar8] | (&DAT_000fab72)[iVar7],
               (&DAT_000fab82)[param_1] | (&DAT_000fab82)[iVar14] | (&DAT_000fab82)[iVar11] |
               (&DAT_000fab82)[iVar8] | (&DAT_000fab82)[iVar7],
               (&DAT_000fab92)[param_1] | (&DAT_000fab92)[iVar14] | (&DAT_000fab92)[iVar11] |
               (&DAT_000fab92)[iVar8] | (&DAT_000fab92)[iVar7],
               (&DAT_000faba2)[param_1] | (&DAT_000faba2)[iVar14] | (&DAT_000faba2)[iVar11] |
               (&DAT_000faba2)[iVar8] | (&DAT_000faba2)[iVar7]);
  return;
}
