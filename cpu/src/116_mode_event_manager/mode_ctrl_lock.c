/* @k10d mode_ctrl_lock @ 0x104314a2
 * name: verified (structural evidence: d313: twai_sem_obj(obj+0x74, -1); startup task 0x104320bc holds it for its whole sequence, screen-manager sink update 0x1043068c blocks on it)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Take the mode controller's lock (semaphore at obj+0x74, wait forever).
 * summary:
 *   VERIFIED: d313: twai_sem_obj(obj+0x74, -1); startup task 0x104320bc holds it for its
 *   whole sequence, screen-manager sink update 0x1043068c blocks on it
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t mode_ctrl_lock(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = _DAT_105a2bf0/*ROM*/;
  if (param_2 != 0) {
    uVar1 = _DAT_105a2bf4/*ROM*/;
  }
  uVar1 = twai_sem_obj((void *)(param_1 + 0x74),uVar1);
  return uVar1;
}
