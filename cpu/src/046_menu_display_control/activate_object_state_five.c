/* @k10d activate_object_state_five @ 0x103a8038
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 046_menu_display_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_object_state_five(void *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x40) != 5) {
    invoke_virtual_slot_on_object_array((int)param_1);
    puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_three_calls_1052b7a2(puVar1);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xbc) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0xbc) + (int)*(short *)(iVar2 + 8),1);
    setup_object_with_two_subobjects(param_1,0);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xdc) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0xdc) + (int)*(short *)(iVar2 + 8),0);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xe8) + 0xc);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0xe8) + (int)*(short *)(iVar2 + 8),0);
    *(uint32_t *)((int)param_1 + 0x48) = 1;
    *(uint32_t *)((int)param_1 + 0x40) = 5;
  }
  return;
}
