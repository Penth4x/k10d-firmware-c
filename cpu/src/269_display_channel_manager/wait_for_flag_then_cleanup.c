/* @k10d wait_for_flag_then_cleanup @ 0x1050d050
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_then_cleanup(int param_1)

{
  int iVar1;
  
  iVar1 = get_field_at_offset_0x28(param_1);
  while (iVar1 != 0) {
    check_kernel_call_success_10459fea();
    iVar1 = get_field_at_offset_0x28(param_1);
  }
  call_subroutine_on_field_0x44(*(uint32_t *)(param_1 + 0x28));
  return;
}
