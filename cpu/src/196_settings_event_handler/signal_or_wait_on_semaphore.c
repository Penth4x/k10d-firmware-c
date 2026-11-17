/* @k10d signal_or_wait_on_semaphore @ 0x10492bdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void signal_or_wait_on_semaphore(int param_1,int param_2)

{
  if (param_2 == 0) {
    sig_sem_obj((void *)(param_1 + 0x34));
  }
  else {
    twai_sem_obj((void *)(param_1 + 0x34),_DAT_105a2bf0/*ROM*/);
  }
  return;
}
