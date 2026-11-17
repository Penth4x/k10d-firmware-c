/* @k10d invoke_virtual_slot_3_on_nested_object_104671e6 @ 0x104671e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_nested_object_104671e6(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x34) + 4);
  (**(code **)(iVar1 + 0x1c))
            (*(int *)((int)param_1 + 0x34) + 4 + (int)*(short *)(iVar1 + 0x18),(int)param_1 + 0x20,0
            );
  return 1;
}
