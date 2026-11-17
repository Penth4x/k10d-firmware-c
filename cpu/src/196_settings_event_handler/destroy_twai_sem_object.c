/* @k10d destroy_twai_sem_object @ 0x10492c0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Destroys a TWAI semaphore object and then a signal semaphore object located at offset
 *   0x2c of a given structure.
 * summary:
 *   The function takes a pointer to a structure and calls twai_sem_obj on the member at
 *   offset 0x2c, passing a global DAT_105a2bf0 as a second argument. It then calls
 *   sig_sem_obj on the same member. This pattern is consistent with µITRON/REALOS kernel
 *   primitive cleanup or deletion routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void destroy_twai_sem_object(int param_1)

{
  twai_sem_obj((void *)(param_1 + 0x2c),_DAT_105a2bf0/*ROM*/);
  sig_sem_obj((void *)(param_1 + 0x2c));
  return;
}
