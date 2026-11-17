/* @k10d register_cpucom_command_table_10461e1c @ 0x10461e1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_cpucom_command_table_10461e1c(void *param_1)

{
  int iVar1;
  int iVar2;
  
  init_object_with_buffer(param_1);
  iVar2 = 2;
  iVar1 = 0;
  do {
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a730e/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a7310/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a7312/*ROM*/));
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  return;
}
