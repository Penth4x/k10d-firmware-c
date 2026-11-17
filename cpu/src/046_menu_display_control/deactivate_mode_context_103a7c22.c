/* @k10d deactivate_mode_context_103a7c22 @ 0x103a7c22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 046_menu_display_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_mode_context_103a7c22(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x40) != 2) {
    set_setting_0x81_flag(*(uint32_t *)((int)param_1 + 0x28),0);
    invoke_virtual_slot_on_object_array((int)param_1);
    uVar1 = *(uint *)((int)param_1 + 0x11c);
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 100) + 0xc);
        (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 100) + (int)*(short *)(iVar2 + 8),1);
      }
    }
    else if ((uVar1 & 4) == 0) {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x54) + 0xc);
      (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0x54) + (int)*(short *)(iVar2 + 8),1);
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x58) + 0xc);
      (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0x58) + (int)*(short *)(iVar2 + 8),1);
    }
    else {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0xec) + 0xc);
      (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0xec) + (int)*(short *)(iVar2 + 8));
    }
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x68) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0x68) + (int)*(short *)(iVar2 + 8),1);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0x6c) + (int)*(short *)(iVar2 + 8),1);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x70) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0x70) + (int)*(short *)(iVar2 + 8),1);
    *(uint32_t *)((int)param_1 + 0x40) = 2;
  }
  setup_object_with_two_subobjects(param_1,0);
  compute_and_store_pair_values(param_1,0);
  call_helper_on_fetched_object((void *)((int)param_1 + 8),0x10);
  call_helper_on_fetched_object((void *)((int)param_1 + 8),0xf);
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    iVar2 = **(int **)((int)param_1 + 0x2c);
    (**(code **)(iVar2 + 0x14))
              ((int)*(int **)((int)param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x10),0x1120070,0);
  }
  return;
}
