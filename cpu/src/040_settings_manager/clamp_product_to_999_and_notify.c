/* @k10d clamp_product_to_999_and_notify @ 0x10397ddc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_product_to_999_and_notify(void *param_1)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_1 + 0x6c) * *(short *)((int)param_1 + 0x68);
  *(ushort *)((int)param_1 + 0x6a) = uVar1;
  if (999 < uVar1) {
    *(uint16_t *)((int)param_1 + 0x6a) = 999;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x44),(ushort *)((int)param_1 + 0x6a),3,1,'\0');
  return;
}
