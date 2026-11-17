/* @k10d store_two_params_and_notify @ 0x10397b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_params_and_notify(void *param_1,uint16_t param_2,uint16_t param_3)

{
  int *piVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_14 [3];
  
  puVar2 = auStackY_14;
  *(uint16_t *)((int)param_1 + 100) = param_2;
  *(uint16_t *)((int)param_1 + 0x66) = param_3;
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x38),(ushort *)((int)param_1 + 100),3,1,'\0');
  piVar1 = *(int **)((int)param_1 + 0x3c);
  puVar2[3] = 0;
  puVar2[7] = 0;
  classify_value_and_build_menu(param_1,piVar1,(ushort *)((int)param_1 + 0x66),4,puVar2[3],puVar2[7]);
  return;
}
