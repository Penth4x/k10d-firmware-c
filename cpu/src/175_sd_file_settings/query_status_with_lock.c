/* @k10d query_status_with_lock @ 0x10480eda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_status_with_lock(int param_1,void *param_2,uint8_t *param_3)

{
  uint8_t uVar1;
  bool bVar2;
  uintptr_t sp;
  uint uStack_c;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uStack_c = 0;
  bVar2 = store_result_and_flag(*(int *)(param_1 + 8),param_2,&uStack_c);
  if (bVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint8_t)uStack_c;
  }
  *param_3 = uVar1;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return (uint)bVar2;
}
