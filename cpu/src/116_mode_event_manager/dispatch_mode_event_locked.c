/* @k10d dispatch_mode_event_locked @ 0x1043111a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Acquires a mode control lock, validates state, forwards three parameters to a handler,
 *   and signals completion.
 * summary:
 *   The function calls mode_ctrl_lock to protect the object state. If the lock succeeds, it
 *   checks a condition via check_two_conditions_on_object. On success, it invokes
 *   write_three_values_to_target_104aa0a4 with a pointer from offset 0x34 of the object and
 *   the three input parameters, then calls mode_ctrl_on_status_h_104329b0 with a constant
 *   argument of 5. Finally, it releases the lock via mode_ctrl_unlock.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_event_locked(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = mode_ctrl_lock((int)param_1,0);
  if (iVar1 != 0) {
    iVar1 = check_two_conditions_on_object(param_1);
    if (iVar1 == 0) {
      write_three_values_to_target_104aa0a4(*(uint32_t *)((int)param_1 + 0x34),param_2,param_3,param_4);
      mode_ctrl_on_status_h_104329b0((int)param_1,(void *)0x5);
    }
    mode_ctrl_unlock(param_1);
  }
  return 0;
}
