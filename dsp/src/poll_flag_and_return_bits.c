/* @k10d poll_flag_and_return_bits @ 0x000d003a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Waits for a bit in DAT_0000004f while DAT_00000005 bit 7 is set, then returns bits 2-3
 *   of DAT_0000004f.
 * summary:
 *   Calls two unknown functions (clear_bit3_and_halt with a modified constant,
 *   dispatch_param_to_callees with 0) and initializes two globals. It then polls
 *   DAT_0000004f bit 26 until it is set, provided DAT_00000005 bit 7 remains set. Finally,
 *   it extracts and returns bits 2 and 3 from DAT_0000004f. The specific hardware or
 *   protocol context is not determinable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint poll_flag_and_return_bits(void)

{
  clear_bit3_and_halt(_DAT_0003cf0a | 8);
  dispatch_param_to_callees(0);
  DAT_00000048 = 0;
  DAT_0000004e = 3;
  do {
    if ((DAT_00000005 & 0x80) == 0) break;
  } while ((_DAT_0000004f & 0x4000000) == 0);
  return (_DAT_0000004f & 7) >> 2;
}
