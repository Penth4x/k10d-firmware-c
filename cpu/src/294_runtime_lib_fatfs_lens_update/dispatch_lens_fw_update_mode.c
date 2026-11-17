/* @k10d dispatch_lens_fw_update_mode @ 0x10536476
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * dispatch_lens_fw_update_mode(uint32_t *param_1,int param_2,int *param_3)

{
  if (param_2 == 2) {
    param_1 = (uint32_t *)lens_fw_update_state_transition(param_1,param_3);
  }
  else if (param_2 == 1) {
    param_1 = (uint32_t *)0x0;
  }
  return param_1;
}
