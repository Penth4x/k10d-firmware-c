/* @k10d configure_mode_state_and_dispatch @ 0x104c044a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_mode_state_and_dispatch(int param_1,void *param_2,int param_3,int param_4)

{
  uint8_t uVar2;
  uint32_t uVar1;
  bool bVar3;
  int iVar4;
  uint16_t *puVar5;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  *(char *)(param_1 + 0xeba1) = (char)param_3;
  *(uint8_t *)(param_1 + 0xeba2) = 0;
  if (param_3 == 0) {
    if (param_4 == -1) {
      iVar4 = param_1 + 0x2118;
      puVar5 = (uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar4);
      write_two_words_to_struct_104c1ff4(param_1,*puVar5,puVar5[1]);
      *(uint32_t *)(param_1 + 0x38) = 1;
      uVar2 = invoke_object_callback_and_release(param_1);
      *(uint8_t *)(param_1 + 0xeba2) = uVar2;
      *(uint16_t *)(param_1 + 0xeba4) = *(uint16_t *)(param_1 + 0x44);
      *(uint16_t *)(param_1 + 0xeba6) = *(uint16_t *)(param_1 + 0x46);
      *(uint32_t *)(param_1 + 0x48c) = 1;
      *(uint32_t *)(param_1 + 0x490) = 1;
      *(uint16_t *)(param_1 + 0x494) = *(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar4);
      *(uint16_t *)(param_1 + 0x496) =
           *(uint16_t *)(iVar4 + *(int *)(param_1 + 0x8d0) * 0xb34 + 2);
    }
    else {
      *(uint8_t *)(param_1 + 0xeba2) = 1;
      iVar4 = param_1 + 0x2118;
      puVar5 = (uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar4);
      *(uint16_t *)(param_1 + 0xeba4) = *puVar5;
      *(uint16_t *)(param_1 + 0xeba6) = puVar5[1];
      *(uint32_t *)(param_1 + 0x48c) = 1;
      *(uint32_t *)(param_1 + 0x490) = 0;
      *(int *)(param_1 + 0x498) = param_4;
      *(uint16_t *)(param_1 + 0x494) = *(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar4);
      *(uint16_t *)(param_1 + 0x496) =
           *(uint16_t *)(iVar4 + *(int *)(param_1 + 0x8d0) * 0xb34 + 2);
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x48c) = 1;
    *(uint32_t *)(param_1 + 0x490) = 3;
  }
  if (param_2 == 0) {
    bVar3 = invoke_object_method_and_reset_flag(param_1,(void *)(param_1 + 0x48c));
    uVar1 = 0;
    if (bVar3) {
      uVar1 = process_entry_pair_and_dispatch(param_1);
    }
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 4),param_2);
    uVar1 = invoke_virtual_method_on_object_104bfb44(param_1,param_1,(void *)(param_1 + 0x48c));
  }
  return uVar1;
}
