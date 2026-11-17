/* @k10d store_param_and_call_virtual_slot @ 0x1050eaf6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_call_virtual_slot(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 0x4c) = param_2;
  uVar1 = align_down_to_32_bytes(__frv_reg_unset(4), __frv_reg_unset(5));
  *(uint32_t *)(param_1 + 0xa8) = uVar1;
  (**(code **)(*(int *)(param_1 + 0x8d4) + 0xcc))
            (*(short *)(*(int *)(param_1 + 0x8d4) + 200) + param_1);
  return;
}
