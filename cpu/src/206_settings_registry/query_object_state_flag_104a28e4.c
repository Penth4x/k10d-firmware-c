/* @k10d query_object_state_flag_104a28e4 @ 0x104a28e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_object_state_flag_104a28e4(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xc);
  iVar1 = (**(code **)(iVar1 + 0x1c))
                    ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x18),3);
  return iVar1 != 0;
}
