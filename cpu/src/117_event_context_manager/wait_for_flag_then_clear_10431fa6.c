/* @k10d wait_for_flag_then_clear_10431fa6 @ 0x10431fa6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool wait_for_flag_then_clear_10431fa6(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1000;
  }
  bVar1 = twai_flg_obj((uint32_t *)((int)param_1 + 0x7c),0x10,(void *)0x0,iVar2);
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x7c),0x10);
  return bVar1;
}
