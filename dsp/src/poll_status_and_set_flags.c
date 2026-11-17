/* @k10d poll_status_and_set_flags @ 0x000d008c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Polls a status byte for a bit-6 condition and updates a local flag byte based on
 *   several checks.
 * summary:
 *   The function calls FUN_000d5642 and clear_bit3_and_halt, then waits in a loop until bit
 *   6 of DAT_00000079 is set. It clears bit 0 of DAT_0003cf03, sets DAT_0000007a to 0x23,
 *   and re-enables a bit in DAT_00000079. It then sets bit 0 of DAT_0003cf03 if
 *   DAT_00000005 lacks bit 7 or if poll_flag_and_return_bits returns non-zero. Finally, it
 *   calls clear_bit_and_dispatch_state and returns 0xe if bit 0 of DAT_0003cf03 is set and
 *   DAT_0000007e is greater than 0xf0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_status_and_set_flags(void)

{
  int iVar1;
  
  FUN_000d5642(DAT_0003f496);
  clear_bit3_and_halt(0xfff8);
  if (((DAT_0003f284 & 1) != 0) && ((DAT_0003f284 & 2) == 0)) {
    DAT_000000ac = 10;
    write_masked_field_and_call_two_routines(0xd,_DAT_0003c00e | 0x10);
  }
  FUN_000d5642(DAT_0003f497);
  DAT_0003cf03 = DAT_0003cf03 & 0xfe;
  DAT_0000007a = 0x23;
  DAT_00000078 = 4;
  do {
  } while ((DAT_00000079 & 0x40) == 0);
  _DAT_0003cf0a = _DAT_0003f2ae;
  DAT_00000079 = DAT_00000079 & 0x7f | 2;
  clear_bit3_and_halt(_DAT_0003f2ae);
  if ((DAT_00000005 & 0x80) == 0) {
    DAT_0003cf03 = DAT_0003cf03 | 1;
  }
  iVar1 = poll_flag_and_return_bits();
  if (iVar1 != 0) {
    DAT_0003cf03 = DAT_0003cf03 | 1;
  }
  clear_bit_and_dispatch_state();
  if (((DAT_0003cf03 & 1) != 0) && (0xf0 < _DAT_0000007e)) {
    iVar1 = 0xe;
  }
  return iVar1;
}
