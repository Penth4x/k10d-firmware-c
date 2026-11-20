/* @k10d cpucom_send_transaction @ 0x1046494a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_send_transaction(int *param_1,int param_2,int param_3,void *param_4,uint param_5)

{
  bool bVar3;
  int iVar1;
  void *pvVar2;
  uint32_t uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,(void *)param_2);
  uVar4 = 0;
  if (bVar3) {
    cpucom_msg_set_cmd((void*)(param_1[6]),*(uint8_t *)(param_3 * 2 + 0x105a7a3c/*ROM*/));
    uVar7 = (uint)(byte)(&DAT_105a7a3d/*ROM*/)[param_3 * 2];
    if (uVar7 == 0xff) {
      uVar5 = *(uint *)(&DAT_105a7a48/*ROM*/ + param_5 * 4) & 0xff;
      uVar7 = uVar5 + 1;
      (((vtbl_entry*)(*param_1))[9].fn)
                ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,0,param_5 & 0xff,0xff);
      iVar1 = (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        *(uint8_t *)(uVar5 + iVar1 + 1) = *(uint8_t *)(uVar5 + (int)param_4);
      }
    }
    else {
      (((vtbl_entry*)(*param_1))[10].fn)((int)((vtbl_entry*)(*param_1))[10].adj + (int)param_1,param_4,uVar7);
    }
    cpucom_resp_set_insize((void *)param_1[6],uVar7);
    pvVar6 = (void *)param_1[6];
    pvVar2 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar6,pvVar2);
    set_object_field_at_offset_0x14((void *)param_1[6],(void *)param_2);
    write_word_at_offset_16((void *)param_1[6],0x10a0001);
    uVar4 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar4;
}
