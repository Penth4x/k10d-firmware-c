/* @k10d finalize_object_state_and_release @ 0x103a7d6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 046_menu_display_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void finalize_object_state_and_release(void *param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0x40) != 3) {
    puVar2 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_three_calls_1052b7a2(puVar2);
    invoke_virtual_slot_on_object_array((int)param_1);
    set_setting_0x81_flag(*(uint32_t *)((int)param_1 + 0x28),1);
    uVar1 = *(uint *)((int)param_1 + 0x11c);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        iVar3 = *(int *)(*(int *)((int)param_1 + 100) + 0xc);
        (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 100) + (int)*(short *)(iVar3 + 8),1);
      }
    }
    else if ((uVar1 & 4) == 0) {
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x54) + 0xc);
      (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x54) + (int)*(short *)(iVar3 + 8),1);
      iVar3 = *(int *)(*(int *)((int)param_1 + 0x58) + 0xc);
      (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x58) + (int)*(short *)(iVar3 + 8),1);
    }
    else {
      iVar3 = *(int *)(*(int *)((int)param_1 + 0xec) + 0xc);
      (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0xec) + (int)*(short *)(iVar3 + 8));
    }
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x74) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x74) + (int)*(short *)(iVar3 + 8),1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x78) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x78) + (int)*(short *)(iVar3 + 8),1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x7c) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x7c) + (int)*(short *)(iVar3 + 8),1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x80) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x80) + (int)*(short *)(iVar3 + 8),1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x84) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x84) + (int)*(short *)(iVar3 + 8),1);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x90) + 0xc);
    (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + 0x90) + (int)*(short *)(iVar3 + 8),1);
    *(uint32_t *)((int)param_1 + 0x40) = 3;
  }
  call_helper_on_fetched_object((void *)((int)param_1 + 8),0x10);
  call_helper_on_fetched_object((void *)((int)param_1 + 8),0xf);
  setup_object_with_two_subobjects(param_1,1);
  compute_and_store_pair_values(param_1,1);
  return;
}
