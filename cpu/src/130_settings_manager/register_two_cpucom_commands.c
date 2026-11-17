/* @k10d register_two_cpucom_commands @ 0x1045cf2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a class instance by calling a base virtual method and registering two
 *   command IDs with the CPUCOM interface.
 * summary:
 *   The function takes an object pointer (param_1) and first calls init_object_with_buffer,
 *   which is virtual slot 2 of the base class cls_105a7bf0. It then calls
 *   forward_three_args_to_helper_10459d64 with an offset of 0x54 into the object, passing
 *   constants 1 and 0x1f. Finally, it registers two command identifiers (bRam105a5c60 and
 *   bRam105a5c62) with the CPUCOM subsystem via cpucom_register_cmd. This appears to be an
 *   initialization or setup routine for a component that communicates with the companion
 *   chip (PRIME DSP) over the SPI-like CPUCOM channel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_two_cpucom_commands(void *param_1)

{
  init_object_with_buffer(param_1);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x54),1,0x1f);
  cpucom_register_cmd(param_1,(uint)bRam105a5c60);
  cpucom_register_cmd(param_1,(uint)bRam105a5c62);
  return;
}
