/* @k10d set_three_fields_at_offset_c @ 0x10392dca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_fields_at_offset_c(void *param_1,int param_2,ushort param_3,ushort param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)((int)param_1 + 0xc);
  set_flag_and_update_two_fields_103984ce(pvVar1,param_2);
  clamp_and_store_short_field(pvVar1,(uint)param_3);
  clamp_and_store_short_value(pvVar1,(uint)param_4);
  return;
}
