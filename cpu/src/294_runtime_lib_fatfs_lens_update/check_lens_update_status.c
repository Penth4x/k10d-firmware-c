/* @k10d check_lens_update_status @ 0x10540162
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_lens_update_status(void *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  if ((*(byte *)((int)param_2 + 0x1f) & 0x10) == 0x10) {
    uVar1 = 0xffffffeb;
  }
  else if ((param_3 == 0) || ((*(byte *)((int)param_2 + 0x1f) & 1) == 0)) {
    uVar1 = validate_lens_fw_update_params((int)param_1,param_2);
  }
  else {
    uVar1 = 0xffffffe2;
  }
  return uVar1;
}
