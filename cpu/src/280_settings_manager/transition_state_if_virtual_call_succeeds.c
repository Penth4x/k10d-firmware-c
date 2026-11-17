/* @k10d transition_state_if_virtual_call_succeeds @ 0x10521d46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void transition_state_if_virtual_call_succeeds(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) == 3) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 100))
                        (*(short *)(*(int *)(param_1 + 0xc) + 0x60) + param_1), iVar1 == 0)) {
    *(uint32_t *)(param_1 + 4) = 1;
  }
  return;
}
