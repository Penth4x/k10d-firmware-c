/* @k10d signal_semaphore_if_pending @ 0x1042753c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t signal_semaphore_if_pending(uint32_t *param_1)

{
  uint32_t uVar1;
  uint8_t uVar2;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    uVar2 = sig_sem_obj((uint32_t *)__frv_reg_unset(4));
    *(uint8_t *)(param_1 + 4) = uVar2;
    param_1[2] = 0;
    uVar1 = sig_sem_obj(param_1);
  }
  return uVar1;
}
