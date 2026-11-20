/* @k10d update_settings_status_flags @ 0x1043499a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 122_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_settings_status_flags(int param_1,int param_2)

{
  struct {
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_14;
  bool bVar3;
  int iVar1;
  int iVar2;
  uint32_t uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_2c [4];
  piVar5 = (int *)auStack_2c;
  call_helper_with_flag_based_on_param(*(int **)(param_1 + 0x5c),(uint)(*(int *)(param_1 + 0x40) == 1),2);
  if (param_2 == 0) {
    bVar3 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
    if (bVar3) {
      settings_refresh_working_copy(*(void **)(param_1 + 0xc));
    }
    _cfg_14.uStack_14 = 0;
    _cfg_14.uStack_10 = 0;
    _cfg_14.uStack_c = 0;
    iVar1 = *(int *)(param_1 + 0x5c);
    *piVar5 = (int)&_cfg_14.uStack_c;
    iVar1 = read_entry_or_zero_outputs(iVar1,0,&_cfg_14.uStack_14,&_cfg_14.uStack_10,(uint32_t *)*piVar5);
    call_helper_on_two_pointers_10484a28(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_14,0);
    call_helper_on_two_pointers_10484a54(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_10,0);
    forward_params_to_two_objects(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_c,0);
    iVar2 = *(int *)(param_1 + 0x5c);
    *piVar5 = (int)&_cfg_14.uStack_c;
    iVar2 = read_entry_or_zero_outputs(iVar2,1,&_cfg_14.uStack_14,&_cfg_14.uStack_10,(uint32_t *)*piVar5);
    call_helper_on_two_pointers_10484a28(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_14,1);
    call_helper_on_two_pointers_10484a54(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_10,1);
    forward_params_to_two_objects(*(uint32_t *)(param_1 + 0xc),_cfg_14.uStack_c,1);
    if (iVar1 == 0) {
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
      }
    }
    else if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 0;
  }
  iVar1 = get_or_init_singleton_104aa272();
  set_two_bit_flags(*(uint32_t *)(iVar1 + 4),uVar4);
  return;
}
