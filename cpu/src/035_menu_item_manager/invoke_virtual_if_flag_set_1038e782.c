/* @k10d invoke_virtual_if_flag_set_1038e782 @ 0x1038e782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_if_flag_set_1038e782(int *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = get_or_init_static_buffer_10495746();
    param_1[9] = iVar1;
    *(uint8_t *)(param_1 + 8) = 0;
    (**(code **)(*param_1 + 0x84))((int)*(short *)(*param_1 + 0x80) + (int)param_1);
  }
  return;
}
