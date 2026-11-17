/* @k10d get_lens_fw_update_offset @ 0x10538c72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_lens_fw_update_offset(uint32_t param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_c;
  
  iVar1 = check_lens_fw_id_in_list(param_1,&iStack_c);
  if (iVar1 == 0) {
    iVar1 = 0;
    *param_2 = iStack_c + 8;
  }
  return iVar1;
}
