/* @k10d dispatch_cpucom_command_1046111e @ 0x1046111e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_cpucom_command_1046111e(int *param_1,void *param_2,uint32_t param_3)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    (**(code **)(*param_1 + 0x54))
              ((int)*(short *)(*param_1 + 0x50) + (int)param_1,param_3,bRam105a71d9);
    cpucom_msg_set_cmd((void *)param_1[6],uRam105a71d8);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a71d9);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1040001);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
