/* @k10d configure_object_with_five_params @ 0x1043c756
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_object_with_five_params(void *param_1,uint32_t param_2,uint32_t param_3,int param_4,byte param_5)

{
  (((vtbl_entry*)(*(int *)((int)param_1 + 4)))[5].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_1 + 4)))[5].adj + (int)param_1);
  call_helper_with_0x1000(param_1,0x1000);
  **(uint32_t **)((int)param_1 + 0x1c) = param_2;
  call_helper_with_0x1000(param_1,0);
  call_helper_with_0xc00_flag(param_1,0xc00);
  call_helper_with_fixed_size(param_1,param_3);
  set_flag_with_default(param_1,(uint)param_5);
  set_two_byte_state_flag(param_1,1);
  clear_or_set_flag_18(param_1,param_4);
  set_flag_on_object_1043c6fc(param_1,1);
  return;
}
