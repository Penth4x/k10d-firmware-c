/* @k10d poll_and_process_char_event @ 0x1046894c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Polls a queue until empty, then processes a single character event and conditionally
 *   updates state.
 * summary:
 *   The function first calls check_flag_via_helper in a loop to drain a queue or buffer
 *   associated with param_1+0x240. It then sets up a local structure with pointers to a
 *   character flag and a counter, and calls cpucom_spi_transaction with this structure and
 *   other parameters from param_1. If cpucom_spi_transaction returns a specific value
 *   (DAT_105a7ce8) and the character flag is set to 'A', it calls copy_bytes_to_ring_slot
 *   to update state at param_1+0x210 and returns 1, otherwise it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t poll_and_process_char_event(void *param_1)

{
  int iVar1;
  int extraout_r4;
  uint32_t uVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_28 [12];
  uint32_t uStack_10;
  char cStack_9;
  
  piVar3 = (int *)auStack_28;
  iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  uVar2 = 0;
  while (iVar1 != 0) {
    iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  }
  cStack_9 = '\0';
  uStack_10 = 0;
  iVar1 = *(int *)((int)param_1 + 0x240);
  *piVar3 = (int)&cStack_9;
  piVar3[1] = (int)param_1 + 4;
  piVar3[2] = (int)&uStack_10;
  cpucom_spi_transaction(iVar1,0,(int)param_1 + 0x104,0,(uint8_t *)*piVar3,piVar3[1],(uint *)piVar3[2]);
  if ((extraout_r4 == _DAT_105a7ce8/*ROM*/) && (cStack_9 == 'A')) {
    uVar2 = 1;
    copy_bytes_to_ring_slot((int)param_1 + 0x210,(int)param_1 + 4,0x41,uStack_10);
  }
  return uVar2;
}
