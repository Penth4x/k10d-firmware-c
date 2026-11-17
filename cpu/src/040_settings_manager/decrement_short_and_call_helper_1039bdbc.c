/* @k10d decrement_short_and_call_helper_1039bdbc @ 0x1039bdbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_short_and_call_helper_1039bdbc(void *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)((int)param_1 + 100) + -1;
  *(short *)((int)param_1 + 100) = sVar1;
  if (sVar1 == 0) {
    *(uint16_t *)((int)param_1 + 100) = 1;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 100),3,1,'\0');
  return;
}
