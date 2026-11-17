/* @k10d send_cpucom_command_sequence_10462a46 @ 0x10462a46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_cpucom_command_sequence_10462a46(void *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)((int)param_1 + 0x1c),param_2);
  iVar2 = 0;
  if (bVar1) {
    cpucom_msg_set_cmd((void *)(*(uint32_t *)((int)param_1 + 0x18)),DAT_105a7308/*ROM*/);
    cpucom_resp_set_insize(*(void **)((int)param_1 + 0x18),(uint)DAT_105a7309/*ROM*/);
    set_ptr_if_field_is_null(*(void **)((int)param_1 + 0x18),(void *)0x0);
    set_object_field_at_offset_0x14(*(void **)((int)param_1 + 0x18),(void *)((int)param_1 + 4));
    write_word_at_offset_16(*(void **)((int)param_1 + 0x18),0x1050007);
    eventflag_clr_flg((uint32_t *)((int)param_1 + 0x34),3);
    iVar2 = get_registered_reply_code(param_1);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)((int)param_1 + 0x34),3,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    invoke_listener_slot_two((int *)((int)param_1 + 0x1c));
  }
  return iVar2;
}
