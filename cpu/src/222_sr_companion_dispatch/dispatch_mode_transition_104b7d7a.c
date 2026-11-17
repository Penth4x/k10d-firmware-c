/* @k10d dispatch_mode_transition_104b7d7a @ 0x104b7d7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_mode_transition_104b7d7a(int param_1,int param_2)

{
  int iVar1;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)(param_1 + 0x24);
  eventflag_clr_flg(puVar2,1);
  if (param_2 == 1) {
    iVar1 = issue_virtual_command_sequence(*(int **)(param_1 + 0xc),(void *)(param_1 + 4),1);
  }
  else {
    if (param_2 == 2) {
      iVar1 = 1;
    }
    else {
      eventflag_clr_flg(puVar2,1);
      iVar1 = issue_virtual_command_sequence(*(int **)(param_1 + 0xc),(void *)(param_1 + 4),0);
      if (iVar1 == 0) {
        return 0;
      }
      twai_flg_obj(puVar2,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(puVar2,1);
      iVar1 = 0;
    }
    iVar1 = issue_object_command_sequence(*(int **)(param_1 + 0xc),(void *)(param_1 + 4),iVar1);
  }
  if (iVar1 != 0) {
    twai_flg_obj(puVar2,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
