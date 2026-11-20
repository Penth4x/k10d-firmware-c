/* @k10d signal_sem_if_flag_set @ 0x1052b556
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Sets a status field to 2 if param_2 is 0x41000 and *param_3 is 1, then signals a
 *   semaphore.
 * summary:
 *   The function initializes the field at offset 0xc of the object to 0. It checks if
 *   param_2 equals 0x41000 and param_3 is non-null. If *param_3 is 1, it sets the field at
 *   offset 0xc to 2 and calls sig_sem_obj on the semaphore at offset 4. If *param_3 is not
 *   1, it returns early without signaling. This appears to be a virtual method (slot 2) for
 *   handling a specific event or state change.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t signal_sem_if_flag_set(cls_105f9bb0 *param_1,int param_2,int *param_3)

{
  param_1->field_0xc = 0;
  if ((param_2 == 0x41000) && (param_3 != (int *)0x0)) {
    if (*param_3 == 0) {
      param_1->field_0xc = 0;
    }
    else {
      if (*param_3 != 1) {
        return 0;
      }
      param_1->field_0xc = 2;
    }
    sig_sem_obj(&param_1->field_0x4);
  }
  return 0;
}
