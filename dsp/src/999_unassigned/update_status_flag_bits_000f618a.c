/* @k10d update_status_flag_bits_000f618a @ 0x000f618a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears bit 3 of a status word and conditionally sets or clears bits in two related flag
 *   registers based on state variables.
 * summary:
 *   The function first clears bit 3 (0x08) of DAT_0003c4db. It then evaluates a complex set
 *   of conditions involving DAT_0003f326, DAT_0003c410, and several other state variables
 *   (DAT_0003c483, DAT_0003c566, DAT_0003c3b0). Depending on these conditions, it sets bit
 *   3 of DAT_0003c4db and either sets bit 0 of DAT_0003c4bb or bit 1 of DAT_0003c4b8, based
 *   on bit 0 of DAT_0003f327. In one branch, it also calls clear_flag_bit_based_on_state
 *   and may clear the previously set bit in DAT_0003c4bb or DAT_0003c4b8 if additional
 *   conditions are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000f618a(void)

{
  DAT_0003c4db = DAT_0003c4db & 0xf7;
  if ((DAT_0003f326 & 4) == 0) {
    if ((DAT_0003c410 & 0x40) == 0) {
      if ((DAT_0003c483 < 0x30) || (DAT_0003c3b0 != '\x01')) {
        if ((DAT_0003c483 < 0x38) || (DAT_0003c3b0 != '\x02')) {
          if ((DAT_0003c483 < 0x40) || (DAT_0003c3b0 != '\x03')) {
            if ((0x47 < DAT_0003c483) && (DAT_0003c3b0 == '\x04')) {
              DAT_0003c4db = DAT_0003c4db | 8;
              if ((DAT_0003f327 & 1) == 0) {
                DAT_0003c4bb = DAT_0003c4bb | 1;
              }
              else {
                DAT_0003c4b8 = DAT_0003c4b8 | 2;
              }
            }
          }
          else {
            DAT_0003c4db = DAT_0003c4db | 8;
            if ((DAT_0003f327 & 1) == 0) {
              DAT_0003c4bb = DAT_0003c4bb | 1;
            }
            else {
              DAT_0003c4b8 = DAT_0003c4b8 | 2;
            }
          }
        }
        else {
          DAT_0003c4db = DAT_0003c4db | 8;
          if ((DAT_0003f327 & 1) == 0) {
            DAT_0003c4bb = DAT_0003c4bb | 1;
          }
          else {
            DAT_0003c4b8 = DAT_0003c4b8 | 2;
          }
        }
      }
      else {
        DAT_0003c4db = DAT_0003c4db | 8;
        if ((DAT_0003f327 & 1) == 0) {
          DAT_0003c4bb = DAT_0003c4bb | 1;
        }
        else {
          DAT_0003c4b8 = DAT_0003c4b8 | 2;
        }
      }
    }
  }
  else {
    if ((DAT_0003c566 < 0x30) || (DAT_0003c3b0 != '\x01')) {
      if ((DAT_0003c566 < 0x38) || (DAT_0003c3b0 != '\x02')) {
        if ((DAT_0003c566 < 0x40) || (DAT_0003c3b0 != '\x03')) {
          if ((0x47 < DAT_0003c566) && (DAT_0003c3b0 == '\x04')) {
            if ((DAT_0003f327 & 1) == 0) {
              DAT_0003c4bb = DAT_0003c4bb | 1;
            }
            else {
              DAT_0003c4b8 = DAT_0003c4b8 | 2;
            }
            clear_flag_bit_based_on_state();
          }
        }
        else {
          if ((DAT_0003f327 & 1) == 0) {
            DAT_0003c4bb = DAT_0003c4bb | 1;
          }
          else {
            DAT_0003c4b8 = DAT_0003c4b8 | 2;
          }
          clear_flag_bit_based_on_state();
        }
      }
      else {
        if ((DAT_0003f327 & 1) == 0) {
          DAT_0003c4bb = DAT_0003c4bb | 1;
        }
        else {
          DAT_0003c4b8 = DAT_0003c4b8 | 2;
        }
        clear_flag_bit_based_on_state();
      }
    }
    else {
      if ((DAT_0003f327 & 1) == 0) {
        DAT_0003c4bb = DAT_0003c4bb | 1;
      }
      else {
        DAT_0003c4b8 = DAT_0003c4b8 | 2;
      }
      clear_flag_bit_based_on_state();
    }
    if (((((DAT_0003c410 & 0x40) != 0) && (DAT_0003c440 != '\x06')) && (DAT_0003c440 != '\a')) &&
       ((DAT_0003c028 & 2) == 0)) {
      if ((DAT_0003f327 & 1) == 0) {
        DAT_0003c4bb = DAT_0003c4bb & 0xfe;
      }
      else {
        DAT_0003c4b8 = DAT_0003c4b8 & 0xfd;
      }
    }
  }
  return;
}
