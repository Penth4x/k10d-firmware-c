/* @k10d invoke_virtual_slot_4_with_zero @ 0x10490d72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_4_with_zero(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x24))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x20),0);
  return 1;
}
