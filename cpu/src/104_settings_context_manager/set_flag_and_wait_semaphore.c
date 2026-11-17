/* @k10d set_flag_and_wait_semaphore @ 0x1042750e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool set_flag_and_wait_semaphore(uint32_t *param_1,int param_2)

{
  if (param_2 != 0) {
    twai_sem_obj(param_1,_DAT_105a2bf0/*ROM*/);
    param_1[2] = param_2;
  }
  return param_2 != 0;
}
