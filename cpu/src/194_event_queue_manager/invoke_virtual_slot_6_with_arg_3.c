/* @k10d invoke_virtual_slot_6_with_arg_3 @ 0x104922fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_6_with_arg_3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x34))(*(short *)(*(int *)(iVar1 + 0xc) + 0x30) + iVar1,3);
  }
  return;
}
