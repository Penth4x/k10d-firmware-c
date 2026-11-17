/* @k10d merge_mask_bits_and_notify @ 0x000cd29e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a 16-bit value by merging bits from a lookup table based on a bitmask, and
 *   calls a handler if the result changes.
 * summary:
 *   Stores param_1 into DAT_0003ce6a. If conditions are met, it iterates through the 16
 *   bits of param_1, merging corresponding bytes from a lookup table at DAT_000fc5e0 into a
 *   16-bit value (uVar3). If the computed value differs from the stored value in
 *   DAT_0003ce74 (or specific flags are set), it calls handle_15bit_event_code with the new
 *   value ORed with 0x8000 and updates the stored value. The function manages a 16-bit
 *   state word derived from a bitmask.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void merge_mask_bits_and_notify(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  
  _DAT_0003ce6a = (uint16_t)param_1;
  if (((param_1 != 0) && ((DAT_0003ce09 & 2) == 0)) && (param_2 != 0)) {
    if ((((DAT_0003cf0e & 0xf) == 0) && (param_2 == 1)) || (param_1 == DAT_000fb008)) {
      _DAT_0003ce74 = 0;
    }
    else {
      uVar3 = 0xf00;
      iVar2 = 2;
      do {
        if ((param_1 & 1) != 0) {
          uVar3 = uVar3 & *(ushort *)(&DAT_000fc5e0 + iVar2) & 0xff00 |
                  (*(ushort *)(&DAT_000fc5e0 + iVar2) | uVar3) & 0xff;
        }
        param_1 = param_1 >> 1;
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x17);
      if ((((param_2 == 2) && ((DAT_0003ce06 & 0x20) == 0)) || (_DAT_0003ce74 != uVar3)) &&
         ((DAT_0003ce00 & 0x20) == 0)) {
        bVar1 = false;
        if (((DAT_0003c394 & 0x10) != 0) && ((DAT_0003c394 & 0xc) == 0)) {
          bVar1 = true;
        }
        if (!bVar1) {
          handle_15bit_event_code(uVar3 | 0x8000);
          _DAT_0003ce74 = uVar3;
        }
      }
    }
  }
  return;
}
