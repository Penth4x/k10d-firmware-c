/* @k10d update_status_flag_bit0 @ 0x000e5e40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 0 of DAT_0003c021 and conditionally sets it based on a complex state machine
 *   of other DAT globals.
 * summary:
 *   The function first clears bit 0 of DAT_0003c021. It then evaluates a nested series of
 *   bitwise checks on DAT_0003c037, DAT_0003c127, DAT_0003c126, DAT_0003c143, DAT_0003c101,
 *   and DAT_0003c12c. If specific combinations of these bits are met, it sets bit 0 of
 *   DAT_0003c021. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bit0(void)

{
  DAT_0003c021 = DAT_0003c021 & 0xfe;
  if ((DAT_0003c037 & 0x3f) >> 4 != 1) {
    if ((DAT_0003c127 & 0x80) == 0) {
      if (((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
        if ((DAT_0003c127 & 0x20) == 0) {
          if (((DAT_0003c127 & 8) == 0) && ((DAT_0003c126 & 2) == 0)) {
            DAT_0003c021 = DAT_0003c021 | 1;
          }
          else if ((DAT_0003c101 & 0x80) != 0) {
            DAT_0003c021 = DAT_0003c021 | 1;
          }
        }
        else if ((DAT_0003c12c & 0x40) != 0) {
          DAT_0003c021 = DAT_0003c021 | 1;
        }
      }
      else if ((DAT_0003c143 & 0x20) == 0) {
        if ((DAT_0003c101 & 0x80) != 0) {
          DAT_0003c021 = DAT_0003c021 | 1;
        }
      }
      else if ((DAT_0003c12d & 1) != 0) {
        DAT_0003c021 = DAT_0003c021 | 1;
      }
    }
    else if ((DAT_0003c12d & 1) != 0) {
      DAT_0003c021 = DAT_0003c021 | 1;
    }
  }
  return;
}
