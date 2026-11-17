/* @k10d send_cpucom_command_1045cfdc @ 0x1045cfdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t send_cpucom_command_1045cfdc(int *param_1,void *param_2,int param_3,uint8_t param_4)

{
  bool bVar2;
  void *pvVar1;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  uint32_t uStack_10;
  
  uStack_10 = 0;
  piVar5 = param_1 + 7;
  bVar2 = set_pointer_and_clear_flag(piVar5,param_2);
  if (bVar2) {
    uStack_10 = 1;
    (**(code **)(*param_1 + 0x4c))((int)*(short *)(*param_1 + 0x48) + (int)param_1,0,param_4,0xff);
    iVar4 = (uint)(param_3 != 0) * 2;
    cpucom_msg_set_cmd((void *)param_1[6],(&DAT_105a5c5c/*ROM*/)[iVar4]);
    cpucom_resp_set_insize((void *)param_1[6],(uint)(byte)(&DAT_105a5c5d/*ROM*/)[iVar4]);
    pvVar3 = (void *)param_1[6];
    pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1)
    ;
    set_ptr_if_field_is_null(pvVar3,pvVar1);
    set_object_field_at_offset_0x14((void *)param_1[6],param_1 + 1);
    write_word_at_offset_16((void *)param_1[6],0x1020001);
    eventflag_clr_flg(param_1 + 0xd,1);
    iVar4 = get_registered_reply_code(param_1);
    if (iVar4 == 0) {
      invoke_virtual_slot_two_104272e4(piVar5,0x1020001,0);
      invoke_listener_slot_two(piVar5);
    }
    else {
      twai_flg_obj(param_1 + 0xd,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      invoke_virtual_slot_two_104272e4(piVar5,0x1020001,1);
      uStack_10 = 1;
    }
  }
  return uStack_10;
}
