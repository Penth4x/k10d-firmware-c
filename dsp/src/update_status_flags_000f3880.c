/* @k10d update_status_flags_000f3880 @ 0x000f3880
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple DAT flag conditions to update a set of status bytes and clear
 *   specific bits in a control word.
 * summary:
 *   The function reads several single-byte and multi-byte DAT globals to determine a state.
 *   It conditionally clears bits 0x20 and 0x04 in DAT_0003c4d0 and resets associated
 *   counters like DAT_0003c455. It calls update_status_flag_bits_000f3996 in one branch
 *   before setting DAT_0003c455 to 3, 5, or 0 based on the value of DAT_0003c44a. The final
 *   value of DAT_0003c455 is copied to DAT_0003c457.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_000f3880(void)

{
  if (((DAT_0003c4de & 1) == 0) || (DAT_0003c44c == '\0')) {
    if (((DAT_0003c129 & 1) == 0) || (((DAT_0003c4df & 8) == 0 || (DAT_0003c44c == '\0')))) {
      if (((DAT_0003c394 & 0xf) >> 2 == 2) && (DAT_0003c44c != '\0')) {
        DAT_0003c44a = '\0';
        DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
        DAT_0003c455 = 0;
        DAT_0003c041 = 0;
        DAT_0003c4d6 = DAT_0003c4d6 & 0xfb;
        DAT_0003c447 = '\0';
      }
      else {
        DAT_0003c44a = DAT_0003c44c;
        DAT_0003c44e = DAT_0003c450;
        DAT_0003c452 = DAT_0003c453;
        update_status_flag_bits_000f3996();
        DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
        if (DAT_0003c44a == '\0') {
          DAT_0003c455 = 0;
        }
        else {
          DAT_0003c4d0 = DAT_0003c4d0 | 0x20;
          if (DAT_0003c44a == '\x02') {
            DAT_0003c455 = 5;
          }
          else if (DAT_0003c44a == '\x01') {
            DAT_0003c455 = 3;
          }
          else {
            DAT_0003c455 = 0;
          }
          DAT_0003c45c = 0;
          DAT_0003c459 = 0;
          DAT_0003c460 = 0;
          DAT_0003c45d = 0;
          DAT_0003c4d3 = DAT_0003c4d3 & 0xf7;
        }
      }
    }
    else {
      DAT_0003c44a = '\0';
      DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
      DAT_0003c455 = 0;
      DAT_0003c041 = 0;
    }
  }
  else {
    DAT_0003c44a = '\0';
    DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    DAT_0003c455 = 0;
    DAT_0003c041 = 0;
    if (DAT_0003c447 == '\x01') {
      DAT_0003c447 = '\0';
    }
  }
  DAT_0003c457 = DAT_0003c455;
  return;
}
