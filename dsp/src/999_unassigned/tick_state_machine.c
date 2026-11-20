/* @k10d tick_state_machine @ 0x000d1a5c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Advances a countdown timer and updates a status flag byte based on a polled condition.
 * summary:
 *   The function decrements a counter at DAT_0003ce2e and calls compute_state_index_value
 *   to check a condition. Depending on the counter value and the result of
 *   compute_state_index_value, it sets or clears bit 0 and bit 7 of the status byte at
 *   DAT_0003ce05. It returns the value of bit 0 of DAT_0003ce05.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte tick_state_machine(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = _DAT_0003ce36;
  _DAT_0003ce36 = _DAT_0003ce30;
  iVar2 = compute_state_index_value();
  if (((((sVar1 == 0) || (_DAT_0003cc6a < (ushort)((DAT_0003c107 & 0xf) << 2))) ||
       ((short)_DAT_0003ce36 < 1)) ||
      (((DAT_0003ce02 & 0x10) != 0 && (_DAT_0003ce36 < _DAT_0003ce30)))) ||
     (((DAT_0003ce02 & 0x20) != 0 && (_DAT_0003ce30 < _DAT_0003ce36)))) {
    _DAT_0003ce36 = _DAT_0003ce30;
    DAT_0003ce05 = DAT_0003ce05 & 0x7f;
  }
  DAT_0003ce2e = DAT_0003ce2e + -1;
  if ((DAT_0003ce2e == '\0') || ((DAT_0003ce2f != '\0' && ((DAT_0003ce05 & 0x80) != 0)))) {
    if ((iVar2 < 0) && (((DAT_0003c128 & 0x40) != 0 || ((DAT_0003ce05 & 8) != 0)))) {
      DAT_0003ce2e = '\x01';
    }
    else {
      iVar2 = 0;
    }
    if (-1 < iVar2) {
      DAT_0003ce05 = DAT_0003ce05 | 1;
      _DAT_0003ce30 = _DAT_0003ce36;
      extract_nibble_from_byte();
    }
  }
  else {
    DAT_0003ce05 = DAT_0003ce05 & 0x7f;
    if (-1 < iVar2) {
      DAT_0003ce05 = DAT_0003ce05 | 0x80;
      DAT_0003ce08 = DAT_0003ce08 | 0x10;
    }
  }
  return DAT_0003ce05 & 1;
}
