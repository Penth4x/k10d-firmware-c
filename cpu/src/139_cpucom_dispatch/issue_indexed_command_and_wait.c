/* @k10d issue_indexed_command_and_wait @ 0x1046366a
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Issues a command byte selected by an index to a device handle and waits for a
 *   completion status.
 * summary:
 *   The function checks a precondition via set_pointer_and_clear_flag. If true, it selects
 *   a command byte from a table using param_3, sends it via cpucom_msg_set_cmd and
 *   cpucom_resp_set_insize, and performs several setup calls (set_ptr_if_field_is_null,
 *   set_object_field_at_offset_0x14, write_word_at_offset_16). It then waits for a result
 *   via get_registered_reply_code and handles the outcome with twai_flg_obj and a
 *   conditional virtual call. The specific device and command semantics are not
 *   identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int issue_indexed_command_and_wait(int *param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  bool bVar2;
  void *pvVar1;
  void *pvVar3;
  int iVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  iVar4 = 0;
  if (bVar2) {
    iVar4 = param_3 * 2;
    (((vtbl_entry*)(*param_1))[10].fn)
              ((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1,param_4,(&DAT_105a73c9/*ROM*/)[iVar4]);
    cpucom_msg_set_cmd((void*)(param_1[6]),*(uint8_t *)(iVar4 + 0x105a73c8/*ROM*/));
    cpucom_resp_set_insize((void *)param_1[6],(uint)(byte)(&DAT_105a73c9/*ROM*/)[iVar4]);
    pvVar3 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar3,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
    write_word_at_offset_16((void *)param_1[6],0x1060000);
    eventflag_clr_flg(param_1 + 0xd,3);
    iVar4 = get_registered_reply_code(param_1);
    if (iVar4 != 0) {
      twai_flg_obj(param_1 + 0xd,2,(void *)0x0,_DAT_105a2af0/*ROM*/);
      if (param_5 != 0) {
        (((vtbl_entry*)(*param_1))[6].fn)
                  ((int)((vtbl_entry*)(*param_1))[6].adj + (int)param_1,param_5,
                   (&DAT_105a7467/*ROM*/)[*(int *)(&DAT_105a7504/*ROM*/ + param_3 * 4) * 2]);
      }
    }
    delete_signal_semaphore(param_1 + 7);
  }
  return iVar4;
}
