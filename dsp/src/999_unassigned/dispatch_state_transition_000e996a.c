/* @k10d dispatch_state_transition_000e996a @ 0x000e996a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Dispatches actions based on the value of DAT_0003c219, calling specific handlers and
 *   updating state flags.
 * summary:
 *   The function checks the integer value stored at DAT_0003c219 against several negative
 *   constants (-9, -6, -5, -3). Depending on the match, it calls different subroutines
 *   (FUN_000e9d46, poll_status_bit_sequence, busy_wait_on_mode_flag, FUN_000d5642) and
 *   modifies global state variables like DAT_0003c022 and DAT_000000d8. It returns 1 only
 *   in the -3 case, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_state_transition_000e996a(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (DAT_0003c219 == -9) {
    _DAT_0003c21e = (ushort)DAT_0003c018;
    FUN_000e9d46();
  }
  else if (DAT_0003c219 == -6) {
    poll_status_bit_sequence();
    busy_wait_on_mode_flag(_DAT_0003c21e);
  }
  else if (DAT_0003c219 == -5) {
    poll_status_bit_sequence();
    FUN_000d5642(_DAT_0003c21e);
  }
  else if ((DAT_0003c219 != -4) && (DAT_0003c219 == -3)) {
    uVar1 = 1;
    DAT_000000d8 = 0;
    DAT_000000ea = 0;
    DAT_000000e8 = 0;
    DAT_000000ec = 3;
    DAT_000000db = 0xb;
    poll_status_bit_sequence();
    if (DAT_0003c21f == '\0') {
      _DAT_0003c058 = 0;
      FUN_000e786a();
      DAT_0003c022 = DAT_0003c022 & 0xf7;
    }
    if (DAT_0003c21f == '\x01') {
      DAT_0003c022 = DAT_0003c022 | 8;
    }
    if (DAT_0003c21f == '\x02') {
      DAT_0003c022 = DAT_0003c022 & 0xf7;
    }
    if (DAT_0003c21f == '\x03') {
      dispatch_on_flag_bits_000e7846();
      uVar1 = 0;
    }
  }
  return uVar1;
}
