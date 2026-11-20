/* @k10d send_cpucom_command_block @ 0x10464100
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 140_property_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_cpucom_command_block(int *param_1,void *param_2)

{
  uint uVar1;
  bool bVar3;
  int iVar2;
  uint32_t uVar4;
  
  bVar3 = set_pointer_and_clear_flag(param_1 + 7,param_2);
  uVar4 = 0;
  if (bVar3) {
    cpucom_msg_set_cmd((void*)(param_1[6]),uRam105a7814);
    cpucom_resp_set_insize((void *)param_1[6],(uint)bRam105a7815);
    iVar2 = (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
    uVar1 = (uint)bRam105a7815;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      *(uint8_t *)(uVar1 + (int)(param_1 + 0x12)) = *(uint8_t *)(uVar1 + iVar2);
    }
    set_ptr_if_field_is_null((void *)param_1[6],param_1 + 0x12);
    set_object_field_at_offset_0x14((void *)param_1[6],param_2);
    write_word_at_offset_16((void *)param_1[6],0x1080001);
    uVar4 = get_registered_reply_code(param_1);
    delete_signal_semaphore(param_1 + 7);
  }
  return uVar4;
}
