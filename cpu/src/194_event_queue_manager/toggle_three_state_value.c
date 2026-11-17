/* @k10d toggle_three_state_value @ 0x1049165e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_three_state_value(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    uVar2 = 0;
  }
  *(uint32_t *)(param_1 + 0xc) = uVar2;
  return;
}
