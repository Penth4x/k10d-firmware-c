/* @k10d write_six_fields_to_param4 @ 0x1047f082
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_six_fields_to_param4(uint32_t param_1,uint param_2,uint param_3,void *param_4)

{
  store_second_word(param_4,((int)param_2 >> 9) + 0x7bcU & 0xffff);
  set_clamped_byte_field(param_4,(int)param_2 >> 5 & 0xf);
  clamp_and_store_byte_at_offset3(param_4,param_2 & 0x1f,0);
  store_capped_byte_at_offset(param_4,(int)param_3 >> 0xb & 0xff);
  store_clamped_byte_at_offset_6(param_4,(int)param_3 >> 5 & 0x3f);
  store_clamped_byte_at_offset_7(param_4,(param_3 & 0x1f) << 1);
  return;
}
