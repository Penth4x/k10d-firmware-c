/* @k10d store_two_words_and_call_helper_1039ae84 @ 0x1039ae84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_words_and_call_helper_1039ae84(void *param_1,uint16_t param_2,uint16_t param_3)

{
  int *piVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t auStackY_14 [3];
  
  puVar2 = auStackY_14;
  *(uint16_t *)((int)param_1 + 0x2c) = param_2;
  *(uint16_t *)((int)param_1 + 0x2e) = param_3;
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x24),(ushort *)((int)param_1 + 0x2c),3,1,'\0');
  piVar1 = *(int **)((int)param_1 + 0x28);
  puVar2[3] = 1;
  puVar2[7] = 1;
  classify_value_and_build_menu(param_1,piVar1,(ushort *)((int)param_1 + 0x2e),3,puVar2[3],puVar2[7]);
  return;
}
