/* @k10d release_object_and_signal_semaphore @ 0x104300bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_signal_semaphore(cls_1059efac *param_1,int param_2)

{
  process_mode_transition_event_1042f7f0((int)(param_1)/* B-3: stock r4 = param_1 */,(int *)__frv_reg_unset(5));
  if (param_2 != 0) {
    *(uint32_t *)(param_2 + 0x24) = 0x1059ef9c/*ROM*/;
    if (param_2 != 0) {
      *(uint32_t *)(param_2 + 0x10) = 0x1059ef9c/*ROM*/;
    }
    heap_free(param_2);
  }
  sig_sem_obj((void *)&param_1->field_0x20);
  return;
}
