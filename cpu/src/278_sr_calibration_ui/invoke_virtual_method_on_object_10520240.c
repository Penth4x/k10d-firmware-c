/* @k10d invoke_virtual_method_on_object_10520240 @ 0x10520240
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10520240(int param_1)

{
  int iVar1;
  uint32_t in_stack_00000000;
  
  *(uint32_t *)(param_1 + 4) = in_stack_00000000;
  (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 0x10),param_1 + 8,1,0);
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x44))
            ((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x40),1,
             *(uint32_t *)(param_1 + 0x10));
  return;
}
