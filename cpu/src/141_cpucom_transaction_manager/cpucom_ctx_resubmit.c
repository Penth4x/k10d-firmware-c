/* @k10d cpucom_ctx_resubmit @ 0x104644c8
 * name: verified (structural evidence: emulator trace)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Re-submits a CPUCOM transaction context's request; observed re-arming the Cmd:01 status
 *   poll with request code 0x01090001.
 * summary:
 *   VERIFIED: emulator trace
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cpucom_ctx_resubmit(int *param_1,void *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  iVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void*)(param_1[6]),DAT_105a78c0/*ROM*/);
    cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a78c1/*ROM*/);
    iVar3 = (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
    if (iVar3 != 0) {
      free_cpucom_context(param_1);
      uVar1 = (uint)DAT_105a78c1/*ROM*/;
      while (uVar1 != 0) {
        *(uint8_t *)((int)param_1 + uVar1 + 0x47) = *(uint8_t *)((uVar1 - 1) + iVar3);
        uVar1 = uVar1 - 1;
      }
      *(uint8_t *)(param_1 + 0x18) = 0;
      free_cpucom_context_ref(param_1);
    }
    set_ptr_if_field_is_null((void *)param_1[6],param_1 + 0x12);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1090001);
    iVar3 = get_registered_reply_code(param_1);
    if (iVar3 == 0) {
      *(uint8_t *)(param_1 + 0x18) = 1;
    }
    delete_signal_semaphore(param_1 + 7);
  }
  return iVar3;
}
