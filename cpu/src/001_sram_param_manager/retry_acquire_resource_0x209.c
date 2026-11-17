/* @k10d retry_acquire_resource_0x209 @ 0x100f1128
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and retries acquiring resource 0x209 up to twice, then initializes
 *   two globals on success.
 * summary:
 *   Calls test_bit_16_of_status_word to check a condition; if non-zero, loops up to 2 times
 *   calling check_two_status_flags(0x209). If that returns -1, it calls
 *   store_value_at_dat_offset_8(0), dispatch_event_with_retry(0x209,0),
 *   fill_four_word_array(&DAT_800480ac), and empty_stub_100f0f1a, then returns 0. Returns
 *   -1 if the initial check fails or retries are exhausted. The resource ID 0x209 and the
 *   specific globals are not identified in the brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t retry_acquire_resource_0x209(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    do {
      iVar1 = check_two_status_flags(0x209);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(0);
        dispatch_event_with_retry(0x209,0);
        fill_four_word_array(&DAT_800480ac/*SDRAM*/);
        empty_stub_100f0f1a();
        return 0;
      }
      bVar3 = cVar2 != '\0';
      cVar2 = cVar2 + -1;
    } while (bVar3);
  }
  return 0xffffffff;
}
