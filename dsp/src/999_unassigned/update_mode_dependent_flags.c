/* @k10d update_mode_dependent_flags @ 0x000f5dca
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Conditionally sets or clears bits in two byte variables based on a mode selector, then
 *   calls a series of update routines.
 * summary:
 *   The function reads a mode value from DAT_0003c440 and conditionally modifies bits 5 and
 *   6 of DAT_0003c4b3 and DAT_0003c4b7 based on various other state flags. It writes these
 *   modified values back to the globals and then calls ten subsequent functions
 *   (set_status_flags_by_mode through update_flag_byte_from_state). The specific meaning of
 *   the mode values and flags is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_mode_dependent_flags(void)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_0003c440 == 8) && ((DAT_0003c4de & 1) == 0)) {
    compute_clamped_index_and_dispatch();
  }
  else if (((DAT_0003c440 == 0x11) &&
           ((((DAT_0003c4d4 & 0x40) == 0 && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c4df & 8) == 0))
           )) && (((DAT_0003c1eb & 0x20) != 0 && ((DAT_0003c038 & 2) == 0)))) {
    compute_clamped_index_and_dispatch();
  }
  bVar1 = DAT_0003c4b3;
  bVar2 = DAT_0003c4b7;
  if ((DAT_0003c440 != 0) && (DAT_0003c440 != 1)) {
    if (DAT_0003c440 == 4) {
      bVar1 = DAT_0003c4b3 | 0x20;
      if (((DAT_0003c3c1 == '\0') && (((DAT_0003c58a & 0x40) != 0 || ((DAT_0003c58a & 0x80) != 0))))
         && (((DAT_0003c022 & 1) != 0 && ((DAT_0003c028 & 2) == 0)))) {
        bVar1 = DAT_0003c4b3 & 0xdf;
      }
    }
    else if (DAT_0003c440 == 5) {
      bVar2 = DAT_0003c4b7 | 0x40;
      if (((DAT_0003c3c1 == '\0') &&
          ((((DAT_0003c58a & 4) != 0 || ((DAT_0003c58a & 8) != 0)) && ((DAT_0003c022 & 1) != 0))))
         && ((DAT_0003c028 & 2) == 0)) {
        bVar2 = DAT_0003c4b7 & 0xbf;
      }
    }
    else if (DAT_0003c440 == 2) {
      bVar1 = DAT_0003c4b3 | 0x20;
      if (((DAT_0003c3c1 == '\x01') && ((DAT_0003c580 & 0x80) != 0)) &&
         (((DAT_0003c580 & 8) != 0 && (((DAT_0003c022 & 1) != 0 && ((DAT_0003c028 & 2) == 0)))))) {
        bVar2 = DAT_0003c4b7 & 0xbf;
      }
    }
    else if (DAT_0003c440 == 3) {
      bVar2 = DAT_0003c4b7 | 0x40;
      if ((((DAT_0003c3c1 == '\x01') && ((DAT_0003c580 & 0x40) != 0)) && ((DAT_0003c580 & 4) != 0))
         && (((DAT_0003c022 & 1) != 0 && ((DAT_0003c028 & 2) == 0)))) {
        bVar2 = DAT_0003c4b7 & 0xbf;
      }
    }
    else if (DAT_0003c440 == 8) {
      if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
        bVar1 = DAT_0003c4b3 | 0x20;
        bVar2 = DAT_0003c4b7 | 0x40;
      }
      else {
        bVar1 = DAT_0003c4b3 | 0x20;
      }
    }
    else if (DAT_0003c440 == 0x11) {
      if ((((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) && ((DAT_0003c4d4 & 0x40) == 0))
      {
        bVar2 = DAT_0003c4b7 | 0x40;
      }
    }
    else if (((DAT_0003c440 < 9) || (0x10 < DAT_0003c440)) && (DAT_0003c440 == 7)) {
      bVar1 = DAT_0003c4b3 | 0x20;
      bVar2 = DAT_0003c4b7 | 0x40;
      if ((((DAT_0003c581 & 4) != 0) || ((DAT_0003c581 & 8) != 0)) && ((DAT_0003c028 & 2) == 0)) {
        bVar1 = DAT_0003c4b3 & 0xdf;
        bVar2 = DAT_0003c4b7 & 0xbf;
      }
    }
  }
  DAT_0003c4b7 = bVar2;
  DAT_0003c4b3 = bVar1;
  set_status_flags_by_mode();
  set_flag_by_mode_index();
  update_flag_bit_6();
  adjust_flag_bit_6();
  update_status_byte_flags_000f639c();
  update_status_flag_bits_000f618a();
  update_status_flag_bit3();
  set_flag_if_bit1_set();
  update_flag_byte_from_state();
  return;
}
