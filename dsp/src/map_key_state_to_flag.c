/* @k10d map_key_state_to_flag @ 0x000f3a42
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Translates a raw key input code into a normalized state value based on the current
 *   mode.
 * summary:
 *   The function reads a mode indicator from DAT_0003c440 and a raw input code from
 *   DAT_0003c46e. It applies a series of conditional branches to determine a normalized
 *   value, which is stored in DAT_0003c46d. Finally, it updates a flag byte at
 *   DAT_0003c4d6, setting bit 6 if the normalized value is 2 or 3, and clearing bit 6
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_key_state_to_flag(void)

{
  if (DAT_0003c440 == 1) {
    if (((((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) || (DAT_0003c46e == '\b')) ||
        ((DAT_0003c46e == '\n' || (DAT_0003c46e == '\x05')))) || (DAT_0003c46e == '\x06')) {
      DAT_0003c46d = '\x02';
    }
    else {
      DAT_0003c46d = '\x03';
    }
  }
  else if ((((DAT_0003c440 == 0) || (DAT_0003c440 == 4)) || (DAT_0003c440 == 6)) ||
          (DAT_0003c440 == 2)) {
    if ((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) {
      DAT_0003c46d = '\0';
    }
    else if ((DAT_0003c46e == '\x03') || (DAT_0003c46e == '\x01')) {
      DAT_0003c46d = '\x01';
    }
    else if ((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) {
      if (DAT_0003c447 == '\x05') {
        DAT_0003c46d = '\0';
      }
      else {
        DAT_0003c46d = DAT_0003c46e;
      }
    }
    else {
      DAT_0003c46d = DAT_0003c46e;
    }
  }
  else if ((DAT_0003c440 < 9) || (0x10 < DAT_0003c440)) {
    if (DAT_0003c440 == 0x11) {
      if ((((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) || (DAT_0003c46e == '\b')) ||
         (DAT_0003c46e == '\n')) {
        DAT_0003c46d = '\0';
      }
      else if (((DAT_0003c46e == '\x03') || (DAT_0003c46e == '\x01')) || (DAT_0003c46e == '\t')) {
        DAT_0003c46d = '\x01';
      }
      else if ((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) {
        if (DAT_0003c447 == '\x05') {
          DAT_0003c46d = '\0';
        }
        else {
          DAT_0003c46d = DAT_0003c46e;
        }
      }
      else {
        DAT_0003c46d = DAT_0003c46e;
      }
    }
    else if ((DAT_0003c4df & 8) == 0) {
      if (((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) || (DAT_0003c46e == '\b')) {
        DAT_0003c46d = '\0';
      }
      else if (((DAT_0003c46e == '\x03') || (DAT_0003c46e == '\x01')) || (DAT_0003c46e == '\t')) {
        DAT_0003c46d = '\x01';
      }
      else if ((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) {
        if (DAT_0003c447 == '\x05') {
          DAT_0003c46d = '\0';
        }
        else {
          DAT_0003c46d = DAT_0003c46e;
        }
      }
      else {
        DAT_0003c46d = DAT_0003c46e;
      }
    }
    else if (((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) ||
            ((DAT_0003c46e == '\b' || (DAT_0003c46e == '\n')))) {
      DAT_0003c46d = '\0';
    }
    else if ((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) {
      if (DAT_0003c447 == '\x05') {
        DAT_0003c46d = '\0';
      }
      else {
        DAT_0003c46d = DAT_0003c46e;
      }
    }
    else {
      DAT_0003c46d = '\x01';
    }
  }
  else if (((DAT_0003c46e == '\x02') || (DAT_0003c46e == '\0')) || (DAT_0003c46e == '\n')) {
    DAT_0003c46d = '\0';
  }
  else if ((DAT_0003c46e == '\x03') || (DAT_0003c46e == '\x01')) {
    DAT_0003c46d = '\x01';
  }
  else if ((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) {
    if (DAT_0003c447 == '\x05') {
      DAT_0003c46d = '\0';
    }
    else {
      DAT_0003c46d = DAT_0003c46e;
    }
  }
  else {
    DAT_0003c46d = DAT_0003c46e;
  }
  DAT_0003c4d6 = DAT_0003c4d6 & 0xbf;
  if ((DAT_0003c46d == '\x02') || (DAT_0003c46d == '\x03')) {
    DAT_0003c4d6 = DAT_0003c4d6 | 0x40;
  }
  else if (((DAT_0003c46d == '\x05') || (DAT_0003c46d == '\x06')) && ((DAT_0003c129 & 1) != 0)) {
    DAT_0003c46d = '\0';
  }
  return;
}
