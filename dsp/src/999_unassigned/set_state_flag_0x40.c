/* @k10d set_state_flag_0x40 @ 0x000f4e16
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Sets bit 0x40 in two state variables based on multiple conditional checks of other
 *   state variables.
 * summary:
 *   The function reads two values from FUN_000f5090 and compute_and_dispatch_value. It then
 *   performs a series of checks on various DAT_0003cxxx globals. Depending on the state, it
 *   sets bit 0x40 in DAT_0003c4bd and/or DAT_0003c4b1. It conditionally calls
 *   decode_two_nibble_indices, set_flags_and_call_handler, compute_and_emit_indexed_values,
 *   or compute_indexed_lookup_or with the retrieved values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_flag_0x40(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = FUN_000f5090();
  uVar2 = compute_and_dispatch_value();
  if (((((DAT_0003c393 & 0x10) == 0) && ((DAT_0003c1eb & 2) == 0)) && ((DAT_0003c4d4 & 0x40) == 0))
     && (((DAT_0003c000 & 0x80) == 0 && ((DAT_0003c4de & 0x20) == 0)))) {
    decode_two_nibble_indices(uVar1);
  }
  if (((DAT_0003c440 == '\b') || (DAT_0003c440 == '\x11')) || ((DAT_0003c4d4 & 0x40) != 0)) {
    if ((DAT_0003c4d4 & 0x40) == 0) {
      if ((DAT_0003c4de & 0x20) == 0) {
        if (DAT_0003c48a != '@') {
          DAT_0003c4bd = DAT_0003c4bd | 0x40;
        }
        if (DAT_0003c48d != '\0') {
          DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
        }
        if (((DAT_0003c393 & 0x10) == 0) && ((DAT_0003c000 & 0x80) == 0)) {
          DAT_0003c4bd = DAT_0003c4bd | 0x40;
          set_flags_and_call_handler(uVar1,0);
        }
      }
      else if (DAT_0003c48d != '\0') {
        DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
      }
    }
  }
  else if ((DAT_0003c4d0 & 0x20) == 0) {
    if ((DAT_0003c4de & 0x20) == 0) {
      if ((DAT_0003c000 & 0x80) == 0) {
        DAT_0003c4bd = DAT_0003c4bd | 0x40;
        set_flags_and_call_handler(uVar1,0);
      }
      else if ((DAT_0003c440 == '\0') && ((DAT_0003c3bd == '\x01' || (DAT_0003c3bd == '\x02')))) {
        DAT_0003c4bd = DAT_0003c4bd | 0x40;
        set_flags_and_call_handler(uVar1,0);
        if (DAT_0003c48d != '\0') {
          DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
        }
      }
      else if ((DAT_0003c440 == '\x03') && ((DAT_0003c3c0 == '\x01' || (DAT_0003c3c0 == '\x02')))) {
        DAT_0003c4bd = DAT_0003c4bd | 0x40;
        set_flags_and_call_handler(uVar1,0);
        if (DAT_0003c48d != '\0') {
          DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
        }
      }
      else if ((DAT_0003c440 == '\x02') && ((DAT_0003c3bf == '\x01' || (DAT_0003c3bf == '\x02')))) {
        DAT_0003c4bd = DAT_0003c4bd | 0x40;
        set_flags_and_call_handler(uVar1,0);
        if (DAT_0003c48d != '\0') {
          DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
        }
      }
      else if (DAT_0003c48a == '@') {
        if ((DAT_0003c48d != '\0') &&
           (DAT_0003c4b1 = DAT_0003c4b1 | 0x40, (DAT_0003f326 & 0x80) != 0)) {
          set_flags_and_call_handler(uVar2,1);
        }
      }
      else {
        DAT_0003c4bd = DAT_0003c4bd | 0x40;
        set_flags_and_call_handler(uVar1,0);
        if (DAT_0003c48d != '\0') {
          DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
        }
      }
    }
    else if ((((DAT_0003c4de & 0x40) == 0) && (DAT_0003c48d != '\0')) &&
            (DAT_0003c4b1 = DAT_0003c4b1 | 0x40, (DAT_0003f326 & 0x80) != 0)) {
      set_flags_and_call_handler(uVar2,1);
    }
  }
  else {
    if (DAT_0003c48a != '@') {
      DAT_0003c4bd = DAT_0003c4bd | 0x40;
    }
    if (DAT_0003c48d != '\0') {
      DAT_0003c4b1 = DAT_0003c4b1 | 0x40;
    }
    if (DAT_0003c44a == '\x01') {
      compute_and_emit_indexed_values(uVar1);
    }
    else if (DAT_0003c44a == '\x02') {
      compute_indexed_lookup_or(uVar1);
    }
  }
  return;
}
