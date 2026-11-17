/* @k10d cpucom_register_cmd_slot @ 0x104647d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_register_cmd_slot(void *param_1)

{
  init_object_with_buffer(param_1);
  cpucom_register_cmd(param_1,(uint)bRam105a7a44);
  return;
}
