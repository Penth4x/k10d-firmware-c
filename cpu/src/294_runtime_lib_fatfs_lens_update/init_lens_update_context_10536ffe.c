/* @k10d init_lens_update_context_10536ffe @ 0x10536ffe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * init_lens_update_context_10536ffe(uint32_t *param_1)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x1b) = 1;
  trigger_sr_cal_transfer_104867c0((int)param_1);
  iVar1 = retry_virtual_call_with_timeout_10470784(*param_1);
  if ((iVar1 != 0) && (param_1[0x15] != 0)) {
    send_lens_fw_update_command(param_1);
  }
  clear_lens_update_flag(param_1);
  return param_1;
}
