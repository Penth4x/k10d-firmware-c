/* @k10d update_state_flags_000c6dd0 @ 0x000c6dd0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates multiple state flag bytes based on complex conditional logic and calls four
 *   helper functions.
 * summary:
 *   The function evaluates a series of bit flags in DAT_0003ce06, DAT_0003ce08, and
 *   DAT_0003c035 to determine control flow. Depending on the state, it modifies bits in
 *   DAT_0003c4d5 and DAT_0003c4de, and conditionally invokes
 *   update_state_flags_and_value_000c6ea2, update_state_flags_and_value_000c6f10,
 *   update_state_flags_and_value_000c6f7c, and update_state_flags_and_value_000c6fe6. It
 *   also sets DAT_0003c468 to 6 and updates DAT_0003ce09 under specific conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_000c6dd0(void)

{
  if ((((DAT_0003ce06 & 0x20) == 0) || ((DAT_0003ce06 & 0x40) == 0)) || ((DAT_0003ce08 & 8) != 0)) {
    if ((DAT_0003c035 & 0x10) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 & 0xb0;
    }
    else {
      if (DAT_0003c464 == '\x02') {
        if ((DAT_0003c4dd & 1) == 0) {
          if ((((DAT_0003c127 & 2) == 0) && ((DAT_0003c127 & 4) == 0)) &&
             ((((DAT_0003c127 & 0x10) == 0 &&
               (((DAT_0003c127 & 0x40) == 0 && ((DAT_0003c127 & 0x80) == 0)))) ||
              ((DAT_0003c114 & 1) != 0)))) {
            update_state_flags_and_value_000c6ea2();
            update_state_flags_and_value_000c6f10();
            update_state_flags_and_value_000c6f7c();
            update_state_flags_and_value_000c6fe6();
            if (((DAT_0003c3b3 == '\x02') && ((DAT_0003c030 & 8) == 0)) &&
               ((DAT_0003c393 & 0x10) == 0)) {
              DAT_0003c468 = 6;
              if ((DAT_0003c4d5 & 0x40) == 0) {
                DAT_0003c4de = DAT_0003c4de | 0x80;
              }
              DAT_0003c4d5 = DAT_0003c4d5 | 0x40;
            }
            else {
              DAT_0003c4d5 = DAT_0003c4d5 & 0xbf;
            }
          }
        }
        else {
          update_state_flags_and_value_000c6ea2();
          update_state_flags_and_value_000c6f10();
          update_state_flags_and_value_000c6f7c();
          update_state_flags_and_value_000c6fe6();
        }
      }
      else {
        DAT_0003c4d5 = DAT_0003c4d5 & 0xbf;
      }
      if ((DAT_0003ce00 & 0xe0) != 0) {
        if ((DAT_0003c4de & 0x80) != 0) {
          DAT_0003ce09 = DAT_0003ce09 | 8;
        }
        DAT_0003c4de = DAT_0003c4de & 0x7f;
      }
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xb0;
  }
  return;
}
