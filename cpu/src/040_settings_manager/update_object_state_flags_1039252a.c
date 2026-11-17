/* @k10d update_object_state_flags_1039252a @ 0x1039252a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_state_flags_1039252a(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  adjust_pointer_by_flag(uVar2,1);
  uVar2 = (*(code *)0x104d659e/*ROM*/)();
  iVar1 = read_byte_from_struct_offset_104d590e(uVar2,2);
  *(bool *)(param_1 + 0x88) = iVar1 != 0;
  apply_param_to_four_offsets_10397d3c((void *)(param_1 + 0xc),iVar1 != 0);
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  uVar3 = (**(code **)(*(int *)(iVar1 + 0x2b18) + 0x2c))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x2b18) + 0x28));
  store_word_at_offset_0x6c_and_call_helper(param_1 + 0xc,uVar3);
  return;
}
