/* @k10d set_pointer_if_null @ 0x10426ff0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_pointer_if_null(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)((int)param_1 + 0x38) == 0;
  if (bVar1) {
    *(void **)((int)param_1 + 0x38) = param_2;
  }
  return bVar1;
}
