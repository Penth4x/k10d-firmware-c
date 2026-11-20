/* @k10d clear_flag_and_dispatch @ 0x10423700
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_dispatch(cls_1059dd24 *param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_create_singleton_object_104fb12e();
  uVar2 = *(uint32_t *)(iVar1 + 0x74);
  if (*(char *)&param_1->field_0x2a != '\0') {
    set_setting_and_dispatch(uVar2,param_1->field_0x20);
    write_value_to_struct_offset_104f2e56(uVar2,*(uint32_t *)&param_1->field_0x24);
    *(uint8_t *)&param_1->field_0x2a = 0;
  }
  update_state_and_notify((void *)param_1,param_2);
  return;
}
