/* @k10d register_cpucom_cmd_pairs @ 0x104610b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a base virtual method and registering six CPU command
 *   bytes in pairs.
 * summary:
 *   The function first invokes init_object_with_buffer (virtual slot 2 of the base class)
 *   and forward_three_args_to_helper_10459d64 on a sub-structure at offset 0x48. It then
 *   iterates twice, reading three bytes from a static table at 0x105a71f8 and registering
 *   each as a CPU command via cpucom_register_cmd. This appears to be an initialization
 *   routine for a class that communicates with the companion chip (PRIME DSP) over the SPI-
 *   like CPUCOM interface.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_cpucom_cmd_pairs(void *param_1)

{
  int iVar1;
  int iVar2;
  
  init_object_with_buffer(param_1);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x48),1,0x1f);
  iVar2 = 2;
  iVar1 = 0;
  do {
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a71f8/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a71fa/*ROM*/));
    cpucom_register_cmd(param_1,(uint)*(byte *)(iVar1 + 0x105a71fc/*ROM*/));
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  return;
}
