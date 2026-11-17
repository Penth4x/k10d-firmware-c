/* @k10d copy_four_bytes_from_struct @ 0x1045e76a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes_from_struct(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x9c);
  empty_stub_1045dd00(param_2,iVar1);
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
    *(uint8_t *)(iVar2 + param_2 + 4) = *(uint8_t *)(iVar2 + iVar1 + 4);
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
