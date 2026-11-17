/* @k10d check_flag_at_offset_8 @ 0x10476724
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_at_offset_8(int param_1,uint32_t param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = call_helper_with_offset_pointer_104752e2(*(int *)(param_1 + 8));
  *param_3 = iVar1;
  return iVar1 != 0;
}
