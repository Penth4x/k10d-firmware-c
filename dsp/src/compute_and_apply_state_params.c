/* @k10d compute_and_apply_state_params @ 0x000f4744
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a state index from flags, looks up two parameter sets, and passes them to an
 *   apply routine.
 * summary:
 *   The function clears bit 2 of DAT_0003c4d0 and sets bit 4 of DAT_0003c4b6. It determines
 *   an index (uVar1) based on the state of DAT_0003c126 and DAT_0003c4d4. It calls either
 *   select_status_code_by_param or dispatch_state_update_by_param to get an offset (iVar2).
 *   Using this offset, it indexes into three different lookup tables to extract two 4-bit
 *   indices (uVar3, uVar4). Finally, it calls or_bytes_into_four_globals_000f6a7a twice
 *   with 4-byte values retrieved from arrays at these indices.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_apply_state_params(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_0003c4d0 = DAT_0003c4d0 & 0xfb;
  if (_DAT_0003c126 == 0) {
    iVar1 = 4;
  }
  else if ((DAT_0003c4d4 & 0x40) == 0) {
    if ((_DAT_0003c126 & 1) == 0) {
      if ((DAT_0003c4d4 & 0x20) == 0) {
        if (((_DAT_0003c126 & 8) == 0) && ((_DAT_0003c126 & 4) == 0)) {
          iVar1 = 4;
        }
        else {
          iVar1 = 0;
          if ((DAT_0003c440 == '\b') || (DAT_0003c440 == '\a')) {
            iVar1 = 1;
          }
          else if ((((DAT_0003c440 == '\x02') || (DAT_0003c440 == '\x04')) &&
                   (iVar1 = 1, (DAT_0003c580 & 0x80) != 0)) && ((DAT_0003c030 & 1) == 0)) {
            iVar1 = 0;
          }
        }
      }
      else {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 4;
    }
  }
  else {
    iVar1 = 2;
  }
  DAT_0003c4b6 = DAT_0003c4b6 | 0x10;
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c4d4 = DAT_0003c4d4 & 0x6f;
    iVar1 = select_status_code_by_param(__frv_reg_unset(4));
  }
  else {
    DAT_0003c4d4 = DAT_0003c4d4 & 0x6f;
    iVar1 = dispatch_state_update_by_param(iVar1);
  }
  if ((DAT_0003c4d4 & 0x10) == 0) {
    if ((DAT_0003c3ac == '\0') || ((DAT_0003c4d0 & 4) != 0)) {
      uVar2 = (byte)(&DAT_000fa7f4)[iVar1] & 0xf;
      uVar3 = (uint)((byte)(&DAT_000fa7f4)[iVar1] >> 4);
      if (iVar1 < 0xe) {
        DAT_0003c4ba = DAT_0003c4ba | 0x40;
      }
    }
    else {
      uVar2 = (byte)(&DAT_000fa811)[iVar1] & 0xf;
      uVar3 = (uint)((byte)(&DAT_000fa811)[iVar1] >> 4);
      if (iVar1 < 0x14) {
        DAT_0003c4ba = DAT_0003c4ba | 0x40;
      }
    }
  }
  else {
    uVar2 = (byte)(&DAT_000fa7c0)[iVar1] & 0xf;
    uVar3 = (uint)((byte)(&DAT_000fa7c0)[iVar1] >> 4);
    if (iVar1 != 0x33) {
      DAT_0003c4ba = DAT_0003c4ba | 0x40;
    }
  }
  or_bytes_into_four_globals_000f6a7a((&DAT_000faa1a)[uVar2],(&DAT_000faa27)[uVar2],(&DAT_000faa34)[uVar2],
               (&DAT_000faa41)[uVar2]);
  or_bytes_into_four_globals_000f6a7a((&DAT_000faa4e)[uVar3],(&DAT_000faa5b)[uVar3],(&DAT_000faa68)[uVar3],
               (&DAT_000faa75)[uVar3]);
  return;
}
