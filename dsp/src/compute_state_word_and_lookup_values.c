/* @k10d compute_state_word_and_lookup_values @ 0x000cf204
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Derives a 16-bit state word from global flags and populates associated lookup-table
 *   values.
 * summary:
 *   The function reads multiple global flag bytes to compute a 16-bit value stored in
 *   DAT_0003cf0e. It uses the low byte of this value as an index into a table at 0xfaf00 to
 *   populate DAT_0003cf0c and DAT_0003cf0d. It also computes additional values stored in
 *   _DAT_0003cf04 and _DAT_0003cfa0/_DAT_0003cfa4 using tables at 0xfafa8 and 0xfaf18,
 *   masked by _DAT_0003f2bc. Finally, it calls mask_value_by_flag_table with the low byte
 *   of the state word and update_status_flags_000cf38e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_state_word_and_lookup_values(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  if ((DAT_0003f282 & 0x80) == 0) {
    bVar1 = DAT_0003f2ad;
    if (DAT_0003f2ad == 0) {
      bVar1 = DAT_0003c467;
    }
    uVar2 = (uint)bVar1;
    if (((((DAT_0003f286 & 0x20) == 0) || ((DAT_0003c4dd & 1) != 0)) || ((DAT_0003cbef & 0x20) != 0)
        ) || ((((DAT_0003c127 & 8) != 0 &&
               (((((DAT_0003c127 & 0x10) == 0 && ((DAT_0003c127 & 0x40) == 0)) &&
                 ((DAT_0003c127 & 0x80) == 0)) || ((DAT_0003c114 & 1) != 0)))) &&
              (((DAT_0003f282 & 4) == 0 || (DAT_0003ce2f != '\x06')))))) {
      if ((DAT_0003ce07 & 8) == 0) {
        if (uVar2 == 0) {
          if (((DAT_0003f287 & 2) != 0) && (((DAT_0003cb80 & 1) != 0 || (DAT_0003ce2f != '\0')))) {
            uVar2 = 0x8000;
            uVar3 = 2;
          }
        }
        else if (((DAT_0003f287 & 1) == 0) &&
                (((DAT_0003c3b1 != '\x01' || ((DAT_0003f286 & 0x10) == 0)) &&
                 ((DAT_0003cbef & 0x20) == 0)))) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar2 = uVar2 | 0x8000;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  DAT_0003cf0e = (uint8_t)uVar2;
  uVar4 = uVar2 & 0xff;
  DAT_0003cf0c = (&DAT_000faf00)[uVar4 * 2];
  DAT_0003cf0d = (&DAT_000faf01)[uVar4 * 2];
  if ((short)uVar2 < 0) {
    uVar4 = DAT_0003cbef & 0xf;
  }
  _DAT_0003cf04 = *(uint *)(&DAT_000faf18 + uVar4 * 0xc + uVar3 * 4) & _DAT_0003f2bc;
  if (1 < uVar3) {
    uVar3 = 1;
  }
  _DAT_0003cfa4 =
       (_DAT_0003f2bc & 0xfff80000 | (_DAT_0003f2bc & 0xfff8) << 3) &
       *(uint *)(uVar3 * 4 + uVar4 * 8 + 0xfafa8);
  _DAT_0003cfa4 =
       (_DAT_0003cf04 & 0xfff80000 | (_DAT_0003cf04 & 0xfff8) << 3 | _DAT_0003cfa4) & _DAT_0003cfa4;
  _DAT_0003cfa0 = _DAT_0003cfa4 & *(uint *)(uVar4 * 8 + 0xfafa8);
  mask_value_by_flag_table(uVar2 & 0xff);
  update_status_flags_000cf38e();
  return;
}
