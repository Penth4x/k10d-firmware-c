/* @k10d process_key_event_flags @ 0x000c6a10
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates key state and mode flags to update event status bits and trigger a handler.
 * summary:
 *   The function reads a status byte (DAT_0003c4d2) and clears bit 0 if specific mode
 *   conditions are met. It then branches on a mode identifier (DAT_0003c440) and other
 *   flags to set various status bits (e.g., 0x40 in DAT_0003c410) and call
 *   check_and_set_flag_bit2_000e3bd0. The logic appears to manage state transitions for
 *   input events or mode changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_key_event_flags(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar1 = DAT_0003c4d2 & 0xfd;
  if (((DAT_0003c000 & 2) == 0) || ((DAT_0003c410 & 4) == 0)) {
    bVar2 = DAT_0003c4d2 & 1;
    DAT_0003c4d2 = bVar1;
    if ((bVar2 == 0) && (DAT_0003c4d2 = bVar1 | 1, (DAT_0003c036 & 0x80) != 0)) {
      if ((DAT_0003c035 & 0x10) == 0) {
        if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 != 6)) && (DAT_0003c440 != 7)) {
          bVar3 = false;
          if ((DAT_0003c440 == 3) && ((DAT_0003c3c0 == '\x03' || (DAT_0003c3c0 == '\x04')))) {
            bVar3 = true;
          }
          if (!bVar3) {
            bVar3 = false;
            if ((DAT_0003c440 == 2) && ((DAT_0003c3bf == '\x04' || (DAT_0003c3bf == '\x03')))) {
              bVar3 = true;
            }
            if (((!bVar3) && (DAT_0003c440 != 8)) && (DAT_0003c440 != 0x11)) {
              DAT_0003c410 = DAT_0003c410 | 0x40;
              DAT_0003c486 = 0xff;
              DAT_0003c485 = DAT_0003c3ad;
              DAT_0003c4db = DAT_0003c4db | 0x12;
              DAT_0003c4a6 = 0;
            }
          }
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 4)) || (DAT_0003c440 == 5)) {
        DAT_0003c4d2 = bVar1 | 3;
        if (((DAT_0003f326 & 2) != 0) && ((DAT_0003c023 & 1) == 0)) {
          check_and_set_flag_bit2_000e3bd0();
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 0)) &&
              ((DAT_0003c3bd != '\0' && (DAT_0003c3bd != '\x04')))) {
        DAT_0003c4d2 = bVar1 | 3;
        if (((DAT_0003f326 & 2) != 0) && ((DAT_0003c023 & 1) == 0)) {
          check_and_set_flag_bit2_000e3bd0();
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 6)) &&
              ((DAT_0003c3be == '\x01' || (DAT_0003c3be == '\x02')))) {
        DAT_0003c4d2 = bVar1 | 3;
        if (((DAT_0003f326 & 2) != 0) && ((DAT_0003c023 & 1) == 0)) {
          check_and_set_flag_bit2_000e3bd0();
        }
      }
      else if (((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 8)) {
        if ((((DAT_0003c4de & 1) == 0) && (DAT_0003c4d2 = bVar1 | 0x11, (DAT_0003f326 & 2) != 0)) &&
           ((DAT_0003c023 & 1) == 0)) {
          check_and_set_flag_bit2_000e3bd0();
        }
      }
      else if (DAT_0003c440 == 0x11) {
        if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
          if (((DAT_0003c1eb & 0x20) == 0) || ((DAT_0003c038 & 2) != 0)) {
            if ((((DAT_0003c038 & 2) != 0) && (DAT_0003c4d2 = bVar1 | 9, (DAT_0003f326 & 2) != 0))
               && ((DAT_0003c023 & 1) == 0)) {
              check_and_set_flag_bit2_000e3bd0();
            }
          }
          else {
            DAT_0003c4d2 = bVar1 | 9;
            if (((DAT_0003f326 & 2) != 0) && ((DAT_0003c023 & 1) == 0)) {
              check_and_set_flag_bit2_000e3bd0();
            }
          }
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 7)) && ((DAT_0003c000 & 0x80) != 0)
              ) {
        DAT_0003c4d2 = bVar1 | 0x11;
        if (((DAT_0003f326 & 2) != 0) && ((DAT_0003c023 & 1) == 0)) {
          check_and_set_flag_bit2_000e3bd0();
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 3)) && ((DAT_0003c000 & 0x80) != 0)
              ) {
        if ((DAT_0003c3c0 == '\x03') || (DAT_0003c3c0 == '\x04')) {
          DAT_0003c410 = DAT_0003c410 | 0x40;
          DAT_0003c486 = 0xff;
          DAT_0003c485 = DAT_0003c3ad;
          DAT_0003c4db = DAT_0003c4db | 0x12;
          DAT_0003c4a6 = 0;
        }
      }
      else if ((((DAT_0003c393 & 0x10) == 0) && (DAT_0003c440 == 2)) && ((DAT_0003c000 & 0x80) != 0)
              ) {
        if ((DAT_0003c3bf == '\x03') || (DAT_0003c3bf == '\x04')) {
          DAT_0003c410 = DAT_0003c410 | 0x40;
          DAT_0003c486 = 0xff;
          DAT_0003c485 = DAT_0003c3ad;
          DAT_0003c4db = DAT_0003c4db | 0x12;
          DAT_0003c4a6 = 0;
        }
      }
      else if ((((((DAT_0003c393 & 0x10) == 0) && (8 < DAT_0003c440)) && (DAT_0003c440 < 0x11)) &&
               ((DAT_0003c000 & 0x80) != 0)) &&
              ((DAT_0003c3bf == '\x03' || (DAT_0003c3bf == '\x04')))) {
        DAT_0003c410 = DAT_0003c410 | 0x40;
        DAT_0003c486 = 0xff;
        DAT_0003c485 = DAT_0003c3ad;
        DAT_0003c4db = DAT_0003c4db | 0x12;
        DAT_0003c4a6 = 0;
      }
    }
  }
  else {
    DAT_0003c4d2 = DAT_0003c4d2 & 0xfc;
  }
  return;
}
