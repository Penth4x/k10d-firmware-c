/* @k10d release_object_and_call_helper @ 0x10391662
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_object_and_call_helper(int param_1, uint32_t param_x1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c48);
  if (piVar1 != (int *)0x0) {
    *(uint32_t *)(param_1 + 0x2c48) = 0;
    (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
  }
  invoke_virtual_slot2_on_four_objects_10394478();
  return 1;
}
