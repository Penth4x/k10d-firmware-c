/* @k10d invoke_callback_if_param2_nonzero @ 0x104e65a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_callback_if_param2_nonzero(int param_1,int param_2)

{
  if (param_2 != 0) {
    (*(code *)0x10521296/*ROM*/)(param_2,param_1 + 0x2c);
  }
  return param_2 != 0;
}
