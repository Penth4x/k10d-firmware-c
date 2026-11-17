/* @k10d check_flag_match_in_array @ 0x104ab722
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_match_in_array(void *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_5 != 0) {
    do {
      if ((param_3 & param_4) == (*param_2 & param_4)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_5);
  }
  return 0;
}
