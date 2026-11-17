/* @k10d set_twai_flag_via_helper @ 0x10498b42
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t set_twai_flag_via_helper(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  twai_flg_obj((uint32_t *)((int)param_1 + 8),uVar1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return 1;
}
