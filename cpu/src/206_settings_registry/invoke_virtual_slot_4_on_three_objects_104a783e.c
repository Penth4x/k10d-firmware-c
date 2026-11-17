/* @k10d invoke_virtual_slot_4_on_three_objects_104a783e @ 0x104a783e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_three_objects_104a783e(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)get_or_create_singleton_object_1049aca6();
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  }
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)get_or_create_singleton_object_104a2fde();
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)get_or_create_singleton_104ceb32();
    (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
  }
  return;
}
