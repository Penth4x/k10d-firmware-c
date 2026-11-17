/* @k10d wait_for_event_and_acknowledge @ 0x100f1310
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Polls for a specific event ID, acknowledges it, and checks a status word for error
 *   bits.
 * summary:
 *   The function first checks a condition via test_bit_16_of_status_word. If true, it
 *   enters a retry loop (up to 2 times) calling check_two_status_flags with ID 0x113a. If
 *   the event is found (return != -1), it calls store_value_at_dat_offset_8 with a shifted
 *   parameter, acknowledges the event via dispatch_event_with_retry, and reads a status
 *   word via call_helper_with_zero_arg_100f19a0. It returns an error if specific high bits
 *   (0xcf3f0000) are set in the status word, otherwise success. If the event is not found
 *   after retries, it returns an error.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_event_and_acknowledge(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    cVar3 = '\x01';
    do {
      iVar1 = check_two_status_flags(0x113a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(param_1 << 9);
        dispatch_event_with_retry(0x113a,0x10);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0xcf3f0000) != 0) {
          return 0xffffffff;
        }
        return 0;
      }
      bVar4 = cVar3 != '\0';
      cVar3 = cVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
