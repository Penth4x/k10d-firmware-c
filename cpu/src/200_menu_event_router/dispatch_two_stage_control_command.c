/* @k10d dispatch_two_stage_control_command @ 0x10498776
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Routes a 6-case command to two helper functions, optionally chaining a second call
 *   based on the first result.
 * summary:
 *   The function switches on param_2 (values 1-6) and calls dispatch_object_event_10498ac6
 *   or set_twai_flag_via_helper with param_1 and a 0/1 flag. For cases 3 and 4, it calls
 *   dispatch_object_event_10498ac6 first and only calls set_twai_flag_via_helper if the
 *   first call returns non-zero. The return value is propagated from the last helper
 *   called. The specific subsystem (e.g., shutter, mirror, SR) is not identifiable from the
 *   pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_two_stage_control_command(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 1:
    iVar1 = dispatch_object_event_10498ac6(param_1,1);
    break;
  case 2:
    iVar1 = dispatch_object_event_10498ac6(param_1,0);
    break;
  case 3:
    iVar1 = dispatch_object_event_10498ac6(param_1,1);
    if (iVar1 != 0) {
      set_twai_flag_via_helper(param_1,1);
    }
    break;
  case 4:
    iVar1 = dispatch_object_event_10498ac6(param_1,0);
    if (iVar1 != 0) {
      set_twai_flag_via_helper(param_1,0);
    }
    break;
  case 5:
    iVar1 = set_twai_flag_via_helper(param_1,1);
    break;
  case 6:
    iVar1 = set_twai_flag_via_helper(param_1,0);
  }
  return iVar1;
}
