/* @k10d update_mode_flags_and_params @ 0x000f529c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Sets bit flags in DAT_0003c4b2-b7 and calls parameter update routines based on
 *   DAT_0003c44a.
 * summary:
 *   The function ORs specific bits into several DAT_0003c4xx globals. It selects parameters
 *   from tables at 0xfa96a, 0xfa9a6, and 0xfa9e2 based on the value of DAT_0003c44a (0, 1,
 *   2, or other) and passes them to or_bytes_into_four_globals_000f6a7a and
 *   set_four_flag_bytes. If DAT_0003c44a is non-zero, it further adjusts flags and calls
 *   compute_and_emit_indexed_values or compute_indexed_lookup_or with a calculated index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_mode_flags_and_params(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  DAT_0003c4b5 = DAT_0003c4b5 | 0x40;
  DAT_0003c4b7 = DAT_0003c4b7 | 0x40;
  DAT_0003c4b3 = DAT_0003c4b3 | 0x20;
  if (DAT_0003c44a == '\0') {
    iVar4 = 0xe;
    iVar5 = 0xe;
    iVar6 = 0;
  }
  else if (DAT_0003c44a == '\x01') {
    iVar4 = 3;
    iVar5 = 10;
    iVar6 = 10;
  }
  else if (DAT_0003c44a == '\x02') {
    iVar4 = 5;
    iVar5 = 10;
    iVar6 = 10;
  }
  else {
    iVar4 = 10;
    iVar5 = 10;
    iVar6 = 10;
  }
  or_bytes_into_four_globals_000f6a7a(*(uint8_t *)(iVar4 + 0xfa96a),*(uint8_t *)(iVar4 + 0xfa979),
               *(uint8_t *)(iVar4 + 0xfa988),*(uint8_t *)(iVar4 + 0xfa997));
  or_bytes_into_four_globals_000f6a7a(*(uint8_t *)(iVar5 + 0xfa9a6),*(uint8_t *)(iVar5 + 0xfa9b5),
               *(uint8_t *)(iVar5 + 0xfa9c4),*(uint8_t *)(iVar5 + 0xfa9d3));
  set_four_flag_bytes((&DAT_000fa9e2)[iVar6],(&DAT_000fa9f0)[iVar6],(&DAT_000fa9fe)[iVar6],
               (&DAT_000faa0c)[iVar6]);
  if (DAT_0003c44a == '\0') {
    DAT_0003c4b2 = DAT_0003c4b2 | 0x80;
    DAT_0003c4be = DAT_0003c4be | 0x20;
  }
  else {
    DAT_0003c4ba = DAT_0003c4ba | 0x40;
    DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    if (DAT_0003c3ac == '\0') {
      bVar1 = (&DAT_000fc8f8)[(uint)DAT_0003c44e * 2];
      bVar2 = (&DAT_000fc8f9)[(uint)DAT_0003c44e * 2];
    }
    else {
      bVar1 = (&DAT_000fc902)[(uint)DAT_0003c44e * 2];
      bVar2 = (&DAT_000fc903)[(uint)DAT_0003c44e * 2];
    }
    or_bytes_into_four_globals_000f6a7a((&DAT_000faa1a)[bVar2],(&DAT_000faa27)[bVar2],(&DAT_000faa34)[bVar2],
                 (&DAT_000faa41)[bVar2]);
    or_bytes_into_four_globals_000f6a7a((&DAT_000faa4e)[bVar1],(&DAT_000faa5b)[bVar1],(&DAT_000faa68)[bVar1],
                 (&DAT_000faa75)[bVar1]);
    if (DAT_0003c3ac == '\0') {
      uVar3 = DAT_0003c48a + 2 >> 2;
      if (uVar3 < 10) {
        iVar4 = 0;
      }
      else {
        iVar4 = uVar3 - 9;
      }
      if (0xd < iVar4) {
        iVar4 = 0xf;
      }
    }
    else {
      iVar4 = (uint)(DAT_0003c48a >> 3) * 3 + (uint)(byte)(&DAT_000fc8f0)[DAT_0003c48a & 7] + -0x11;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      if (0xd < iVar4) {
        iVar4 = 0xf;
      }
    }
    if (DAT_0003c44a == '\x01') {
      compute_and_emit_indexed_values(__frv_reg_unset(4));
    }
    else if (DAT_0003c44a == '\x02') {
      compute_indexed_lookup_or(iVar4);
    }
  }
  return;
}
