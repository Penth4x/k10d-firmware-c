/* @k10d compute_signed_byte_state @ 0x000c1f18
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Computes a signed byte value into DAT_0003c579 based on several state flags and
 *   arithmetic on DAT_0003c560/0x561/0x565.
 * summary:
 *   The function branches on DAT_0003c129 bit 0. In the zero case it checks combinations of
 *   DAT_0003c440 (values 2,4,8,7) against DAT_0003c480 and DAT_0003c565 relative to
 *   DAT_0003c576, often zeroing DAT_0003c579. Otherwise it computes iVar1 from
 *   DAT_0003f323, DAT_0003c565, DAT_0003c560, and DAT_0003c561, clamps a derived uVar2
 *   using DAT_000f9dde, and stores the sum as a char into DAT_0003c579. In the non-zero
 *   case it sets DAT_0003c579 to 0 or -1 based on DAT_0003c440==0x11 or DAT_0003c127 bit 0.
 *   No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_signed_byte_state(void)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_0003c129 & 1) == 0) {
    if (((((DAT_0003c440 == '\x02') || (DAT_0003c440 == '\x04')) || (DAT_0003c440 == '\b')) &&
        (DAT_0003c480 == DAT_0003c576)) || (DAT_0003c565 == DAT_0003c576)) {
      DAT_0003c579 = '\0';
    }
    else if (((DAT_0003c440 == '\a') && (DAT_0003c480 == DAT_0003c576)) ||
            (DAT_0003c565 == DAT_0003c576)) {
      DAT_0003c579 = '\0';
    }
    else {
      iVar1 = ((DAT_0003f323 + -0x4e + (uint)DAT_0003c565) - (int)DAT_0003c560) + (uint)DAT_0003c561
      ;
      if (iVar1 < 1) {
        DAT_0003c579 = '\0';
      }
      else {
        if (iVar1 < 0x11) {
          uVar2 = 0x10U - iVar1 >> 1;
          if (DAT_000f9dde < uVar2) {
            uVar2 = (uint)DAT_000f9dde;
          }
        }
        else {
          uVar2 = 0;
        }
        DAT_0003c579 = (char)iVar1 + (char)uVar2;
      }
    }
  }
  else {
    DAT_0003c579 = '\0';
    if ((DAT_0003c440 == '\x11') || ((DAT_0003c127 & 1) != 0)) {
      DAT_0003c579 = -1;
    }
  }
  return;
}
