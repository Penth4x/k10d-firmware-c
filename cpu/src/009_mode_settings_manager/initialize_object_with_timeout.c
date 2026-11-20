/* @k10d initialize_object_with_timeout @ 0x103679ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105579a8 * initialize_object_with_timeout(cls_105579a8 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 5;
  iVar1 = query_state_and_flag_range(param_1,&iStack_c);
  if (iVar1 == 0) {
    if (iStack_c == 1) {
      init_object_with_state_three_1036822e((void *)__frv_reg_unset(4));
    }
    else {
      param_1->field_0x9c = 0;
      set_flag_pair_from_ram(param_1);
      write_timer_params_to_object(param_1);
      init_object_with_three_params_10367c9e(param_1);
      (((vtbl_entry*)(param_1->field_0x0))[8].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
      init_struct_with_three_calls(param_1);
      write_second_field_via_helper_1036c486(param_1,180000);
      write_second_field_of_struct(param_1,0);
    }
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    param_1 = (cls_105579a8 *)read_array_element_bounded(uVar2,1);
  }
  return param_1;
}
