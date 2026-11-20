/* @k10d update_camera_state_flags @ 0x000cab36
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates multiple state flag bytes based on current mode and status conditions.
 * summary:
 *   The function reads several global state variables (DAT_0003c030, DAT_0003c066,
 *   DAT_0003c392, etc.) and conditionally clears or sets specific bits in DAT_0003c410,
 *   DAT_0003c330, DAT_0003c4d6, and DAT_0003c4db. It branches on the value of DAT_0003c392
 *   (likely a mode indicator) to determine which flags to modify. It calls several helper
 *   functions (clear_flag_bits_if_condition_met_000cb528, update_flag_bits_and_dispatch,
 *   reset_state_and_call_helpers, etc.) to perform side effects or further state updates
 *   depending on the flag states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_camera_state_flags(void)

{
  clear_flag_bits_if_condition_met_000cb528();
  if (((DAT_0003c030 & 4) == 0) || ((DAT_0003c066 & 1) != 0)) {
    if (((DAT_0003c066 & 0x10) == 0) || ((DAT_0003c066 & 1) != 0)) {
      if (((DAT_0003c4d6 & 2) == 0) && ((DAT_0003c036 & 0x1f) >> 1 == 9)) {
        DAT_0003c410 = DAT_0003c410 & 0xfe;
      }
      if (((DAT_0003c392 != '\x02') && (DAT_0003c392 != '\x03')) || ((DAT_0003c000 & 8) == 0)) {
        DAT_0003c330 = DAT_0003c330 & 0xcf;
      }
      if ((DAT_0003c392 == '\x01') || (DAT_0003c392 == '\x04')) {
        DAT_0003c410 = DAT_0003c410 & 0xfe;
      }
      else {
        if (DAT_0003c392 == '\x02') {
          DAT_0003c410 = DAT_0003c410 & 0xfe;
        }
        DAT_0003c4d6 = DAT_0003c4d6 & 0xfe;
        if ((((DAT_0003c41a == '\0') && (DAT_0003c41b == '\0')) &&
            (((DAT_0003c41c & 3) == 0 &&
             ((((DAT_0003c412 == '\0' && (DAT_0003c413 == '\0')) && (DAT_0003c414 == '\0')) &&
              ((DAT_0003c415 == '\0' && (DAT_0003c416 == '\0')))))))) &&
           ((DAT_0003c417 == '\0' && ((DAT_0003c418 == '\0' && ((DAT_0003c419 & 3) == 0)))))) {
          update_flag_bits_and_dispatch();
          process_pending_event_flags_000f35d6();
        }
        else {
          DAT_0003c4d6 = DAT_0003c4d6 | 1;
          reset_state_and_call_helpers();
          process_pending_event_flags_000f35d6();
          update_state_variables_on_mode_change();
        }
        if ((((DAT_0003c440 != DAT_0003c441) || (DAT_0003c447 != DAT_0003c448)) ||
            (DAT_0003c472 != DAT_0003c471)) ||
           ((_DAT_0003c49c != _DAT_0003c126 || (DAT_0003c390 == '\x04')))) {
          DAT_0003c041 = 0;
        }
        if ((DAT_0003c4d6 & 2) == 0) {
          reset_status_flags();
        }
        else {
          reset_status_flags_and_call_initializers();
        }
        update_status_flag_bits_000c737c();
        if ((((DAT_0003c4db & 0x40) != 0) && ((DAT_0003c394 & 0x10) == 0)) &&
           (DAT_0003c3cf == '\x02')) {
          if ((DAT_0003c46d == '\x05') || (DAT_0003c46d == '\x06')) {
            DAT_0003c4db = DAT_0003c4db | 0x80;
          }
          else {
            DAT_0003c4db = DAT_0003c4db & 0x7f;
          }
        }
        copy_and_update_flag_bytes();
      }
    }
    else {
      clear_and_mask_state_flags();
    }
  }
  else {
    reset_state_flags_and_call_initializers_000f3220();
  }
  return;
}
