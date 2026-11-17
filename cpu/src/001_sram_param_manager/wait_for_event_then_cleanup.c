/* @k10d wait_for_event_then_cleanup @ 0x100f124c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a condition, waits for an event with a single retry, and performs cleanup if the
 *   event is found.
 * summary:
 *   The function first calls test_bit_16_of_status_word to check a condition. If the
 *   condition is non-zero, it enters a loop that calls check_two_status_flags with argument
 *   0x909. If check_two_status_flags returns a value other than -1, the function calls
 *   store_value_at_dat_offset_8, dispatch_event_with_retry, fill_four_word_array, and
 *   update_16bit_counter_field before returning 0. If the event is not found, the loop
 *   retries once (controlled by sVar2) before returning -1. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t wait_for_event_then_cleanup(void)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    sVar2 = 1;
    do {
      iVar1 = check_two_status_flags(0x909);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(_DAT_80048098/*SDRAM*/);
        dispatch_event_with_retry(0x909,0);
        fill_four_word_array(&DAT_8004809c/*SDRAM*/);
        update_16bit_counter_field();
        return 0;
      }
      bVar3 = sVar2 != 0;
      sVar2 = sVar2 + -1;
    } while (bVar3);
  }
  return 0xffffffff;
}
