/* @k10d delete_signal_semaphore @ 0x10427312
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t delete_signal_semaphore(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    *param_1 = 0;
    param_1[3] = 0;
    uVar1 = sig_sem_obj(param_1 + 1);
  }
  return uVar1;
}
