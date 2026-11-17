/* @k10d update_status_flag_bits_000e0776 @ 0x000e0776
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates specific bits in DAT_0003c123 based on conditions in other status bytes and
 *   returns a bit from DAT_0003c133.
 * summary:
 *   The function checks bit 7 of DAT_0003c127 and bit 0 of DAT_0003c02f to determine which
 *   branch to take. It conditionally calls clear_flag_and_call_handler_000e0812 or
 *   check_and_set_flag_pair and then sets or clears bits 7 and 5 of DAT_0003c123 based on
 *   values in DAT_0003c12d, DAT_0003f283, and DAT_0003c128. Finally, it returns bit 0 of
 *   DAT_0003c133.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte update_status_flag_bits_000e0776(void)

{
  if ((DAT_0003c127 & 0x80) != 0) {
    if ((DAT_0003c02f & 1) == 0) {
      if ((DAT_0003c128 & 0x80) != 0) {
        clear_flag_and_call_handler_000e0812();
        if ((DAT_0003c12d & 0x10) == 0) {
          DAT_0003c123 = DAT_0003c123 & 0x7f;
        }
        else {
          DAT_0003c123 = DAT_0003c123 | 0x80;
        }
      }
      if ((DAT_0003f283 & 8) == 0) {
        DAT_0003c123 = DAT_0003c123 & 0xdf;
      }
      else if ((DAT_0003c12d & 8) == 0) {
        DAT_0003c123 = DAT_0003c123 & 0xdf;
      }
      else {
        DAT_0003c123 = DAT_0003c123 | 0x20;
      }
    }
    else {
      if ((DAT_0003c128 & 0x80) != 0) {
        check_and_set_flag_pair();
        DAT_0003c123 = DAT_0003c123 & 0x7f;
      }
      DAT_0003c123 = DAT_0003c123 & 0xdf;
    }
  }
  return DAT_0003c133 & 1;
}
