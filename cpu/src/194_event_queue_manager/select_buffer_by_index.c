/* @k10d select_buffer_by_index @ 0x10491612
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_buffer_by_index(uint32_t *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = *param_1;
  }
  else if (iVar2 == 1) {
    uVar1 = param_1[1];
  }
  else if (iVar2 == 2) {
    uVar1 = param_1[2];
  }
  return uVar1;
}
