/* @k10d process_camera_state_update @ 0x000eb706
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates camera state flags and dispatches to specific handler functions based on
 *   current mode and status bits.
 * summary:
 *   The function checks global state flags (DAT_0003c396, DAT_0003f3e1) and waits for
 *   specific bits in DAT_0000004f. It sets bit 3 of DAT_0003c1ed and clears _DAT_0003c1e8.
 *   Depending on the value of DAT_0003c564, it branches into two main paths, calling
 *   various unverified functions (e.g., poll_flag_and_delay,
 *   process_status_flag_transition) and managing timeout-like delays via
 *   update_status_flags_and_counters_000de274. It also handles specific conditions related
 *   to DAT_0003c493 and DAT_0003c214 to trigger further state changes or calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_camera_state_update(void)

{
  bool bVar1;
  
  bVar1 = false;
  if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    update_status_flags_and_counters_000de274(1000);
  }
  FUN_000eb9a4();
  DAT_0003c1ed = DAT_0003c1ed | 8;
  _DAT_0003c1e8 = 0;
  if (DAT_0003c564 < 0x81) {
    poll_flag_and_delay();
    copy_global_and_call_helper();
    if ((DAT_0003c58b & 8) == 0) {
      FUN_000ed8b8();
    }
    if (((DAT_0003c214 & 8) != 0) && ((DAT_0003f3e1 & 2) != 0)) {
      while (((DAT_00000001 & 2) != 0 && ((DAT_00000001 & 4) == 0))) {
        FUN_000d5642(10);
        if ((DAT_00000001 & 8) == 0) {
          DAT_0003c030 = DAT_0003c030 & 0xf7;
          FUN_000d5fbe();
          FUN_000d5642(10);
          do {
          } while ((DAT_00000001 & 8) == 0);
        }
      }
    }
    check_state_and_call_subroutine();
    if ((DAT_0003c181 & 0x40) == 0) {
      if ((DAT_0003c493 == '\x15') || ((DAT_0003c493 == '\t' && ((DAT_0003c588 & 0x20) == 0)))) {
        if ((DAT_0003c589 & 0x40) == 0) {
          FUN_000ec718();
        }
      }
      else if ((((DAT_0003c493 == '\0') && ((DAT_0003c588 & 0x20) == 0)) &&
               ((DAT_0003c588 & 0x40) == 0)) || ((DAT_0003c492 == '\0' || (DAT_0003c492 == '\f'))))
      {
        FUN_000ec986();
      }
    }
    if ((DAT_0003c214 & 2) == 0) {
      process_status_flag_transition();
      write_masked_field_and_call_two_routines(6,DAT_0003c007 | 1);
      while ((DAT_000000cf & 4) == 0) {
        if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
           ((DAT_0000004f & 4) != 0)) {
          DAT_0000004f = DAT_0000004f & 0xfb;
          update_status_flags_and_counters_000de274(1000);
        }
      }
      DAT_000000cf = DAT_000000cf & 0xfb;
      FUN_000ed66c();
      if ((DAT_0003c4de & 1) == 0) {
        wait_for_condition_with_timeout();
      }
      else {
        if (DAT_0003c060 == '\x03') {
          write_masked_field_and_call_two_routines(0xf,1);
        }
        else {
          write_masked_field_and_call_two_routines(0xf,7);
        }
        branch_on_two_flag_bits();
      }
    }
    else {
      FUN_000ed620();
      DAT_00000002 = DAT_00000002 & 0xfd;
    }
  }
  else {
    while ((DAT_000000cf & 4) == 0) {
      if (((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
          ((DAT_0000004f & 4) != 0)) && (!bVar1)) {
        if (_DAT_000000ca < 800) {
          DAT_0000004f = DAT_0000004f & 0xfb;
          bVar1 = true;
        }
        else {
          DAT_0000004f = DAT_0000004f & 0xfb;
          update_status_flags_and_counters_000de274(1000);
        }
      }
    }
    if (((DAT_0003c214 & 8) != 0) && ((DAT_0003f3e1 & 2) != 0)) {
      while (((DAT_00000001 & 2) != 0 && ((DAT_00000001 & 4) == 0))) {
        FUN_000d5642(10);
        if ((DAT_00000001 & 8) == 0) {
          DAT_0003c030 = DAT_0003c030 & 0xf7;
          FUN_000d5fbe();
          FUN_000d5642(10);
          do {
          } while ((DAT_00000001 & 8) == 0);
        }
      }
    }
    DAT_00000002 = DAT_00000002 & 0xfd;
    if (bVar1) {
      DAT_0000004f = DAT_0000004f & 0xfb;
      set_three_byte_flags_000ecde4();
      update_status_flags_and_counters_000de274(1000);
    }
  }
  return;
}
