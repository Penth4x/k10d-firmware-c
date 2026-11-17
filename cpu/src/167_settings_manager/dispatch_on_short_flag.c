/* @k10d dispatch_on_short_flag @ 0x10478d78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_short_flag(uint32_t param_1,short *param_2)

{
  uint32_t uVar1;
  
  if (*param_2 == 0) {
    uVar1 = check_and_init_object_field(__frv_reg_unset(4));
  }
  else {
    uVar1 = initialize_sensor_readout_state(__frv_reg_unset(4),(uint16_t *)__frv_reg_unset(5));
  }
  return uVar1;
}
