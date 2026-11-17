/* @k10d clear_bit_and_dispatch_state @ 0x000d015a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears bit 1 of a state word and conditionally invokes a series of state transition
 *   handlers.
 * summary:
 *   The function first calls check_flag_and_call_helper_000e7944 and clears bit 1 of
 *   DAT_0003ce06. It then checks bit 3 of DAT_0003cf0a; if clear, it performs further
 *   checks on DAT_0003cf09 and calls call_subroutine_with_arg_two and potentially
 *   call_subroutine_with_arg_4. It subsequently calls clear_bit3_and_halt with a modified
 *   value of DAT_0003cf0a, resets DAT_00000078, and calls call_d05b8_with_fffb. Finally, it
 *   may call wait_for_status_bits_and_copy based on bits in DAT_0003f284 and DAT_0003cf03,
 *   sets bit 3 of DAT_0003cf0a, and returns 6 or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t clear_bit_and_dispatch_state(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  check_flag_and_call_helper_000e7944();
  DAT_0003ce06 = DAT_0003ce06 & 0xfe;
  if ((_DAT_0003cf0a & 8) == 0) {
    if (((DAT_0003cf09 & 8) == 0) && (call_subroutine_with_arg_two(), (DAT_0003cf09 & 0x30) == 0)) {
      call_subroutine_with_arg_4();
    }
    clear_bit3_and_halt(_DAT_0003cf0a | 0xf88);
    DAT_00000078 = 0;
    call_d05b8_with_fffb();
    if (((DAT_0003f284 & 0x80) == 0) && ((DAT_0003cf03 & 1) == 0)) {
      wait_for_status_bits_and_copy();
    }
    _DAT_0003cf0a = _DAT_0003cf0a | 8;
    uVar1 = 6;
  }
  return uVar1;
}
