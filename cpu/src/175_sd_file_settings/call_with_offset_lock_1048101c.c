/* @k10d call_with_offset_lock_1048101c @ 0x1048101c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_with_offset_lock_1048101c(void *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  
  call_kernel_with_short_id((uint32_t *)((int)param_1 + 0xc));
  bVar1 = copy_rodata_and_dispatch(*(int *)((int)param_1 + 8),param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)((int)param_1 + 0xc));
  return (uint)bVar1;
}
