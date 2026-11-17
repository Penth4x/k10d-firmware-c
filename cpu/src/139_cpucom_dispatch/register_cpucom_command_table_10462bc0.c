/* @k10d register_cpucom_command_table_10462bc0 @ 0x10462bc0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_cpucom_command_table_10462bc0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  init_object_with_buffer(param_1);
  iVar3 = 0x19;
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar2 + 0x105a7466/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar2 + 0x105a7468/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar2 + 0x105a746a/*ROM*/));
    iVar3 = iVar3 + -1;
    iVar1 = iVar2 + 6;
  } while (-1 < iVar3);
  cpucom_register_cmd(param_1,(uint)*(byte *)(iVar2 + 0x105a746c/*ROM*/));
  return;
}
