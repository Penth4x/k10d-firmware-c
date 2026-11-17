/* @k10d set_next_pointer_if_null @ 0x10427d4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_next_pointer_if_null(void *param_1,void *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)param_1 + 4) == 0) && (param_2 != param_1)) {
    *(void **)((int)param_1 + 4) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}
