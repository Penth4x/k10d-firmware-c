/* @k10d dispatch_state_transition_10395ac4 @ 0x10395ac4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562d94 * dispatch_state_transition_10395ac4(cls_10562d94 *param_1,int *param_2)

{
  cls_10562d94 *pcVar1;
  int iVar2;
  
  pcVar1 = (cls_10562d94 *)dispatch_state_transition_10394958((cls_10563098 *)param_1,param_2);
  if (pcVar1 == param_1) {
    pcVar1 = param_1;
    if (*param_2 == 6) {
      iVar2 = check_and_process_event_103947cc(param_1);
      if (iVar2 == 0) {
        pcVar1 = (cls_10562d94 *)get_or_init_singleton_object_103938e2();
      }
    }
    else if (*param_2 == 7) {
      conditional_init_with_callback(param_1);
    }
  }
  return pcVar1;
}
