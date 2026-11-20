/* @k10d decrement_and_check_counter @ 0x000e74c2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decments a 16-bit counter based on flag conditions and returns a status byte.
 * summary:
 *   The function first calls map_mode_byte_to_value. It then checks a series of flags in
 *   DAT_0003c02f, DAT_0003c4d1, and others to determine if a counter (_DAT_0003c058) should
 *   be incremented, clamped, reset, or decremented. If the counter is zero and specific
 *   conditions are met, it may clear a bit in DAT_0003c4d2 and call update_flag_and_notify.
 *   The return value is 1 if the initial flag check passed, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t decrement_and_check_counter(void)

{
  uint32_t uVar1;
  
  map_mode_byte_to_value();
  uVar1 = 0;
  if ((DAT_0003c02f & 1) == 0) {
    uVar1 = 1;
    if (((DAT_0003c4d1 & 8) != 0) && ((DAT_0003c4d1 & 0x40) == 0)) {
      _DAT_0003c058 = (ushort)DAT_0003c05a << 1;
    }
    if (((DAT_0003c05d & 1) != 0) && (_DAT_0003c058 < DAT_0003c05b)) {
      _DAT_0003c058 = (ushort)DAT_0003c05b;
    }
    if ((DAT_0003c331 & 0x20) != 0) {
      DAT_0003c331 = DAT_0003c331 & 0xdf;
      _DAT_0003c058 = 0;
    }
    if ((DAT_0003c392 == '\x01') || (DAT_0003c392 == '\x04')) {
      _DAT_0003c058 = 0;
    }
    if (_DAT_0003c058 == 0) {
      if ((((((DAT_0003c022 & 8) == 0) && ((DAT_0003c395 & 1) == 0)) && ((DAT_0003c393 & 0x10) == 0)
           ) && (((DAT_0003c193 & 0x80) == 0 && ((DAT_0003c123 & 0x80) == 0)))) &&
         (((DAT_0003c123 & 0x20) == 0 && ((DAT_0003f55e & 0x10) == 0)))) {
        uVar1 = 0;
      }
      if ((DAT_0003c392 == '\x02') && ((DAT_0003c066 & 1) != 0)) {
        DAT_0003c4d2 = DAT_0003c4d2 & 0x7f;
        update_flag_and_notify();
      }
    }
    else {
      _DAT_0003c058 = _DAT_0003c058 - 1;
    }
  }
  return uVar1;
}
