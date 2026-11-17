/* @k10d set_pointer_and_clear_flag @ 0x10427270
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool set_pointer_and_clear_flag(int *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    twai_sem_obj(param_1 + 1,_DAT_105a2bf0/*ROM*/);
    *param_1 = (int)param_2;
    param_1[3] = 0;
  }
  return param_2 != (void *)0x0;
}
