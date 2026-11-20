/* @k10d dispatch_sr_command @ 0x104b7bd4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_sr_command(int param_1,int param_2,int param_3)

{
  bool bVar3;
  int iVar1;
  int iVar2;
  void *pvVar4;
  uint32_t *puVar5;
  
  pvVar4 = (void *)(param_1 + 4);
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),pvVar4);
  if (!bVar3) {
    return 0;
  }
  puVar5 = (uint32_t *)(param_1 + 0x24);
  eventflag_clr_flg(puVar5,1);
  if (param_2 == 0) {
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(0),(uint)(0));
    iVar2 = send_data_via_cpucom(*(int **)(param_1 + 0x10),pvVar4);
    iVar1 = 0;
    if (iVar2 == 0) goto LAB_104b7cbc;
    twai_flg_obj(puVar5,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(puVar5,1);
    iVar1 = send_cpucom_command_sequence_10461472((int *)(*(uint32_t *)(param_1 + 0xc)),(void *)(pvVar4));
  }
  else if (param_3 == 0) {
    iVar1 = dispatch_cpucom_command_104613ce((int *)(*(uint32_t *)(param_1 + 0xc)),(void *)(pvVar4));
  }
  else {
    write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x10)),(int)(0),(uint)(1));
    iVar1 = send_data_via_cpucom(*(int **)(param_1 + 0x10),pvVar4);
  }
  if (iVar1 != 0) {
    twai_flg_obj(puVar5,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
LAB_104b7cbc:
  delete_signal_semaphore((int *)(param_1 + 0x2c));
  return iVar1;
}
