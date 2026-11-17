/* @k10d invoke_object_method_and_check_flag_104bf9c0 @ 0x104bf9c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_object_method_and_check_flag_104bf9c0(int param_1,void *param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  *(uint8_t *)(param_1 + 0x1c) = 0;
  eventflag_clr_flg(puVar1,0x200);
  iVar2 = **(int **)(param_1 + 0x488);
  (**(code **)(iVar2 + 0x3c))
            ((int)*(int **)(param_1 + 0x488) + (int)*(short *)(iVar2 + 0x38),param_1,param_2);
  eventflag_wai_flg(puVar1,0x200,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x200);
  return *(int *)(param_1 + 0x28) == 1;
}
