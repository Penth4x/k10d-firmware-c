/* @k10d update_flag_bits_and_dispatch @ 0x000cad34
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Clears specific bits in multiple flag bytes and conditionally calls a series of state
 *   handlers based on bit conditions.
 * summary:
 *   The function clears specific bits in several DAT globals if DAT_0003c022 is low. It
 *   then branches on DAT_0003c02f and DAT_0003c4d0 to execute different sequences of
 *   callees. It performs complex bit-manipulation on DAT_0003c4d4 and DAT_0003c4db, and
 *   conditionally calls update_state_flags_000c6dd0 or FUN_000c7526. The specific subsystem
 *   is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bits_and_dispatch(void)

{
  byte bVar1;
  
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c58b = DAT_0003c58b & 0xfe;
    DAT_0003c4d0 = DAT_0003c4d0 & 0x7f;
    DAT_0003c4d2 = DAT_0003c4d2 & 0x6f;
    DAT_0003c041 = 0;
    DAT_0003c580 = DAT_0003c580 & 0x3f;
    DAT_0003c581 = DAT_0003c581 & 0xf3;
    DAT_0003c4a6 = 0;
    DAT_0003c4db = DAT_0003c4db & 0x7d;
  }
  compute_flagged_offset_values();
  if ((DAT_0003c02f & 1) == 0) {
    update_status_flag_bits_000cb4c6();
    if ((DAT_0003c4d0 & 1) == 0) {
      DAT_0003c070 = DAT_0003c043;
      DAT_0003c071 = -DAT_0003c044;
      if ((DAT_0003c393 & 0x10) == 0) {
        DAT_0003c498 = DAT_0003c043;
        DAT_0003c499 = -DAT_0003c044;
        if ((DAT_0003c043 < -0x20) || (' ' < DAT_0003c043)) {
          DAT_0003c498 = '\0';
        }
        if ((DAT_0003c499 < -0x20) || (' ' < DAT_0003c499)) {
          DAT_0003c499 = '\0';
        }
      }
      else {
        DAT_0003c498 = '\0';
        DAT_0003c499 = '\0';
      }
      clamp_two_byte_counters();
      if (((DAT_0003c394 & 0xf) >> 2 == 1) || ((DAT_0003c394 & 0xf) >> 2 == 2)) {
        update_status_flags_000f41ac();
        if ((DAT_0003c4d6 & 8) == 0) {
          if (((DAT_0003c393 & 0x10) == 0) && ((DAT_0003c391 & 0x20) == 0)) {
            update_state_flags_000c6dd0();
          }
        }
        else {
          FUN_000c7526();
        }
        DAT_0003c4a4 = 1;
      }
      else {
        if ((DAT_0003c4d3 & 8) == 0) {
          DAT_0003c4a4 = DAT_0003c3bb;
        }
        update_flag_based_on_state_000c72ac();
        toggle_bit7_and_count();
        bVar1 = DAT_0003c4d4 & 0x9f;
        DAT_0003c4d4 = bVar1;
        if (((((DAT_0003c129 & 1) != 0) && ((DAT_0003c127 & 1) == 0)) &&
            (DAT_0003c4d4 = bVar1 | 0x20, DAT_0003c3b5 == '\0')) && ((DAT_0003c4dd & 1) == 0)) {
          DAT_0003c4d4 = bVar1 | 0x60;
        }
        if ((DAT_0003c4d4 & 0x40) == 0) {
          process_key_event_flags();
          update_status_flags_000f41ac();
          if ((DAT_0003c393 & 0x10) == 0) {
            dispatch_state_transition_000c762a();
            dispatch_state_transition_000c78d2();
            update_status_flag_bits_000c7240();
            update_state_flags_000c70da();
          }
        }
        else {
          update_status_flags_000f41ac();
          if ((DAT_0003c393 & 0x10) == 0) {
            update_status_flag_bits_000c7240();
          }
          DAT_0003c4d1 = DAT_0003c4d1 & 0x83;
          DAT_0003c4d0 = DAT_0003c4d0 & 0xf7;
          DAT_0003c4d2 = DAT_0003c4d2 & 0xef;
        }
        if ((DAT_0003c030 & 1) != 0) {
          DAT_0003c4d0 = DAT_0003c4d0 & 0x7f;
        }
        if (((DAT_0003c035 & 0x10) != 0) && ((DAT_0003c4db & 0x20) == 0)) {
          DAT_0003c4db = DAT_0003c4db & 0xfd;
          DAT_0003c4a6 = 0;
        }
        if ((((((((DAT_0003c030 & 1) == 0) || ((DAT_0003c030 & 2) == 0)) ||
               (((DAT_0003c035 & 0x10) == 0 ||
                ((((DAT_0003c036 & 0x80) == 0 || ((DAT_0003c000 & 0x80) == 0)) ||
                 ((DAT_0003c037 & 1) == 0)))))) ||
              (((DAT_0003c030 & 8) == 0 || ((DAT_0003c000 & 4) == 0)))) ||
             (((DAT_0003c000 & 0x10) == 0 ||
              ((((DAT_0003c035 & 0x80) == 0 || ((DAT_0003c000 & 0x20) == 0)) ||
               (((DAT_0003c000 & 0x10) == 0 ||
                ((((DAT_0003c037 & 0x40) == 0 || ((DAT_0003c038 & 0x80) != 0)) ||
                 ((DAT_0003c4df & 2) != 0)))))))))) ||
            (((DAT_0003c4df & 4) != 0 || (bVar1 = DAT_0003c4db, DAT_0003c440 != DAT_0003c441)))) &&
           (bVar1 = DAT_0003c4db & 0x7f, (DAT_0003c4db & 0x20) != 0)) {
          DAT_0003c4a6 = 0;
          bVar1 = DAT_0003c4db & 0x7d;
        }
        DAT_0003c4db = bVar1;
        if ((DAT_0003c000 & 2) == 0) {
          DAT_0003c4db = DAT_0003c4db & 0x7f;
        }
        if ((DAT_0003c4d6 & 8) == 0) {
          if (((DAT_0003c393 & 0x10) == 0) && ((DAT_0003c391 & 0x20) == 0)) {
            update_state_flags_000c6dd0();
          }
        }
        else {
          FUN_000c7526();
        }
        update_flag_bit_from_state_000c7488();
      }
    }
    else {
      update_status_flags_000f41ac();
    }
  }
  else {
    update_status_flags_000f41ac();
  }
  return;
}
