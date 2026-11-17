/* @k10d mode_ctrl_unlock @ 0x104314cc
 * name: verified (structural evidence: d313: sig_sem_obj(obj+0x74); the startup task's only release is its last step (runs in a 150 s emulated boot))
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Release the mode controller's lock (semaphore at obj+0x74).
 * summary:
 *   VERIFIED: d313: sig_sem_obj(obj+0x74); the startup task's only release is its last step
 *   (runs in a 150 s emulated boot)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mode_ctrl_unlock(void *param_1)

{
  sig_sem_obj((int)param_1 + 0x74);
  return;
}
