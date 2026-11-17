/* @k10d check_and_init_subsystem @ 0x100f10fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status via test_bit_16_of_status_word and initializes two components if the
 *   status is non-zero.
 * summary:
 *   Calls test_bit_16_of_status_word to retrieve a status value. If the value is zero,
 *   returns -1 (0xffffffff). If non-zero, calls store_value_at_dat_offset_8(0) and
 *   dispatch_event_with_retry(0,0) to perform initialization, then returns 0. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_init_subsystem(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = test_bit_16_of_status_word();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    store_value_at_dat_offset_8(0);
    dispatch_event_with_retry(0,0);
    uVar2 = 0;
  }
  return uVar2;
}
