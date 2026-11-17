/* @k10d dispatch_state_transition_10448ddc @ 0x10448ddc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of four state handlers based on a status field and a flag bit.
 * summary:
 *   The function first calls compute_and_store_timeout_value and sets a boolean flag at
 *   offset 0x160 based on the lower two bits of param_4. It then checks a status integer at
 *   offset 0x3c4 and the result of a call to 0x104470d8. Depending on whether this status
 *   is less than 3 and the value of the flag at 0x160, it copies a value from either offset
 *   0x114 or 0x118 to offset 0x11c and calls one of four distinct handler functions
 *   (sdhc_write_blocks_with_retry, process_sdhc_error_interrupt_10448f52,
 *   sdhc_transfer_blocks_with_retry_10449004, or process_sdhc_error_interrupt_104490c2).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_transition_10448ddc(void *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t auStack_18 [4];
  
  piVar2 = (int *)auStack_18;
  compute_and_store_timeout_value(param_1,1,param_3);
  *(bool *)((int)param_1 + 0x160) = (param_4 & 3) == 0;
  if ((*(int *)((int)param_1 + 0x3c4) == 0) ||
     (iVar1 = (*(code *)0x104470d8/*ROM*/)((int)param_1 + 0x1a4), iVar1 < 3)) {
    if (*(char *)((int)param_1 + 0x160) == '\0') {
      *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x114);
      *piVar2 = 0;
      iVar1 = sdhc_write_blocks_with_retry(param_1,param_2,param_3,param_4,*piVar2);
    }
    else {
      *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x118);
      *piVar2 = 0;
      iVar1 = process_sdhc_error_interrupt_10448f52(param_1,param_2,param_3,param_4,*piVar2);
    }
  }
  else if (*(char *)((int)param_1 + 0x160) == '\0') {
    *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x114);
    iVar1 = sdhc_transfer_blocks_with_retry_10449004(param_1,param_2,param_3,param_4);
  }
  else {
    *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x118);
    iVar1 = process_sdhc_error_interrupt_104490c2((void *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6),__frv_reg_unset(7));
  }
  return iVar1;
}
