/* @k10d map_state_to_code @ 0x103a0e92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_state_to_code(cls_1056482c *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_setting_by_mode_flag_104f147e(param_1->field_0x28,0);
  uVar2 = 0;
  if ((param_1->field_0x40 == '\x1c') && (iVar1 == 1)) {
    uVar2 = 0x2020001;
  }
  else {
    switch(iVar1) {
    case 0:
      uVar2 = 0x2020001;
      break;
    case 1:
      uVar2 = 0x2020002;
      break;
    case 2:
      uVar2 = 0x2020003;
      break;
    case 3:
      uVar2 = 0x2020004;
      break;
    case 4:
      uVar2 = 0x2020005;
      break;
    case 5:
      uVar2 = 0x2020006;
    }
  }
  return uVar2;
}
