/* @k10d configure_object_if_below_threshold @ 0x1043bdb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a04cc": ignoring multiple overlapping fields */

bool configure_object_if_below_threshold(cls_105a04cc *param_1,uint param_2,uint32_t param_3,uint32_t param_4)

{
  if (param_2 < 0x7c2) {
    (((vtbl_entry*)(param_1->field_0x4))[5].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[5].adj);
    *(short *)param_1->field_0x1c = (short)((int)((param_2 & 0xffff) * 0x42) >> 1) + -1;
    set_flag_with_fixed_length(param_1,param_4);
    call_helper_with_0xc000_1043bffa(param_1,0);
    call_helper_with_0xe00(param_1,0);
    set_flag_via_helper(param_1,1);
    clear_or_set_flag_in_param1(param_1,param_3);
    set_flag_on_object_1043c0b2(param_1,1);
  }
  return param_2 < 0x7c2;
}
