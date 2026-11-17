/* @k10d check_key_code_in_set @ 0x104de86a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 248_menu_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_key_code_in_set(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((((param_2 == 0x20) || (param_2 == 0x3c)) || (param_2 == 0x3e)) ||
     ((param_2 == 0x3d || (param_2 == 0x22)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if (0x1e < param_2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
