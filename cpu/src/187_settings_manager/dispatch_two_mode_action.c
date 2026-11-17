/* @k10d dispatch_two_mode_action @ 0x1048aa2e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to a helper when param_2 is 2, otherwise nulls the first pointer when
 *   param_2 is 1.
 * summary:
 *   This virtual method (slot 2 of cls_105b3ae4) branches on the integer parameter param_2.
 *   If param_2 equals 2, it calls dispatch_virtual_event_flags with param_1 and param_3. If
 *   param_2 equals 1, it sets param_1 to NULL. It returns the (possibly modified) param_1
 *   pointer. The specific camera subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * dispatch_two_mode_action(int *param_1,int param_2,int *param_3)

{
  if (param_2 == 2) {
    dispatch_virtual_event_flags(param_1,param_3);
  }
  else if (param_2 == 1) {
    param_1 = (int *)0x0;
  }
  return param_1;
}
