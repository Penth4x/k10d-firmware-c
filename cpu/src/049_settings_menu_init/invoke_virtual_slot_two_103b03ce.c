/* @k10d invoke_virtual_slot_two_103b03ce @ 0x103b03ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_103b03ce(cls_10565d08 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x112006f,0);
  return;
}
