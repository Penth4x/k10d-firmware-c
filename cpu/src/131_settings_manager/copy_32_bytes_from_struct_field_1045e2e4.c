/* @k10d copy_32_bytes_from_struct_field_1045e2e4 @ 0x1045e2e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_32_bytes_from_struct_field_1045e2e4(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x54);
  empty_stub_1045dd00((int)param_2,iVar1);
  iVar3 = 0x20;
  do {
    iVar2 = iVar3 + -1;
    *(uint8_t *)((int)param_2 + iVar3 + 3) = *(uint8_t *)(iVar2 + iVar1 + 4);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
