/* @k10d invoke_virtual_slot_two_on_two_objects_104cebdc @ 0x104cebdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 238_settings_framework (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104cebdc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),0);
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x1c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x18),0);
  return;
}
