/* @k10d dispatch_lens_fw_update_step_1053d138 @ 0x1053d138
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_fw_update_step_1053d138(void *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x48);
  puVar2 = *(uint **)((int)param_1 + 0x68);
  if (iVar1 == 4) {
    iVar1 = write_swapped_data_range(param_1,puVar2,param_2,param_3,param_4);
  }
  else if (iVar1 == 2) {
    iVar1 = process_sequential_data_blocks(param_1,puVar2,param_2,param_3,param_4);
  }
  else if (iVar1 == 1) {
    iVar1 = write_lens_fw_byte(param_1,puVar2,param_2,param_3,param_4);
  }
  else {
    iVar1 = -0x321;
  }
  return iVar1;
}
