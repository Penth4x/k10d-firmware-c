/* @k10d dispatch_mode_handler_and_notify @ 0x10474b8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_mode_handler_and_notify(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (iVar1 == 1) {
    *(uint32_t *)(param_1 + 0x1c) = 1;
  }
  else {
    if (iVar1 == 3) {
      uVar2 = accumulate_values_in_range(param_1);
    }
    else if (iVar1 == 2) {
      uVar2 = count_entries_with_value_two(param_1);
    }
    else {
      if (iVar1 != 4) {
        *(uint32_t *)(param_1 + 0x1c) = 0;
        goto LAB_10474bda;
      }
      uVar2 = call_helper_with_stack_out_param(param_1,*(uint16_t *)(*(int *)(param_1 + 0x18) + 8));
    }
    *(uint32_t *)(param_1 + 0x1c) = uVar2;
  }
LAB_10474bda:
  piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0x14);
  iVar1 = *piVar3;
  iVar1 = (((vtbl_entry*)(iVar1))[2].fn)
                    ((int)piVar3 + (int)((vtbl_entry*)(iVar1))[2].adj,0x62000,
                     *(uint32_t *)(param_1 + 0x1c));
  return iVar1 == 0;
}
