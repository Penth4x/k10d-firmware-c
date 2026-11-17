/* @k10d transmit_data_block_with_retry @ 0x10542538
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transmits a data block via a communication channel with up to two retries and error
 *   cleanup.
 * summary:
 *   The function prepares a communication context using
 *   dispatch_lens_fw_update_step_1053d2bc and merge_lens_fw_block_entry, then attempts to
 *   transmit the data block (param_2) up to two times using compute_indexed_lookup_value.
 *   It verifies the transmission result and attempts recovery via merge_lens_fw_block_entry
 *   and dispatch_lens_update_step on failure. On success, it stores the result in param_4
 *   and returns 0; on failure, it calls clear_lens_update_entry for cleanup and returns the
 *   error code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transmit_data_block_with_retry(void *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int local_3c [3];
  uint32_t uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar1 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_3,1,&uStack_28);
  if (iVar1 == 0) {
    uStack_30 = 1;
    local_3c[2] = param_3;
    iVar1 = merge_lens_fw_block_entry(param_1,local_3c + 2);
    if (iVar1 == 0) {
      local_3c[1] = 1;
      iVar3 = 2;
      do {
        iVar1 = allocate_lens_fw_buffer_1053d612(param_1,1,local_3c);
        if ((iVar1 != 0) || (iVar1 = dispatch_lens_update_step((int)param_1,local_3c[0],uStack_28), iVar1 != 0))
        goto LAB_1054262a;
        iVar1 = compute_indexed_lookup_value((int)param_1,param_2,local_3c,&uStack_2c);
        iVar2 = 0;
        if (iVar1 != 0) {
          if (((iVar1 == -6) || (iVar1 = merge_lens_fw_block_entry(param_1,local_3c), iVar1 != 0)) ||
             (iVar1 = dispatch_lens_update_step((int)param_1,local_3c[0],*(int *)((int)param_1 + 0x50)),
             iVar1 != 0)) goto LAB_1054262a;
          iVar2 = -0x38a;
        }
        iVar3 = iVar3 + -1;
        if (iVar2 == 0) goto LAB_10542608;
      } while (0 < iVar3);
      if (iVar2 == 0) {
LAB_10542608:
        iVar1 = dispatch_lens_update_step((int)param_1,param_3,*(int *)((int)param_1 + 0x50));
        if (iVar1 == 0) {
          *param_4 = local_3c[0];
          return 0;
        }
      }
      else {
        iVar1 = -0x38a;
      }
    }
  }
LAB_1054262a:
  clear_lens_update_entry(param_1,param_3);
  return iVar1;
}
