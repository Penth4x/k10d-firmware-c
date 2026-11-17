/* @k10d copy_six_bytes_between_structs @ 0x1045cf74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_six_bytes_between_structs(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x54));
  empty_stub_1045ce6c((int)param_2,param_1 + 0x48);
  iVar2 = 6;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)((int)param_2 + iVar2 + 3) = *(uint8_t *)(iVar1 + param_1 + 0x4c);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x54));
  return;
}
