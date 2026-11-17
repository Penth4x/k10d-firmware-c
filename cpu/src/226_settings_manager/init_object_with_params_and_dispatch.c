/* @k10d init_object_with_params_and_dispatch @ 0x104c0aae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
init_object_with_params_and_dispatch(int param_1,int param_2,uint16_t param_3,uint8_t param_4,uint8_t param_5,
            char param_6)

{
  int iVar1;
  uint32_t uVar2;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  *(uint16_t *)(param_1 + 0x4a8) = param_3;
  *(uint8_t *)(param_1 + 0x4ab) = param_4;
  *(uint8_t *)(param_1 + 0x4aa) = param_5;
  if (param_6 == '\0') {
    *(uint32_t *)(param_1 + 0x48c) = 3;
    *(uint32_t *)(param_1 + 0x490) = 1;
    *(uint16_t *)(param_1 + 0x494) =
         *(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
    iVar1 = param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34;
  }
  else {
    *(uint32_t *)(param_1 + 0x48c) = 3;
    *(uint32_t *)(param_1 + 0x490) = 3;
    *(uint16_t *)(param_1 + 0x494) =
         *(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
    iVar1 = param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34;
  }
  *(uint16_t *)(param_1 + 0x496) = *(uint16_t *)(iVar1 + 2);
  *(uint16_t **)(param_1 + 0x498) = (uint16_t *)(param_1 + 0x4a8);
  if (param_2 == 0) {
    iVar1 = reset_and_dispatch_object_state(param_1,param_1 + 0x48c);
    if (iVar1 == 0) {
      copy_three_byte_state_to_array(param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = copy_three_byte_state_to_array(param_1);
    }
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 4),(void *)param_2);
    uVar2 = invoke_virtual_method_on_object_104bfe70(param_1,param_1,param_1 + 0x48c);
  }
  return uVar2;
}
