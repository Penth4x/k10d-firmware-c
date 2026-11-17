/* @k10d handle_event_flags_and_signal @ 0x10498702
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 8 of the object and signals a semaphore at offset 0x10 for
 *   specific event codes.
 * summary:
 *   The function checks param_2 against four specific values (0x10032, 0x10033, 0x10036,
 *   0x1000f). For the first two, it calls set_flg_obj on the pointer at param_1+8 and
 *   sig_sem_obj on the pointer at param_1+0x10. For the latter two, it only calls
 *   set_flg_obj. It returns 0. The specific meaning of the event codes and the object
 *   structure is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_event_flags_and_signal(int param_1,int param_2)

{
  if ((param_2 == 0x10032) || (param_2 == 0x10033)) {
    set_flg_obj((uint32_t *)(param_1 + 8));
    sig_sem_obj((void *)(param_1 + 0x10));
  }
  else if ((param_2 == 0x10036) || (param_2 == 0x1000f)) {
    set_flg_obj((uint32_t *)(param_1 + 8));
  }
  return 0;
}
