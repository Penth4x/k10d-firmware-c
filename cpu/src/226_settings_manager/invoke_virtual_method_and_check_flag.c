/* @k10d invoke_virtual_method_and_check_flag @ 0x104bf5cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 226_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool invoke_virtual_method_and_check_flag(int param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = (uint32_t *)(param_1 + 0x20);
  eventflag_clr_flg(puVar1,0x10);
  iVar2 = **(int **)(param_1 + 0x480);
  (((vtbl_entry*)(iVar2))[16].fn)
            ((int)*(int **)(param_1 + 0x480) + (int)((vtbl_entry*)(iVar2))[16].adj,param_1,param_2);
  eventflag_wai_flg(puVar1,0x10,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,0x10);
  return *(int *)(param_1 + 0x28) == 1;
}
