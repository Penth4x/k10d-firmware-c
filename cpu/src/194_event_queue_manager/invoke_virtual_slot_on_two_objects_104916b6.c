/* @k10d invoke_virtual_slot_on_two_objects_104916b6 @ 0x104916b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_104916b6(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x18);
  (((vtbl_entry*)(iVar1))[2].fn)(*param_1 + (int)((vtbl_entry*)(iVar1))[2].adj);
  iVar1 = *(int *)(param_1[1] + 0x18);
  (((vtbl_entry*)(iVar1))[2].fn)(param_1[1] + (int)((vtbl_entry*)(iVar1))[2].adj);
  return;
}
