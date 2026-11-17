/* @k10d poll_until_target_value @ 0x10475042
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_until_target_value(int param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  read_field_at_offset_eight_104766f6(*(uint32_t *)(param_1 + 8),&iStack_10);
  iVar1 = param_2;
  if (iStack_10 != 1) {
    do {
      iVar1 = call_helper_on_field_at_offset_8_1047681c(*(int *)(param_1 + 8));
      invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),iVar1,*(uint32_t *)(param_1 + 0xc));
      iStack_c = 0;
      check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),iVar1,&iStack_c);
      if (iStack_c != 0) {
        return iVar1;
      }
    } while (iVar1 != param_2);
  }
  return iVar1;
}
