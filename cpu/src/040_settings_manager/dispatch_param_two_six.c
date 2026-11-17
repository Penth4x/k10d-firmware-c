/* @k10d dispatch_param_two_six @ 0x10391f16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1 and param_2, then branches on param_2 value 6 to call two
 *   additional helpers.
 * summary:
 *   The function first calls dispatch_state_transition_10394958 with param_1, param_2, and
 *   0. If param_2 equals 6 and check_and_process_event_103947cc returns 0, it calls
 *   get_or_init_sram_object_103973c4 and passes the result to dispatch_on_mode_value.
 *   Otherwise, if the initial call returned param_1, it returns param_1. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * dispatch_param_two_six(void *param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)dispatch_state_transition_10394958(param_1,param_2,0);
  if ((*param_2 == 6) && (iVar2 = check_and_process_event_103947cc(param_1), iVar2 == 0)) {
    iVar2 = get_or_init_sram_object_103973c4();
    pvVar1 = (void *)dispatch_on_mode_value(iVar2);
  }
  else if (pvVar1 == param_1) {
    pvVar1 = param_1;
  }
  return pvVar1;
}
