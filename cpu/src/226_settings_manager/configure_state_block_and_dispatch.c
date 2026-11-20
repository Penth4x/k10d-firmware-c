/* @k10d configure_state_block_and_dispatch @ 0x104c0690
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_state_block_and_dispatch(int param_1,void *param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  bool bVar2;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  if (param_4 == 0) {
    *(uint32_t *)(param_1 + 0x48c) = 2;
    *(uint32_t *)(param_1 + 0x490) = 1;
    *(uint16_t *)(param_1 + 0x494) =
         *(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
    *(uint16_t *)(param_1 + 0x496) =
         *(uint16_t *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34 + 2);
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x48c) = 2;
    *(uint32_t *)(param_1 + 0x490) = 3;
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  *(uint32_t *)(param_1 + 0x498) = uVar1;
  if (param_2 == 0) {
    bVar2 = invoke_virtual_method_on_object_104bfb72(param_1,(void *)(param_1 + 0x48c));
    uVar1 = 0;
    if (bVar2) {
      uVar1 = update_array_flags_via_virtual_call(param_1);
    }
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 4),param_2);
    uVar1 = invoke_virtual_method_on_object_104bfbea(param_1,param_1,(void *)(param_1 + 0x48c));
  }
  return uVar1;
}
