/* @k10d iterate_and_apply_list_entries @ 0x10473f1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_and_apply_list_entries(int param_1,uint32_t param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x10));
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = 1;
    uVar2 = call_helper_with_zero_arg_1047e48c(param_3);
    iVar1 = 0;
    if (0 < (int)uVar2) {
      do {
        iVar3 = read_table_entry_if_valid(param_3,uVar2);
        if (iVar3 == 1) {
          iVar1 = iVar1 + 1;
          iVar3 = process_event_with_retry_10473fae(param_1,uVar2 & 0xffff);
          iVar4 = 1;
          if (iVar3 != 0) {
            iVar4 = 0;
          }
        }
        uVar2 = increment_and_call_helper(param_3,uVar2);
      } while ((0 < (int)uVar2) && (iVar4 == 1));
    }
    iVar3 = (*(code *)0x1047e4e6/*ROM*/)(param_3);
    if (iVar1 == iVar3) {
      process_event_with_callback_104742be(param_1,param_2);
    }
  }
  return iVar4;
}
