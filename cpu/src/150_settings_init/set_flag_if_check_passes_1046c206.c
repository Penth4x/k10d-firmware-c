/* @k10d set_flag_if_check_passes_1046c206 @ 0x1046c206
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 150_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_check_passes_1046c206(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if ((param_2 == 0x1000000) && (iVar1 = map_param_to_bitmask(param_1,param_3), iVar1 != 0)) {
    set_flg_obj((uint32_t *)(param_1 + 0xc0), iVar1);
  }
  return 0;
}
