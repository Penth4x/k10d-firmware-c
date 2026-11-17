/* @k10d retry_acquire_resource_0x31a @ 0x100f1184
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Retries acquiring resource 0x31a up to 255 times, then reads a status word and stores
 *   its upper half.
 * summary:
 *   First checks a condition via test_bit_16_of_status_word. If true, loops up to 255 times
 *   calling check_two_status_flags(0x31a) until it returns a value other than -1. On
 *   success it calls store_value_at_dat_offset_8(0) and dispatch_event_with_retry(0x31a,0),
 *   then reads a status word via call_helper_with_zero_arg_100f19a0. If bit 13 (0x2000) is
 *   set it returns -1; otherwise it stores the upper 16 bits of the status word into
 *   DAT_80048098 and returns 0. Returns -1 if the initial check fails or the retry loop
 *   exhausts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t retry_acquire_resource_0x31a(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 != 0) {
    cVar3 = '\x01';
    do {
      iVar1 = check_two_status_flags(0x31a);
      if (iVar1 != -1) {
        store_value_at_dat_offset_8(0);
        dispatch_event_with_retry(0x31a,0);
        uVar2 = call_helper_with_zero_arg_100f19a0();
        if ((uVar2 & 0x2000) != 0) {
          return 0xffffffff;
        }
        _DAT_80048098/*SDRAM*/ = uVar2 & 0xffff0000;
        return 0;
      }
      bVar4 = cVar3 != '\0';
      cVar3 = cVar3 + -1;
    } while (bVar4);
  }
  return 0xffffffff;
}
