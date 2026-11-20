/* @k10d execute_cpucom_transaction @ 0x10464cd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_cpucom_transaction(int *param_1,void *param_2)

{
  bool bVar2;
  void *pvVar1;
  uint32_t uVar3;
  void *pvVar4;
  
  bVar2 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar3 = 0;
  if (bVar2) {
    cpucom_msg_set_cmd((void*)(param_1[6]),uRam105a7b44);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a7b45);
    pvVar4 = (void *)param_1[6];
    pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar4,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x10b0001);
    uVar3 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar3;
}
