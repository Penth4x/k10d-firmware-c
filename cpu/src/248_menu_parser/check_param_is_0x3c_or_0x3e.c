/* @k10d check_param_is_0x3c_or_0x3e @ 0x104de898
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_param_is_0x3c_or_0x3e(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0x3c) && (param_2 != 0x3e)) {
    uVar1 = 0;
  }
  return uVar1;
}
