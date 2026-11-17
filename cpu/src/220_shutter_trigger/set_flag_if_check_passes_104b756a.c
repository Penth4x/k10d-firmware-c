/* @k10d set_flag_if_check_passes_104b756a @ 0x104b756a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_check_passes_104b756a(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if ((param_2 == 0x1000000) && (iVar1 = map_mode_code_to_flag(param_1,param_3), iVar1 != 0)) {
    set_flg_obj((uint32_t *)(param_1 + 4));
  }
  return 0;
}
