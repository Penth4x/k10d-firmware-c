/* @k10d dispatch_object_state_transition @ 0x1036ddae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * dispatch_object_state_transition(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uint32_t uVar4;
  
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if (iVar1 == 0) {
    if (cRam80015d00 == '\0') {
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 2;
    }
    else {
      if (iRam80015b08 == 2) {
        *(uint8_t *)(param_1 + 0xad) = 0;
        set_object_field_from_flag(param_1);
        param_1[0xac] = 1;
        write_six_param_block_to_offset_0x40(param_1);
        init_object_with_three_params_1036e1d6(param_1);
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        release_object_at_offset_0x14_1036dfd0(param_1);
        iVar1 = check_setting_0x72_enabled((void *)0x800158d4/*SDRAM*/);
        dispatch_object_state_update_1036e02a(param_1,iVar1);
        return param_1;
      }
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar4 = 2;
    }
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar4 = 1;
  }
  piVar3 = (int *)read_array_element_bounded(uVar2,uVar4);
  return piVar3;
}
