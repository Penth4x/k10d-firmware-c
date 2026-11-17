/* @k10d reset_vtable_and_free_if_flagged_10496932 @ 0x10496932
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * reset_vtable_and_free_if_flagged_10496932(uint32_t *param_1,uint param_2)

{
  uint32_t *extraout_r4;
  
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105b5264/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
    param_1 = extraout_r4;
  }
  return param_1;
}
