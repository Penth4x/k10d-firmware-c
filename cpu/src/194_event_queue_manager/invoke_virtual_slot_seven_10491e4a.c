/* @k10d invoke_virtual_slot_seven_10491e4a @ 0x10491e4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_10491e4a(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1);
  }
  return;
}
