/* @k10d dispatch_lens_fw_update_step_1053d0fa @ 0x1053d0fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_lens_fw_update_step_1053d0fa(void *param_1,uint *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x48);
  if (iVar2 == 4) {
    uVar1 = fetch_and_scan_buffer_segments((int)param_1,param_2);
  }
  else if (iVar2 == 2) {
    uVar1 = write_buffer_in_chunks_1053b988((int)param_1,param_2);
  }
  else if (iVar2 == 1) {
    uVar1 = scan_lens_fw_update_blocks((int)param_1,(int)param_2);
  }
  else {
    uVar1 = 0xfffffcdf;
  }
  return uVar1;
}
