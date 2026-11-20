/* @k10d invoke_virtual_if_flag_set_1038e782 @ 0x1038e782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_if_flag_set_1038e782(cls_10599780 *param_1)

{
  uint32_t uVar1;
  
  if (*(char *)&param_1->field_0x20 != '\0') {
    uVar1 = get_or_init_static_buffer_10495746();
    param_1->field_0x24 = uVar1;
    *(uint8_t *)&param_1->field_0x20 = 0;
    (((vtbl_entry*)(param_1->field_0x0))[16].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[16].adj);
  }
  return;
}
