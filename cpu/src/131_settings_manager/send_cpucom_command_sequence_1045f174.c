/* @k10d send_cpucom_command_sequence_1045f174 @ 0x1045f174
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_cpucom_command_sequence_1045f174(int param_1,void *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  iVar2 = 0;
  if (bVar1) {
    *(int *)(param_1 + 0x28) = param_3 + 1;
    cpucom_msg_set_cmd(*(void **)(param_1 + 0x18),*(uint8_t *)(param_3 * 2 + 0x105a5dd4/*ROM*/));
    cpucom_resp_set_insize(*(void **)(param_1 + 0x18),(uint)*(byte *)(param_3 * 2 + 0x105a5dd5/*ROM*/));
    set_object_field_at_offset_0x14(*(void **)(param_1 + 0x18),param_2);
    write_word_at_offset_16(*(void **)(param_1 + 0x18),0x1030001);
    iVar2 = get_registered_reply_code((void *)param_1);
    if (iVar2 == 0) {
      delete_signal_semaphore((int *)(param_1 + 0x1c));
    }
  }
  return iVar2;
}
