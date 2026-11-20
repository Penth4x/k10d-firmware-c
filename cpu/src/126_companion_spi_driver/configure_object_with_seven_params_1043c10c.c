/* @k10d configure_object_with_seven_params_1043c10c @ 0x1043c10c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_object_with_seven_params_1043c10c(void *param_1,uint16_t param_2,uint32_t param_3,uint32_t param_4,
                 uint8_t param_5)

{
  (((vtbl_entry*)(*(int *)((int)param_1 + 4)))[5].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_1 + 4)))[5].adj + (int)param_1);
  **(uint16_t **)((int)param_1 + 0x1c) = param_2;
  call_helper_with_0xe00(param_1,0xe00);
  call_helper_with_0x3000(param_1,param_3);
  set_flag_with_fixed_length(param_1,param_5);
  call_helper_with_0xc000_1043bffa(param_1,0);
  set_flag_via_helper(param_1,1);
  clear_or_set_flag_in_param1(param_1,param_4);
  set_flag_on_object_1043c0b2(param_1,1);
  return;
}
