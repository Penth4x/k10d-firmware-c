/* @k10d call_virtual_slot_6_10491e2a @ 0x10491e2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_6_10491e2a(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
  }
  return;
}
