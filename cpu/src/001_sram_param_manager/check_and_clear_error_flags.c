/* @k10d check_and_clear_error_flags @ 0x100f14f6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status word for specific error bits and clears a related flag if the check
 *   passes.
 * summary:
 *   First calls test_bit_16_of_status_word to check a condition. If non-zero, it enters a
 *   loop (max 2 iterations) that calls check_two_status_flags with constant 0x2a1a. If that
 *   returns -1, it exits with error. Otherwise, it calls store_value_at_dat_offset_8 with
 *   the input parameter, clears a flag via dispatch_event_with_retry, and reads a status
 *   word via call_helper_with_zero_arg_100f19a0. It returns an error if bits 12, 13, 14,
 *   15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, or 31 are set in the status
 *   word (mask 0xf3f0000), otherwise returns success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_clear_error_flags(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    cVar3 = '\x01';
    do {
      iVar1 = check_two_status_flags(0x2a1a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(param_1 != 0);
        dispatch_event_with_retry(0x2a1a,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0xf3f0000) != 0) {
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
