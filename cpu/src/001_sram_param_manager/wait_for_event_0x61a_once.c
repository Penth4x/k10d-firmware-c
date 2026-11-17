/* @k10d wait_for_event_0x61a_once @ 0x100f13d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a global flag, waits for event 0x61a, processes it, and checks a status word for
 *   error bits.
 * summary:
 *   First calls test_bit_16_of_status_word to check a condition; if non-zero, enters a loop
 *   (max 1 iteration) that calls check_two_status_flags(0x61a) to wait for a specific
 *   event. If the event is available (return != -1), it calls
 *   store_value_at_dat_offset_8(param_1) to process the event,
 *   dispatch_event_with_retry(0x61a, 0) to clear/acknowledge it, and
 *   call_helper_with_zero_arg_100f19a0 to read a status word. It returns 0xffffffff if the
 *   status word has any bits set in the mask 0x8f3f0000, otherwise 0. Returns 0xffffffff if
 *   the initial condition fails or the event is not available.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_event_0x61a_once(uint32_t param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    sVar3 = 1;
    do {
      iVar1 = check_two_status_flags(0x61a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(param_1);
        dispatch_event_with_retry(0x61a,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0x8f3f0000/*SDRAM*/) != 0) {
          return 0xffffffff;
        }
        return 0;
      }
      bVar4 = sVar3 != 0;
      sVar3 = sVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
