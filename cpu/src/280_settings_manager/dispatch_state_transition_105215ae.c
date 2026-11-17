/* @k10d dispatch_state_transition_105215ae @ 0x105215ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_105215ae(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    iVar1 = **(int **)(param_1 + 0x18);
    (**(code **)(iVar1 + 0x2c))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x28));
  }
  else if (*(int *)(param_1 + 0x10) == 4) {
    iVar1 = **(int **)(param_1 + 0x18);
    (**(code **)(iVar1 + 0x34))((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar1 + 0x30));
  }
  *(uint32_t *)(param_1 + 0x10) = 0;
  return;
}
