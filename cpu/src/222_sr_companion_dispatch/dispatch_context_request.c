/* @k10d dispatch_context_request @ 0x104b7e34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Dispatches a request on a context object based on a type selector, optionally
 *   resubmitting the transaction.
 * summary:
 *   The function first checks a condition via set_pointer_and_clear_flag and sets a flag
 *   via eventflag_clr_flg. It then branches on param_2 to call different dispatch functions
 *   (write_byte_to_virtual_object, write_object_field_byte) with specific codes (5, 10, 2,
 *   0xe) and a boolean derived from param_3. If param_4 is non-zero, it calls a resubmit
 *   function (send_data_via_cpucom or cpucom_ctx_resubmit) on the context pointer. Finally,
 *   it updates a flag object and calls delete_signal_semaphore before returning the result
 *   of the resubmit operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_context_request(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (!bVar1) {
    return 0;
  }
  eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
  if (param_2 == 0) {
    write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x10)),5,param_3 != 0);
joined_r0x104b7ea4:
    if (param_4 != 0) {
LAB_104b7ea8:
      iVar2 = send_data_via_cpucom(*(int **)(param_1 + 0x10),(void *)(param_1 + 4));
    }
  }
  else {
    if (param_2 == 1) {
      write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x10)),10,param_3 != 0);
      goto joined_r0x104b7ea4;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        bVar1 = true;
        goto LAB_104b7f28;
      }
      write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x10)),2,param_3 != 0);
      if (param_4 == 0) goto LAB_104b7f26;
      goto LAB_104b7ea8;
    }
    write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x20)),0xe,param_3 != 0);
    if (param_4 != 0) {
      iVar2 = cpucom_ctx_resubmit((void *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_1 + 4));
    }
  }
LAB_104b7f26:
  bVar1 = iVar2 == 0;
LAB_104b7f28:
  if (!bVar1) {
    twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  delete_signal_semaphore((int *)(param_1 + 0x2c));
  return iVar2;
}
