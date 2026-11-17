/* @k10d sdhc_latch_response @ 0x104488ce
 * name: verified (structural evidence: decomp: four accessors, stored at 0x3b4/0x3b8/0x3bc/0x3c0)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies the four SDHCI response words (+0x10..+0x1c) into host+0x3b4..+0x3c0.
 * summary:
 *   VERIFIED: decomp: four accessors, stored at 0x3b4/0x3b8/0x3bc/0x3c0
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sdhc_latch_response(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_response_word_at_offset_0x10(*(void **)((int)param_1 + 0x110));
  *(uint32_t *)((int)param_1 + 0x3b4) = uVar1;
  uVar1 = read_pointer_at_offset_0x14(*(void **)((int)param_1 + 0x110));
  *(uint32_t *)((int)param_1 + 0x3b8) = uVar1;
  uVar1 = read_response_word_at_offset(*(void **)((int)param_1 + 0x110));
  *(uint32_t *)((int)param_1 + 0x3bc) = uVar1;
  uVar1 = read_sdhc_response_word4(*(void **)((int)param_1 + 0x110));
  *(uint32_t *)((int)param_1 + 0x3c0) = uVar1;
  return;
}
